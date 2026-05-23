`include "mycpu.h"

`ifdef HAS_LACC
module lacc_core(
    input                       clk,            // LACC 所在时钟域
    input                       reset,          // 复位，高有效

    input                       lacc_flush,     // 流水线冲刷，异常/跳转时清状态

    input                       lacc_req_valid, // EXE 级发来的 LACC 请求有效
    input [`LACC_OP_WIDTH-1: 0] lacc_req_command,// 自定义指令的 command 字段
    input [6: 0]                lacc_req_imm,   // 指令中的 imm 字段
    input [31: 0]               lacc_req_rj,    // rj 源操作数
    input [31: 0]               lacc_req_rk,    // rk 源操作数

    output                      lacc_rsp_valid, // 指令完成，允许继续流转
    output [31: 0]              lacc_rsp_rdat,   // 写回寄存器的数据

    output reg                  lacc_tpu_start,  // TPU_START 脉冲
    output reg [31:0]           lacc_tpu_start_pc,// TPU 起始 PC
    input                       tpu_busy,       // TPU 忙
    input                       tpu_done,       // TPU 完成
    input                       tpu_error,      // TPU 错误
    input [8*16-1:0]            tpu_result_data, // TPU 结果，8 路 16-bit
    input [7:0]                 tpu_result_valid,// TPU 结果有效标志

    // 这组访存端口先保留，当前四条指令不走 data bus。
    output                      lacc_data_valid, // 访存请求有效
    input                       lacc_data_ready, // data cache 是否接受请求
    output [31: 0]              lacc_data_addr,  // 访存地址
    output                      lacc_data_read,  // 1=读, 0=写
    output [31: 0]              lacc_data_wdata, // 写入数据
    output [1: 0]               lacc_data_size,  // 访存粒度：byte/half/word

    input                       lacc_drsp_valid, // data cache 返回有效
    input [31: 0]               lacc_drsp_rdata  // data cache 返回数据
);

    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_START  = 2'd0;
    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_STATUS = 2'd1;
    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_READ   = 2'd2;
    localparam [`LACC_OP_WIDTH-1:0] CMD_TPU_CLEAR  = 2'd3;

    localparam [7:0] ERR_NONE          = 8'd0;
    localparam [7:0] ERR_READ_INDEX    = 8'd1;
    localparam [7:0] ERR_READ_EMPTY    = 8'd2;
    localparam [7:0] ERR_TPU_HW        = 8'd3;
    localparam [7:0] ERR_BAD_CMD       = 8'd5;

    reg [31:0] start_pc_reg;       // START 指令记录的 TPU 起始地址
    reg        busy_reg;           // TPU 是否忙
    reg        done_reg;           // TPU 是否已经结束
    reg        error_reg;          // 是否发生错误
    reg        result_full_reg;    // 结果缓冲区是否已满
    reg        result_overflow_reg;// 结果是否溢出
    reg [7:0]  result_count_reg;   // 已写入的 halfword 数
    reg [7:0]  error_code_reg;     // 最近一次错误码

    // 64 个 16-bit 槽位，READ 指令一次读两个 halfword。
    reg [15:0] result_buffer [0:63];
    reg [63:0] result_valid_bits;  // 每个 halfword 对应一个有效位

    reg [31:0] rsp_data_comb;      // 组合返回值

    // 四条自定义指令：
    // 0: TPU_START
    // 1: TPU_STATUS
    // 2: TPU_READ
    // 3: TPU_CLEAR
    wire start_cmd  = lacc_req_valid && (lacc_req_command == CMD_TPU_START);
    wire status_cmd = lacc_req_valid && (lacc_req_command == CMD_TPU_STATUS);
    wire read_cmd   = lacc_req_valid && (lacc_req_command == CMD_TPU_READ);
    wire clear_cmd  = lacc_req_valid && (lacc_req_command == CMD_TPU_CLEAR);

    wire [5:0] read_word_index = lacc_req_rj[5:0]; // 0~31，每个索引读两条结果
    wire       read_index_bad  = (read_word_index >= 6'd32);
    wire       read_pair_valid = !read_index_bad &&
                                 result_valid_bits[{read_word_index, 1'b0}] &&
                                 result_valid_bits[{read_word_index, 1'b1}];

    wire [31:0] status_word = {
        8'd0,
        error_code_reg,
        result_count_reg,
        3'd0,
        result_overflow_reg,
        result_full_reg,
        (error_reg | tpu_error),
        (done_reg | tpu_done),
        (busy_reg | tpu_busy)
    };

    integer i; // 清空 result_buffer 用
    integer lane;
    reg [7:0] write_index;
    reg [3:0] result_class;

    assign lacc_rsp_valid = lacc_req_valid;
    assign lacc_rsp_rdat  = rsp_data_comb;

    assign lacc_data_valid = 1'b0;
    assign lacc_data_addr  = 32'd0;
    assign lacc_data_read  = 1'b1;
    assign lacc_data_wdata = 32'd0;
    assign lacc_data_size  = 2'b10;

    always @(*) begin
        rsp_data_comb = 32'd0;
        if (start_cmd || status_cmd) begin
            rsp_data_comb = status_word;
        end else if (read_cmd) begin
            if (!read_pair_valid) begin
                rsp_data_comb = 32'd0;
            end else begin
                rsp_data_comb = {
                    result_buffer[{read_word_index, 1'b1}],
                    result_buffer[{read_word_index, 1'b0}]
                };
            end
        end
    end

    always @(posedge clk) begin
        if (reset || lacc_flush) begin
            start_pc_reg        <= 32'd0;
            busy_reg            <= 1'b0;
            done_reg            <= 1'b0;
            error_reg           <= 1'b0;
            result_full_reg     <= 1'b0;
            result_overflow_reg <= 1'b0;
            result_count_reg    <= 8'd0;
            error_code_reg      <= ERR_NONE;
            result_valid_bits   <= 64'd0;
            lacc_tpu_start      <= 1'b0;
            lacc_tpu_start_pc   <= 32'd0;
            for (i = 0; i < 64; i = i + 1) begin
                result_buffer[i] <= 16'd0;
            end
        end else begin
            if (start_cmd) begin
                // rj 就是 TPU 指令起始地址。
                start_pc_reg        <= lacc_req_rj;
                lacc_tpu_start_pc   <= lacc_req_rj;
                lacc_tpu_start      <= 1'b1;
                busy_reg            <= 1'b1;
                done_reg            <= 1'b0;
                error_reg           <= 1'b0;
                result_full_reg     <= 1'b0;
                result_overflow_reg <= 1'b0;
                result_count_reg    <= 8'd0;
                error_code_reg      <= ERR_NONE;
                result_valid_bits   <= 64'd0;
                for (i = 0; i < 64; i = i + 1) begin
                    result_buffer[i] <= 16'd0;
                end
            end else if (lacc_tpu_start && tpu_busy) begin
                lacc_tpu_start <= 1'b0;
            end else if (read_cmd) begin
                if (read_index_bad) begin
                    error_reg      <= 1'b1;
                    error_code_reg <= ERR_READ_INDEX;
                end else if (!read_pair_valid) begin
                    error_reg      <= 1'b1;
                    error_code_reg <= ERR_READ_EMPTY;
                end
            end else if (status_cmd) begin
                // STATUS 只是读状态，不修改内部状态，也不应被判成坏命令。
            end else if (clear_cmd) begin
                busy_reg            <= 1'b0;
                done_reg            <= 1'b0;
                error_reg           <= 1'b0;
                result_full_reg     <= 1'b0;
                result_overflow_reg <= 1'b0;
                result_count_reg    <= 8'd0;
                error_code_reg      <= ERR_NONE;
                result_valid_bits   <= 64'd0;
                lacc_tpu_start      <= 1'b0;
                for (i = 0; i < 64; i = i + 1) begin
                    result_buffer[i] <= 16'd0;
                end
            end else if (tpu_done) begin
                busy_reg <= 1'b0;
                done_reg <= 1'b1;
            end else if (tpu_error) begin
                busy_reg       <= 1'b0;
                error_reg      <= 1'b1;
                error_code_reg <= ERR_TPU_HW;
            end else if (lacc_req_valid) begin
                error_reg      <= 1'b1;
                error_code_reg <= ERR_BAD_CMD;
            end

            /* verilator lint_off BLKSEQ */
            if (tpu_result_valid != 8'd0) begin
                write_index = result_count_reg;
                for (lane = 0; lane < 8; lane = lane + 1) begin
                    if (tpu_result_valid[lane]) begin
                        if (write_index < 8'd128) begin
                            if (write_index < 8'd64) begin
                                result_class = {1'b0, write_index[2:0]};
                            end else begin
                                result_class = 4'd8 + {1'b0, write_index[2:0]};
                            end

                            if (result_class < 4'd10) begin
                                result_buffer[result_class] <=
                                    result_buffer[result_class] + tpu_result_data[16*lane +: 16];
                                result_valid_bits[result_class] <= 1'b1;
                            end
                            write_index = write_index + 8'd1;
                        end else begin
                            result_overflow_reg <= 1'b1;
                            error_reg           <= 1'b1;
                            error_code_reg      <= ERR_TPU_HW;
                        end
                    end
                end
                result_count_reg <= write_index;
                result_full_reg  <= (write_index >= 8'd128);
            end
            /* verilator lint_on BLKSEQ */
        end
    end

endmodule
`endif
