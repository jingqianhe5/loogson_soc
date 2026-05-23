`timescale 1ns/1ps

module tpu_axi_fetch_top #(
    parameter SYSTOLIC_ARRAY_WIDTH = 8, // TPU 阵列宽度，传给现有 TPU 核心
    parameter AXI_ID_WIDTH = 4          // 接入 AXI_top 的主机 ID 位宽
) (
    input  wire                      clk,        // TPU 取指状态机和 TPU 核心时钟
    input  wire                      rst_n,      // 低有效复位

    input  wire                      start,      // TPU 启动脉冲，高 1 个 clk 周期有效
    input  wire [31:0]               start_pc,   // TPU 指令在 SoC AXI 地址空间里的起始地址
    output reg                       busy,       // TPU 取指/执行中为 1
    output reg                       done,       // 遇到 END 或错误停机后置 1，下一次 start 清 0
    output reg                       error,      // AXI 读响应错误或 WAIT 超时后置 1
    output reg  [31:0]               pc_current, // 当前/下一条要读取的 TPU 指令地址
    output reg  [31:0]               last_ins,   // 最近一次从 SRAM 取回的 32-bit TPU 指令

    output wire [AXI_ID_WIDTH-1:0]   m_axi_awid,    // 未使用：写地址 ID，固定 0
    output wire [31:0]               m_axi_awaddr,  // 未使用：写地址，固定 0
    output wire [7:0]                m_axi_awlen,   // 未使用：写 burst 长度，固定 0
    output wire [2:0]                m_axi_awsize,  // 未使用：写 beat 大小，固定 32-bit
    output wire [1:0]                m_axi_awburst, // 未使用：写 burst 类型，固定 INCR
    output wire [0:0]                m_axi_awlock,  // 未使用：写锁定，固定 0
    output wire [3:0]                m_axi_awcache, // 未使用：写 cache 属性
    output wire [2:0]                m_axi_awprot,  // 未使用：写保护属性
    output wire                      m_axi_awvalid, // 未使用：固定 0，不发 AXI 写地址
    input  wire                      m_axi_awready, // 未使用：总线写地址 ready
    output wire [31:0]               m_axi_wdata,   // 未使用：写数据，固定 0
    output wire [3:0]                m_axi_wstrb,   // 未使用：写字节使能，固定 0
    output wire                      m_axi_wlast,   // 未使用：固定 1
    output wire                      m_axi_wvalid,  // 未使用：固定 0，不发 AXI 写数据
    input  wire                      m_axi_wready,  // 未使用：总线写数据 ready
    input  wire [AXI_ID_WIDTH-1:0]   m_axi_bid,     // 未使用：写响应 ID
    input  wire [1:0]                m_axi_bresp,   // 未使用：写响应状态
    input  wire                      m_axi_bvalid,  // 未使用：写响应 valid
    output wire                      m_axi_bready,  // 未使用：固定 1，避免响应通道悬空

    output wire [AXI_ID_WIDTH-1:0]   m_axi_arid,    // 读地址 ID，固定 0
    output reg  [31:0]               m_axi_araddr,  // 读地址，每次等于 pc_current
    output wire [7:0]                m_axi_arlen,   // 读 burst 长度，固定 0，单 beat
    output wire [2:0]                m_axi_arsize,  // 读 beat 大小，固定 4 字节
    output wire [1:0]                m_axi_arburst, // 读 burst 类型，固定 INCR
    output wire [0:0]                m_axi_arlock,  // 读锁定，固定 0
    output wire [3:0]                m_axi_arcache, // 读 cache 属性
    output wire [2:0]                m_axi_arprot,  // 读保护属性
    output reg                       m_axi_arvalid, // 读地址 valid
    input  wire                      m_axi_arready, // 总线接受读地址
    input  wire [AXI_ID_WIDTH-1:0]   m_axi_rid,     // 读返回 ID，当前不检查
    input  wire [31:0]               m_axi_rdata,   // 从 SRAM 返回的 32-bit TPU 指令
    input  wire [1:0]                m_axi_rresp,   // 读响应，非 OKAY 时 error 置 1
    input  wire                      m_axi_rlast,   // 单 beat 读最后一拍，当前不额外检查
    input  wire                      m_axi_rvalid,  // 读数据 valid
    output reg                       m_axi_rready,  // 读数据 ready

    output wire [SYSTOLIC_ARRAY_WIDTH*16-1:0] infer_result_data,  // VPU 推理结果打包输出
    output wire [SYSTOLIC_ARRAY_WIDTH-1:0]    infer_result_valid  // 每一路 VPU 推理结果 valid
);

    localparam [3:0] OP_WAIT = 4'h5; // 外层取指器消费的等待指令，不送入 decode
    localparam [3:0] OP_END  = 4'hf; // TPU 程序结束指令

    localparam [3:0] WAIT_CYCLES = 4'd0; // 等固定周期数
    localparam [3:0] WAIT_WEIGHT = 4'd1; // 等 weight valid 出现后再消失
    localparam [3:0] WAIT_VPU    = 4'd2; // 等 VPU valid 出现后再消失
    localparam [3:0] WAIT_SYS    = 4'd3; // 等 systolic valid 出现后再消失

    localparam [2:0] ST_IDLE  = 3'd0; // 空闲，等待 start
    localparam [2:0] ST_AR    = 3'd1; // 发送 AXI 读地址
    localparam [2:0] ST_R     = 3'd2; // 等待 AXI 返回一条指令
    localparam [2:0] ST_ISSUE = 3'd3; // 给 TPU decode 发送一拍 ins_valid
    localparam [2:0] ST_WAIT  = 3'd4; // 执行 WAIT 指令
    localparam [2:0] ST_HALT  = 3'd5; // 程序结束或错误后停机

    reg [2:0]  state;           // 当前取指状态
    reg [31:0] ins_reg;         // 当前取回的指令缓存
    reg        ins_valid_reg;   // 送给 tpu_isa_confreg 的一拍指令 valid
    reg [3:0]  wait_type;       // WAIT 指令类型
    reg [23:0] wait_limit;      // WAIT 周期数或超时上限，0 表示 valid 类等待不超时
    reg [23:0] wait_counter;    // WAIT 状态计数器
    reg        wait_seen_valid; // valid 类 WAIT 是否已经看到目标 valid 拉高

    wire [15:0] vpu_data_out_0;
    wire [15:0] vpu_data_out_1;
    wire [15:0] vpu_data_out_2;
    wire [15:0] vpu_data_out_3;
    wire [15:0] vpu_data_out_4;
    wire [15:0] vpu_data_out_5;
    wire [15:0] vpu_data_out_6;
    wire [15:0] vpu_data_out_7;
    wire        vpu_data_valid_out_0;
    wire        vpu_data_valid_out_1;
    wire        vpu_data_valid_out_2;
    wire        vpu_data_valid_out_3;
    wire        vpu_data_valid_out_4;
    wire        vpu_data_valid_out_5;
    wire        vpu_data_valid_out_6;
    wire        vpu_data_valid_out_7;

    wire [15:0] sys_data_out_0;
    wire [15:0] sys_data_out_1;
    wire [15:0] sys_data_out_2;
    wire [15:0] sys_data_out_3;
    wire [15:0] sys_data_out_4;
    wire [15:0] sys_data_out_5;
    wire [15:0] sys_data_out_6;
    wire [15:0] sys_data_out_7;
    wire        sys_valid_out_0;
    wire        sys_valid_out_1;
    wire        sys_valid_out_2;
    wire        sys_valid_out_3;
    wire        sys_valid_out_4;
    wire        sys_valid_out_5;
    wire        sys_valid_out_6;
    wire        sys_valid_out_7;

    wire [15:0] ub_rd_input_data_out_0;
    wire [15:0] ub_rd_input_data_out_1;
    wire        ub_rd_input_valid_out_0;
    wire        ub_rd_input_valid_out_1;
    wire [15:0] ub_rd_weight_data_out_0;
    wire [15:0] ub_rd_weight_data_out_1;
    wire        ub_rd_weight_valid_out_0;
    wire        ub_rd_weight_valid_out_1;
    wire [15:0] ub_rd_bias_data_out_0;
    wire [15:0] ub_rd_bias_data_out_1;
    wire [15:0] ub_rd_Y_data_out_0;
    wire [15:0] ub_rd_Y_data_out_1;
    wire [15:0] ub_rd_H_data_out_0;
    wire [15:0] ub_rd_H_data_out_1;
    wire [15:0] ub_rd_col_size_out;
    wire        ub_rd_col_size_valid_out;

    assign infer_result_data = {
        vpu_data_out_7, vpu_data_out_6, vpu_data_out_5, vpu_data_out_4,
        vpu_data_out_3, vpu_data_out_2, vpu_data_out_1, vpu_data_out_0
    };

    assign infer_result_valid = {
        vpu_data_valid_out_7, vpu_data_valid_out_6, vpu_data_valid_out_5, vpu_data_valid_out_4,
        vpu_data_valid_out_3, vpu_data_valid_out_2, vpu_data_valid_out_1, vpu_data_valid_out_0
    };

    wire weight_valid_any = ub_rd_weight_valid_out_0 | ub_rd_weight_valid_out_1;
    wire vpu_valid_any =
        vpu_data_valid_out_0 | vpu_data_valid_out_1 | vpu_data_valid_out_2 | vpu_data_valid_out_3 |
        vpu_data_valid_out_4 | vpu_data_valid_out_5 | vpu_data_valid_out_6 | vpu_data_valid_out_7;
    wire sys_valid_any =
        sys_valid_out_0 | sys_valid_out_1 | sys_valid_out_2 | sys_valid_out_3 |
        sys_valid_out_4 | sys_valid_out_5 | sys_valid_out_6 | sys_valid_out_7;

    wire wait_signal =
        (wait_type == WAIT_WEIGHT) ? weight_valid_any :
        (wait_type == WAIT_VPU)    ? vpu_valid_any :
        (wait_type == WAIT_SYS)    ? sys_valid_any :
                                     1'b0;

    wire wait_cycles_done = (wait_type == WAIT_CYCLES) && (wait_counter >= wait_limit);
    wire wait_signal_done = (wait_type != WAIT_CYCLES) && wait_seen_valid && !wait_signal;
    wire wait_timeout = (wait_type != WAIT_CYCLES) &&
                        (wait_limit != 24'd0) &&
                        (wait_counter >= wait_limit) &&
                        !wait_signal_done;

    assign m_axi_awid     = {AXI_ID_WIDTH{1'b0}};
    assign m_axi_awaddr   = 32'd0;
    assign m_axi_awlen    = 8'd0;
    assign m_axi_awsize   = 3'b010;
    assign m_axi_awburst  = 2'b01;
    assign m_axi_awlock   = 1'b0;
    assign m_axi_awcache  = 4'b0011;
    assign m_axi_awprot   = 3'b000;
    assign m_axi_awvalid  = 1'b0;
    assign m_axi_wdata    = 32'd0;
    assign m_axi_wstrb    = 4'd0;
    assign m_axi_wlast    = 1'b1;
    assign m_axi_wvalid   = 1'b0;
    assign m_axi_bready   = 1'b1;

    assign m_axi_arid     = {AXI_ID_WIDTH{1'b0}};
    assign m_axi_arlen    = 8'd0;
    assign m_axi_arsize   = 3'b010;
    assign m_axi_arburst  = 2'b01;
    assign m_axi_arlock   = 1'b0;
    assign m_axi_arcache  = 4'b0011;
    assign m_axi_arprot   = 3'b000;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state           <= ST_IDLE;
            busy            <= 1'b0;
            done            <= 1'b0;
            error           <= 1'b0;
            pc_current      <= 32'd0;
            last_ins        <= 32'd0;
            ins_reg         <= 32'd0;
            ins_valid_reg   <= 1'b0;
            m_axi_araddr    <= 32'd0;
            m_axi_arvalid   <= 1'b0;
            m_axi_rready    <= 1'b0;
            wait_type       <= WAIT_CYCLES;
            wait_limit      <= 24'd0;
            wait_counter    <= 24'd0;
            wait_seen_valid <= 1'b0;
        end else begin
            ins_valid_reg <= 1'b0;

            case (state)
                ST_IDLE: begin
                    busy          <= 1'b0;
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b0;

                    if (start) begin
                        busy            <= 1'b1;
                        done            <= 1'b0;
                        error           <= 1'b0;
                        pc_current      <= start_pc;
                        wait_counter    <= 24'd0;
                        wait_seen_valid <= 1'b0;
                        state           <= ST_AR;
                    end
                end

                ST_AR: begin
                    busy          <= 1'b1;
                    m_axi_araddr  <= pc_current;
                    m_axi_arvalid <= 1'b1;
                    if (m_axi_arvalid && m_axi_arready) begin
                        m_axi_arvalid <= 1'b0;
                        m_axi_rready  <= 1'b1;
                        state         <= ST_R;
                    end
                end

                ST_R: begin
                    if (m_axi_rvalid && m_axi_rready) begin
                        m_axi_rready <= 1'b0;
                        last_ins     <= m_axi_rdata;
                        ins_reg      <= m_axi_rdata;

                        if (m_axi_rresp != 2'b00) begin
                            error <= 1'b1;
                            done  <= 1'b1;
                            busy  <= 1'b0;
                            state <= ST_HALT;
                        end else if (m_axi_rdata[31:28] == OP_END) begin
                            done <= 1'b1;
                            busy <= 1'b0;
                            state <= ST_HALT;
                        end else if (m_axi_rdata[31:28] == OP_WAIT) begin
                            wait_type       <= m_axi_rdata[27:24];
                            wait_limit      <= m_axi_rdata[23:0];
                            wait_counter    <= 24'd0;
                            wait_seen_valid <= 1'b0;
                            state           <= ST_WAIT;
                        end else begin
                            state <= ST_ISSUE;
                        end
                    end
                end

                ST_ISSUE: begin
                    ins_valid_reg <= 1'b1;
                    pc_current    <= pc_current + 32'd4;
                    state         <= ST_AR;
                end

                ST_WAIT: begin
                    wait_counter <= wait_counter + 24'd1;
                    if (wait_signal) begin
                        wait_seen_valid <= 1'b1;
                    end

                    if (wait_cycles_done || wait_signal_done) begin
                        pc_current      <= pc_current + 32'd4;
                        wait_counter    <= 24'd0;
                        wait_seen_valid <= 1'b0;
                        state           <= ST_AR;
                    end else if (wait_timeout) begin
                        error <= 1'b1;
                        done  <= 1'b1;
                        busy  <= 1'b0;
                        state <= ST_HALT;
                    end
                end

                ST_HALT: begin
                    busy          <= 1'b0;
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b0;
                    if (start) begin
                        done            <= 1'b0;
                        error           <= 1'b0;
                        busy            <= 1'b1;
                        pc_current      <= start_pc;
                        wait_counter    <= 24'd0;
                        wait_seen_valid <= 1'b0;
                        state           <= ST_AR;
                    end
                end

                default: begin
                    state <= ST_IDLE;
                end
            endcase
        end
    end

    tpu_isa_confreg #(
        .SYSTOLIC_ARRAY_WIDTH(SYSTOLIC_ARRAY_WIDTH)
    ) u_tpu_isa_confreg (
        .clk(clk),
        .rst_n(rst_n),
        .ins_valid(ins_valid_reg),
        .ins(ins_reg),
        .learn_rate_in(16'd0),
        .vpu_factor_in(16'd0),
        .two_div_N_in(16'd0),
        .vpu_data_out_0(vpu_data_out_0),
        .vpu_data_out_1(vpu_data_out_1),
        .vpu_data_out_2(vpu_data_out_2),
        .vpu_data_out_3(vpu_data_out_3),
        .vpu_data_out_4(vpu_data_out_4),
        .vpu_data_out_5(vpu_data_out_5),
        .vpu_data_out_6(vpu_data_out_6),
        .vpu_data_out_7(vpu_data_out_7),
        .vpu_data_valid_out_0(vpu_data_valid_out_0),
        .vpu_data_valid_out_1(vpu_data_valid_out_1),
        .vpu_data_valid_out_2(vpu_data_valid_out_2),
        .vpu_data_valid_out_3(vpu_data_valid_out_3),
        .vpu_data_valid_out_4(vpu_data_valid_out_4),
        .vpu_data_valid_out_5(vpu_data_valid_out_5),
        .vpu_data_valid_out_6(vpu_data_valid_out_6),
        .vpu_data_valid_out_7(vpu_data_valid_out_7),
        .sys_data_out_0(sys_data_out_0),
        .sys_data_out_1(sys_data_out_1),
        .sys_data_out_2(sys_data_out_2),
        .sys_data_out_3(sys_data_out_3),
        .sys_data_out_4(sys_data_out_4),
        .sys_data_out_5(sys_data_out_5),
        .sys_data_out_6(sys_data_out_6),
        .sys_data_out_7(sys_data_out_7),
        .sys_valid_out_0(sys_valid_out_0),
        .sys_valid_out_1(sys_valid_out_1),
        .sys_valid_out_2(sys_valid_out_2),
        .sys_valid_out_3(sys_valid_out_3),
        .sys_valid_out_4(sys_valid_out_4),
        .sys_valid_out_5(sys_valid_out_5),
        .sys_valid_out_6(sys_valid_out_6),
        .sys_valid_out_7(sys_valid_out_7),
        .ub_rd_input_data_out_0(ub_rd_input_data_out_0),
        .ub_rd_input_data_out_1(ub_rd_input_data_out_1),
        .ub_rd_input_valid_out_0(ub_rd_input_valid_out_0),
        .ub_rd_input_valid_out_1(ub_rd_input_valid_out_1),
        .ub_rd_weight_data_out_0(ub_rd_weight_data_out_0),
        .ub_rd_weight_data_out_1(ub_rd_weight_data_out_1),
        .ub_rd_weight_valid_out_0(ub_rd_weight_valid_out_0),
        .ub_rd_weight_valid_out_1(ub_rd_weight_valid_out_1),
        .ub_rd_bias_data_out_0(ub_rd_bias_data_out_0),
        .ub_rd_bias_data_out_1(ub_rd_bias_data_out_1),
        .ub_rd_Y_data_out_0(ub_rd_Y_data_out_0),
        .ub_rd_Y_data_out_1(ub_rd_Y_data_out_1),
        .ub_rd_H_data_out_0(ub_rd_H_data_out_0),
        .ub_rd_H_data_out_1(ub_rd_H_data_out_1),
        .ub_rd_col_size_out(ub_rd_col_size_out),
        .ub_rd_col_size_valid_out(ub_rd_col_size_valid_out)
    );

endmodule
