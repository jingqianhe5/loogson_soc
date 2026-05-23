#include <stdint.h>
#include <stdio.h>

#include "confreg_time.h"

// BSP 需要这些全局变量来完成串口和时钟参数初始化。
unsigned long UART_BASE = 0xbf000000;
unsigned long CONFREG_TIMER_BASE = 0xbf20f100;
unsigned long CONFREG_CLOCKS_PER_SEC = 50000000L;
unsigned long CORE_CLOCKS_PER_SEC = 33000000L;

// TPU 指令流起始地址，和 rtl/soc_top.v 里的 TPU_INSN_START_PC 保持一致。
#define TPU_START_PC 0x1C00B000u

// LACC 自定义指令编码：
// 这里把自定义指令直接写成机器码，避免依赖工具链是否认识 lacc 助记符。
// [31:24] = LACC 主操作码，本工程里固定为 8'hc0。
// [23:22] = command，送到 lacc_core.v 的 lacc_req_command。
//           0=start，1=status，2=read，3=clear。
// [21:15] = imm，本 demo 暂时没有用到，保持为 0。
// [14:10] = rk 源寄存器编号，本 demo 暂时没有用到，保持为 $r0。
// [ 9: 5] = rj 源寄存器编号。
//           start/read 指令通过 $r5 把参数传给 lacc_core.v。
// [ 4: 0] = rd 目的寄存器编号。
//           lacc_core.v 的返回值写到 $r4，再由下面的 move 拿回 C 变量。
#define LACC_START_WORD  "0xC00000A4"
#define LACC_STATUS_WORD "0xC0400004"
#define LACC_READ_WORD   "0xC08000A4"
#define LACC_CLEAR_WORD  "0xC0C00004"

// status word 的低位标志位，来自 lacc_core.v 里的 status_word。
#define TPU_STATUS_BUSY  (1u << 0)
#define TPU_STATUS_DONE  (1u << 1)
#define TPU_STATUS_ERROR (1u << 2)

// 当前 common.mk 定义了 USE_CPU_CLOCK_COUNT，所以 get_clock_count() 读的是 CPU cycle。
// 这里用整数换算，避免 printf 浮点格式在裸机环境里带来额外依赖。
static void print_inference_time(unsigned long start_cycle, unsigned long end_cycle) {
    const unsigned long elapsed_cycles = end_cycle - start_cycle;
    const unsigned long elapsed_us =
        (unsigned long)(((unsigned long long)elapsed_cycles * 1000000ull) /
                        (unsigned long long)CORE_CLOCKS_PER_SEC);

    printf("[tpu_digit] inference cycles        = %lu\n", elapsed_cycles);
    printf("[tpu_digit] inference time          = %lu us\n", elapsed_us);
    printf("[tpu_digit] inference time          = %lu.%03lu ms\n",
           elapsed_us / 1000ul,
           elapsed_us % 1000ul);
}

// 触发 TPU 开始执行。
// rj 里放起始 PC，执行后从 $r4 读回状态字。
static inline uint32_t tpu_start(uint32_t start_pc) {
    uint32_t status;
    asm volatile (
        // $r5 是这条 START 指令的 rj 操作数，也就是 TPU 指令流起始地址。
        "move $r5, %1\n\t"
        // 直接塞入 LACC_START 的机器码；CPU 执行后会进入 lacc_core.v。
        ".word " LACC_START_WORD "\n\t"
        // LACC 返回值约定在 $r4，这里搬回 C 变量 status。
        "move %0, $r4\n\t"
        : "=r"(status)
        : "r"(start_pc)
        : "$r4", "$r5", "memory"
    );
    return status;
}

// 读取当前 TPU 状态：busy/done/error 等标志都在这里。
static inline uint32_t tpu_status(void) {
    uint32_t status;
    asm volatile (
        // STATUS 不需要输入参数，只读取当前 busy/done/error/result_count 等状态。
        ".word " LACC_STATUS_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(status)
        :
        : "$r4", "memory"
    );
    return status;
}

// 读取结果缓冲区中的一对 halfword。
// pair_index = 0..4，对应 10 个类别的 5 组输出。
static inline uint32_t tpu_read_pair(uint32_t pair_index) {
    uint32_t value;
    asm volatile (
        // $r5 放 pair_index：0 读 class0/1，1 读 class2/3，以此类推。
        "move $r5, %1\n\t"
        ".word " LACC_READ_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(value)
        : "r"(pair_index)
        : "$r4", "$r5", "memory"
    );
    return value;
}

// 清空 TPU/LACC 侧状态，避免上一次运行残留影响这次推理。
static inline uint32_t tpu_clear(void) {
    uint32_t value;
    asm volatile (
        // CLEAR 清掉 LACC 侧缓存的 busy/done/error/result_valid 等状态。
        ".word " LACC_CLEAR_WORD "\n\t"
        "move %0, $r4\n\t"
        : "=r"(value)
        :
        : "$r4", "memory"
    );
    return value;
}

// 轮询等待 TPU 结束；超时则返回 1，硬件错误返回 -1。
static int wait_for_done(uint32_t timeout_cycles, uint32_t *status_out) {
    for (uint32_t i = 0; i < timeout_cycles; i++) {
        const uint32_t status = tpu_status();
        if (status & TPU_STATUS_ERROR) {
            // 硬件或 LACC 侧报告错误，立即返回，方便打印 status 查错。
            *status_out = status;
            return -1;
        }
        if (status & TPU_STATUS_DONE) {
            // done 置位说明 TPU 已经跑完，结果已经被 LACC 收进 result_buffer。
            *status_out = status;
            return 0;
        }
    }
    // 超时后再读一次最终状态，打印出来会比只返回超时更容易定位问题。
    *status_out = tpu_status();
    return 1;
}

int main(void) {
    printf("[tpu_digit] opening...\n");

    // 先清状态，再启动 TPU。这样连续复位/连续运行时不会读到旧的 done/error。
    uint32_t status = tpu_clear();
    printf("[tpu_digit] clear                   status  value= 0x%08x\n", status);

    // 从发出 START 前开始计时，到 DONE 返回后结束计时。
    // 这个时间包含 TPU 执行时间，也包含 CPU 轮询 STATUS 的等待开销。
    const unsigned long infer_start_cycle = get_clock_count();

    // TPU_START_PC 指向 SRAM 里已经烧进去的 TPU 专属指令流。
    status = tpu_start(TPU_START_PC);
    printf("[tpu_digit] tpu  start working!!!   status  value= 0x%08x\n", status);

    // 等待 TPU 做完本轮推理。
    int wait_rc = wait_for_done(5000000u, &status);
    if (wait_rc != 0) {
        printf("[tpu_digit] tpu wait failed,    status  value= 0x%08x\n", status);
        return 1;
    }
    const unsigned long infer_end_cycle = get_clock_count();

    printf("[tpu_digit] finish   all!!!         status = 0x%08x\n", status);
    print_inference_time(infer_start_cycle, infer_end_cycle);
    printf("[tpu_digit] forward  result :\n");

    // 结果缓冲区一共 10 个 class，这里按 5 个 pair 读出来。
    // 每次 READ 返回 32 bit：低 16 bit 是偶数 class，高 16 bit 是奇数 class。
    int16_t logits[10];
    for (int i = 0; i < 5; i++) {
        const uint32_t pair = tpu_read_pair((uint32_t)i);
        logits[i * 2 + 0] = (int16_t)(pair & 0xffffu);
        logits[i * 2 + 1] = (int16_t)((pair >> 16) & 0xffffu);
    }

    // 找到 logit 最大的类别作为预测结果。
    int best_idx = 0;
    int16_t best_val = logits[0];
    for (int i = 0; i < 10; i++) {
        const int16_t raw = logits[i];
        // raw 是 Q8.8 定点数；下面只把它打印成人容易看的小数格式。
        const int magnitude = raw < 0 ? -(int)raw : (int)raw;
        printf("  class %d: raw=%6d  q8.8=%d.%03d\n",
               i,
               (int)raw,
               (int)(raw / 256),
               (int)((magnitude % 256) * 1000 / 256));
        if (raw > best_val) {
            best_val = raw;
            best_idx = i;
        }
    }
    printf("-------------------------------------------\n");
    printf("--------------------result-----------------\n");
    printf("-------------------------------------------\n");
    printf("[tpu_digit] prediction = %d\n", best_idx);
    printf("[tpu_digit] best raw   = %d\n", (int)best_val);

    // 推理结果保持在这里，方便仿真/上板时观察串口最后的输出。
    while (1) {
    }

    return 0;
}
