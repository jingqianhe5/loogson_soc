#!/usr/bin/env python3
"""Merge the CPU binary and the TPU instruction stream into SRAM images.

This example keeps the CPU program at 0x1C000000 and places the TPU
instruction stream shortly after it so the whole image can stay compact.
"""

from __future__ import annotations

import argparse
import json
import struct
from pathlib import Path


SCRIPT_DIR = Path(__file__).resolve().parent
DEFAULT_INPUT_TXT = SCRIPT_DIR / "digit_input.txt"

# CPU 程序和 TPU 指令流都放在片上 SRAM 里。
# CPU_BASE 是 CPU 复位后取指/运行的软件起始地址。
# TPU_BASE 是 TPU master 取自己专属指令的起始地址，必须和：
#   1. C 程序 main.c 里的 TPU_START_PC
#   2. RTL 顶层 soc_top.v 里的 TPU_INSN_START_PC
# 保持一致。
CPU_BASE = 0x1C000000
TPU_BASE = 0x1C00B000

# TPU 内部有几类地址指针，这里是 UB_READ 指令的 ptr_select 字段。
# PTR_INPUT  表示从输入数据区域读 x。
# PTR_WEIGHT 表示从权重区域读 w。
# PTR_BIAS   表示从 bias 区域读偏置。
# 前向传播
PTR_INPUT = 0
PTR_WEIGHT = 1
PTR_BIAS = 2

# 下面这些是 TPU unified buffer 内部地址，不是 CPU 的 0x1c... 总线地址。
# X_BASE       放 1x8 输入 tile。
# W_BASE       放 8x8 权重 tile。
# B_BASE       放 1x8 bias tile。
# SCRATCH_BASE 放当前 tile 计算得到的中间/输出结果。
# ub内部空间划分
X_BASE = 0
W_BASE = 32
B_BASE = 128
SCRATCH_BASE = 256# 临时存放结果的地址 一共十个地址

# TPU 专属指令的 opcode，高 4 bit。
# 这些编码要和 RTL 里的 TPU instruction decoder 保持一致。
OP_NOP = 0x0
OP_LOAD = 0x1
OP_SET_WR = 0x2
OP_UB_READ = 0x3
OP_SWITCH = 0x4
OP_WAIT = 0x5
OP_END = 0xF

# WAIT 指令的等待类型。
# 当前脚本使用 WAIT_CYCLES，也就是等固定周期。
# WAIT_WEIGHT/WAIT_VPU 是硬件里预留/曾经使用的事件等待方式，这里先保留名字。
WAIT_CYCLES = 0
WAIT_WEIGHT = 1
WAIT_VPU = 2

# 这些等待值用于 TPU 指令调度。
# 当前硬件里 weight 有 PE 内部双缓冲：UB_READ weight 先写入 weight_in_buffer，
# SWITCH 再把 buffer 切到 weight_in_active 参与计算。
WEIGHT_READY_WAIT = 32
SWITCH_SETTLE_WAIT = 12
INPUT_DRAIN_WAIT = 16
COMPUTE_WAIT = 160
PRELOAD_TAIL_WAIT = 0


def word_load(addr: int, data: int) -> int:
    """生成 LOAD 指令：把一个 16-bit 数据写入 TPU 内部 UB 地址。"""
    # [31:28] opcode
    # [27:16] addr，TPU 内部 UB 地址，最多 12 bit
    # [15: 0] data，写入的 16-bit 定点数
    return ((OP_LOAD & 0xF) << 28) | ((addr & 0x0FFF) << 16) | (data & 0xFFFF)


def word_set_wr(addr: int, accumulate: bool = False) -> int:
    """生成 SET_WR 指令：设置 TPU 后续写回结果的位置。"""
    # [31:28] opcode
    # [27:16] addr，结果写回 UB 的起始地址
    # [15]    accumulate，1 表示写回时做累加，0 表示覆盖
    return (
        ((OP_SET_WR & 0xF) << 28)
        | ((addr & 0x0FFF) << 16)
        | ((1 if accumulate else 0) << 15)
    )


def word_ub_read(ptr_select: int, addr: int, row_size: int, col_size: int, transpose: bool, vpu_mode: int) -> int:
    """生成 UB_READ 指令：让 TPU 从 UB 读一块矩阵/向量送去计算。"""
    # [31:28] opcode
    # [27:25] ptr_select，选择 input/weight/bias 哪一路逻辑指针
    # [24:13] addr，TPU 内部 UB 起始地址
    # [12: 9] row_size，读多少行
    # [ 8: 5] col_size，读多少列
    # [ 4]    transpose，读 weight tile 时会置 1，方便 8x8 矩阵乘
    # [ 3: 0] vpu_mode，控制是否带 bias/激活等 VPU 行为
    return (
        ((OP_UB_READ & 0xF) << 28)
        | ((ptr_select & 0x7) << 25)
        | ((addr & 0x0FFF) << 13)
        | ((row_size & 0xF) << 9)
        | ((col_size & 0xF) << 5)
        | ((1 if transpose else 0) << 4)
        | (vpu_mode & 0xF)
    )


def word_switch() -> int:
    """生成 SWITCH 指令：切换/提交前面装载好的数据，让 TPU 开始下一阶段。"""
    return (OP_SWITCH & 0xF) << 28


def word_wait(wait_type: int, limit: int = 0) -> int:
    """生成 WAIT 指令：等待固定周期或等待硬件事件。"""
    # [31:28] opcode
    # [27:24] wait_type
    # [23: 0] limit，WAIT_CYCLES 时表示等待多少周期
    return ((OP_WAIT & 0xF) << 28) | ((wait_type & 0xF) << 24) | (limit & 0xFFFFFF)


def word_end() -> int:
    """生成 END 指令：告诉 TPU 指令流结束。"""
    return (OP_END & 0xF) << 28


def load_binary_words(path: Path) -> list[int]:
    """读取 CPU 生成的 .bin，并按小端 32-bit word 转成列表。"""
    data = path.read_bytes()
    words: list[int] = []
    for offset in range(0, len(data), 4):
        chunk = data[offset:offset + 4]
        # bin 长度不一定刚好是 4 字节对齐，最后不足 4 字节就补 0。
        if len(chunk) < 4:
            chunk = chunk + b"\x00" * (4 - len(chunk))
        words.append(struct.unpack("<I", chunk)[0])
    return words


def signed16(value: int) -> int:
    """把 16-bit 补码解释成 Python 有符号整数。"""
    value &= 0xFFFF
    return value - 0x10000 if value & 0x8000 else value


def parse_pixel_token(token: str) -> int:
    """把 txt 里的一个像素值转换成 TPU 使用的 Q8.8 16-bit 数据。"""
    # 写 0x0100 这种十六进制时，认为你已经手动写好了 Q8.8 原始值。
    if token.lower().startswith("0x"):
        return int(token, 16) & 0xFFFF

    value = float(token)
    if value < 0:
        raise ValueError(f"pixel value must be >= 0, got {token}")

    # 推荐写 0/1：0 表示黑，1 表示亮，脚本会转成 0x0000/0x0100。
    if value <= 1.0:
        return int(round(value * 256.0)) & 0xFFFF

    # 也允许写 0~255 灰度值，脚本会归一化到 0.0~1.0 再转 Q8.8。
    if value <= 255.0:
        return int(round(value * 256.0 / 255.0)) & 0xFFFF

    raise ValueError(f"pixel value must be 0..1, 0..255, or raw hex Q8.8, got {token}")


def load_input_txt(path: Path) -> list[int]:
    """读取 digit_input.txt：要求正好 8 行 x 8 列，也就是 64 个像素。"""
    tokens: list[str] = []
    for line in path.read_text().splitlines():
        # 支持用 # 写注释，逗号和空格都可以作为分隔符。
        line = line.split("#", 1)[0].replace(",", " ").strip()
        if not line:
            continue
        tokens.extend(line.split())

    if len(tokens) != 64:
        raise SystemExit(f"{path} must contain exactly 64 pixel values, got {len(tokens)}")

    try:
        return [parse_pixel_token(token) for token in tokens]
    except ValueError as exc:
        raise SystemExit(str(exc)) from exc


'''def predict_linear(weights: list[list[int]], bias: list[int], sample: list[int]) -> int:
    """用同一份权重在 Python 侧粗略算一次预测值，方便和 TPU 输出对比。"""
    scores: list[int] = []
    for cls in range(10):
        acc = signed16(bias[cls])
        for pix in range(64):
            acc += (signed16(sample[pix]) * signed16(weights[pix][cls])) >> 8
        scores.append(acc)
    return max(range(10), key=lambda idx: scores[idx])
'''

def load_model(path: Path) -> tuple[list[list[int]], list[int], list[int], int, int]:
    """读取训练脚本导出的 json：权重、bias、测试图片、标签和 Python 预测结果。"""
    model = json.loads(path.read_text())
    # weights 形状是 [64][10]：
    #   64 对应 8x8 图片拉平后的 64 个像素
    #   10 对应数字 0~9 的 10 个分类结果
    weights = [[int(v, 16) for v in row] for row in model["weights_q8_8_hex"]]
    bias = [int(v, 16) for v in model["bias_q8_8_hex"]]
    examples = model["test_examples"]
    # 当前 demo 固定拿 test_examples[0] 作为要放进 TPU 的那张测试图。
    sample = [int(v, 16) for v in examples[0]["pixels_q8_8"]]
    label = int(examples[0]["label"])
    prediction = int(examples[0]["prediction"])
    return weights, bias, sample, label, prediction


def build_tpu_program(weights: list[list[int]], bias: list[int], sample: list[int]) -> list[int]:
    """把一张 8x8 图片和线性分类层参数转换成 TPU 指令流。"""
    program: list[int] = []

    def make_tile(c_tile: int, k_tile: int) -> tuple[list[int], list[int], list[int] | None]:
        """整理一个 1x8 input tile、8x8 weight tile，以及可选 bias tile。"""
        x_tile = [sample[k_tile * 8 + k] for k in range(8)]
        w_tile: list[int] = []
        for k in range(8):
            input_idx = k_tile * 8 + k
            for lane in range(8):
                cls = c_tile * 8 + lane
                # c_tile=1 时只有 class8/9 有效，其余 lane 用 0 填充。
                w_tile.append(weights[input_idx][cls] if cls < 10 else 0)

        bias_tile = None
        if k_tile == 7:
            bias_tile = [bias[c_tile * 8 + lane] if (c_tile * 8 + lane) < 10 else 0 for lane in range(8)]
        return x_tile, w_tile, bias_tile

    def append_load_x(x_tile: list[int]) -> None:
        """把 1x8 输入 tile 写到 X_BASE。"""
        for i, value in enumerate(x_tile):
            program.append(word_load(X_BASE + i, value))

    def append_load_w(w_tile: list[int]) -> None:
        """把 8x8 权重 tile 写到 W_BASE。"""
        for i, value in enumerate(w_tile):
            program.append(word_load(W_BASE + i, value))

    def append_preload_weight(x_tile: list[int], w_tile: list[int]) -> None:
        """预装下一 tile：输入放 UB，权重读入 PE 的 weight_in_buffer。"""
        append_load_x(x_tile)
        append_load_w(w_tile)
        program.append(word_ub_read(PTR_WEIGHT, W_BASE, 8, 8, True, 0x0))
        program.append(word_wait(WAIT_CYCLES, WEIGHT_READY_WAIT))

    def append_wait_cycles(limit: int) -> None:
        """只在确实需要等待时发 WAIT，避免 0-cycle WAIT 也占一条取指。"""
        if limit > 0:
            program.append(word_wait(WAIT_CYCLES, limit))

    tiles = [make_tile(c_tile, k_tile) for c_tile in range(2) for k_tile in range(8)]

    # 目标计算是：
    #   [1 x 64] input  *  [64 x 10] weight  + [1 x 10] bias = [1 x 10]
    #
    # TPU 的基础计算块按 8 个输入、8 个输出类别做 tile：
    #   k_tile = 0..7  覆盖 64 个输入像素，每次取 8 个
    #   c_tile = 0..1  覆盖最多 16 个输出 lane
    #
    # c_tile=0 计算 class0~7。
    # c_tile=1 只需要 class8~9，剩余 lane2~7 用 0 填充。
    #
    # 双缓冲调度：
    #   1. 先把 tile0 的权重读入 weight_in_buffer。
    #   2. 每个 tile 开始时 SWITCH，让 buffer 里的权重变成 active 权重。
    #   3. 当前 tile 发出 input 开始计算后，趁这段计算时间预装 next tile 的权重。
    #   4. 下一轮 SWITCH 时，next tile 的权重已经在 buffer 里，可以直接切换。
    append_preload_weight(tiles[0][0], tiles[0][1])
    for tile_index, (x_tile, w_tile, bias_tile) in enumerate(tiles):
        c_tile = tile_index // 8
        k_tile = tile_index % 8

        # SWITCH 把已经预装进 weight_in_buffer 的当前 tile 权重切到 active。
        program.append(word_switch())
        append_wait_cycles(SWITCH_SETTLE_WAIT)

        if bias_tile is not None:
            # 只有最后一个 k_tile 需要把 bias 加进去。
            # 因为前 7 个 k_tile 只是部分和，最后一次加 bias 得到完整 logit。
            for i, value in enumerate(bias_tile):
                program.append(word_load(B_BASE + i, value))
            # vpu_mode=0xC：让 VPU 在最后输出时带上 bias/输出处理。
            program.append(word_ub_read(PTR_BIAS, B_BASE, 1, 8, False, 0xC))

        # 设置输出写回位置。
        # accumulate=False 是因为当前 lacc_core 会把 TPU 多个 partial 输出累加成最终 10 个 logits。
        program.append(word_set_wr(SCRATCH_BASE, False))
        # 输入 tile 是 1x8。
        # 最后一个 k_tile 使用 vpu_mode=0xC，表示输出这一轮完整结果。
        program.append(word_ub_read(PTR_INPUT, X_BASE, 1, 8, False, 0xC if k_tile == 7 else 0x0))

        if tile_index + 1 < len(tiles):
            next_x_tile, next_w_tile, _ = tiles[tile_index + 1]
            # 先等当前 input 从 X_BASE 被 UB 读走，再覆盖 X_BASE 准备下一 tile。
            append_wait_cycles(INPUT_DRAIN_WAIT)
            append_preload_weight(next_x_tile, next_w_tile)
            # 补足当前 tile 的计算时间，保证下一次 SWITCH 不会早于当前结果产生。
            append_wait_cycles(PRELOAD_TAIL_WAIT)
        else:
            # 最后一个 tile 没有下一组权重可预装，直接等本轮计算完成。
            append_wait_cycles(COMPUTE_WAIT)

    # 所有 tile 都完成后，END 让 TPU master 停止取指并拉高 done。
    program.append(word_end())
    return program


def write_mif(path: Path, cpu_words: list[int], tpu_words: list[int]) -> None:
    """写出仿真/初始化用的 axi_ram.mif。"""
    cpu_word_base = 0
    # mif 这里按 word 编址，所以 byte 地址差要除以 4。
    tpu_word_base = (TPU_BASE - CPU_BASE) // 4
    lines = [f"@{cpu_word_base:08x}"]
    lines.extend(f"{word:032b}" for word in cpu_words)
    lines.append(f"@{tpu_word_base:08x}")
    lines.extend(f"{word:032b}" for word in tpu_words)
    path.write_text("\n".join(lines) + "\n")


def write_rom_vlog(path: Path, cpu_bytes: bytes, tpu_words: list[int]) -> None:
    """写出 rom.vlog：Verilator/仿真常用的按 byte 初始化格式。"""
    lines = [f"@{CPU_BASE:08x}"]
    lines.extend(f"{byte:02x}" for byte in cpu_bytes)
    lines.append(f"@{TPU_BASE:08x}")
    for word in tpu_words:
        # TPU 指令也是小端写入，这样 SRAM 读出来的 32-bit word 才和硬件预期一致。
        lines.extend(f"{byte:02x}" for byte in struct.pack("<I", word))
    path.write_text("\n".join(lines) + "\n")


def write_flat_bin(path: Path, cpu_bytes: bytes, tpu_words: list[int]) -> None:
    """写出单个连续 bin：CPU 程序 + 中间补 0 + TPU 指令流。"""
    gap = TPU_BASE - CPU_BASE
    if len(cpu_bytes) > gap:
        raise SystemExit("CPU binary is too large and would overlap the TPU image")

    with path.open("wb") as f:
        # 前面先放 CPU 程序。
        f.write(cpu_bytes)
        # CPU 程序结束到 TPU_BASE 之间补 0，保证 TPU 指令落在 0x1C00B000。
        f.write(b"\x00" * (gap - len(cpu_bytes)))
        # 后面放 TPU 指令流。
        for word in tpu_words:
            f.write(struct.pack("<I", word))


def main() -> int:
    # Makefile 会调用这个脚本，大致参数是：
    #   --cpu-bin obj/digit.bin
    #   --model-json ../../../rtl/ip/tpu/digit8x8_linear_weights.json
    #   --input-txt ./digit_input.txt
    #   --out-dir obj
    parser = argparse.ArgumentParser()
    parser.add_argument("--cpu-bin", required=True)
    parser.add_argument("--model-json", required=True)
    parser.add_argument(
        "--input-txt",
        default=str(DEFAULT_INPUT_TXT),
        help="optional 8x8 input txt; default is digit_input.txt beside this script",
    )
    parser.add_argument("--out-dir", required=True)
    args = parser.parse_args()

    cpu_bin = Path(args.cpu_bin)
    model_json = Path(args.model_json)
    input_txt = Path(args.input_txt)
    out_dir = Path(args.out_dir)
    out_dir.mkdir(parents=True, exist_ok=True)

    cpu_bytes = cpu_bin.read_bytes()
    # CPU 程序不能覆盖 TPU 指令区，否则 TPU master 取到的就不是 TPU 指令了。
    if len(cpu_bytes) > (TPU_BASE - CPU_BASE):
        raise SystemExit("CPU binary is too large and would overlap the TPU image")

    cpu_words = load_binary_words(cpu_bin)
    weights, bias, sample, label, prediction = load_model(model_json)

    # 如果 digit_input.txt 存在，就用 txt 里的 8x8 图覆盖 json 默认测试图。
    # 这样你后面只需要修改 sdk/software/examples/digit/digit_input.txt 再 make。
    sample_source = "json test_examples[0]"
    if input_txt.exists():
        sample = load_input_txt(input_txt)
        label = -1
        #prediction = predict_linear(weights, bias, sample)
        sample_source = str(input_txt)

    tpu_words = build_tpu_program(weights, bias, sample)

    # 同一份内容输出成三种格式，分别给不同场景使用：
    #   axi_ram.mif    给 SRAM/仿真初始化
    #   rom.vlog       给 Verilog 仿真按地址加载
    #   digit_full.bin 给上板烧录单个 bin
    write_mif(out_dir / "axi_ram.mif", cpu_words, tpu_words)
    write_rom_vlog(out_dir / "rom.vlog", cpu_bytes, tpu_words)
    write_flat_bin(out_dir / "digit_full.bin", cpu_bytes, tpu_words)

    # 打印 label 和 Python 侧预测值，用来和 TPU 上板/仿真输出对比。
    print(f"[digit] sample source={sample_source}")
    print(f"[digit] sample label={label} python_pred={prediction}")
    print(f"[digit] cpu words={len(cpu_words)} tpu words={len(tpu_words)}")
    print(f"[digit] wrote {out_dir / 'axi_ram.mif'}")
    print(f"[digit] wrote {out_dir / 'rom.vlog'}")
    print(f"[digit] wrote {out_dir / 'digit_full.bin'}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
