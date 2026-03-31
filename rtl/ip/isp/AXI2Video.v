`timescale 1ns / 1ps

module AXI2Video #(
    // 你需要根据你的 DMA 参数设置这里的位宽
    parameter AXIS_DATA_WIDTH = 32 
)(
    input  wire        clk,
    input  wire        rst_n,

    // --- 输入：CPU 触发帧复位 (需要龙芯 CPU 通过寄存器产生一个脉冲) ---
    input  wire        cpu_frame_start_pulse, 

    // --- 输入：连接 DMA 的读通道 (m_axis_read_data_*) ---
    input  wire [AXIS_DATA_WIDTH-1:0] s_axis_tdata,
    input  wire        s_axis_tvalid,
    input  wire        s_axis_tlast, // 这个信号在简易版里暂时不用
    output wire        s_axis_tready, // 反压信号，DMA只有等到ready为高才继续发

    // --- 输出：连接你 ISP 的输入 (per_img_*) ---
    output wire        isp_vsync,
    output wire        isp_href,
    output wire        isp_de,
    output wire [23:0] isp_data
);

    // 寄存器打一拍，确保时序
    reg [23:0] data_r;
    reg        de_r;
    reg        href_r;
    reg        line_active_r;
    reg        vsync_r;

    // --- 场同步 (VSYNC) 生成逻辑 ---
    // 为了让 vsync 脉冲具有一定宽度，我们可以让它在检测到 CPU 启动脉冲后拉高几个周期
    reg [3:0] vsync_counter;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            vsync_r <= 1'b0;
            vsync_counter <= 4'd0;
        end else begin
            if (cpu_frame_start_pulse) begin
                vsync_r <= 1'b1;
                vsync_counter <= 4'd10; // 保持 10 个时钟周期高电平
            end else if (vsync_counter > 4'd0) begin
                vsync_counter <= vsync_counter - 4'd1;
            end else begin
                vsync_r <= 1'b0;
            end
        end
    end

    // --- 数据与数据有效性传递逻辑 ---
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data_r       <= 24'd0;
            de_r         <= 1'b0;
            href_r       <= 1'b0;
            line_active_r<= 1'b0;
        end else begin
            // 数据打一拍，从32位截取低24位
            data_r <= s_axis_tdata[23:0]; 
            // 如果 TREADY 为低，DMA 即使把 TVALID 拉高，数据也不应有效，这里加上保护
            de_r   <= s_axis_tvalid & s_axis_tready; 

            // 把一个 DMA descriptor 视作一整行。
            // 即使 AXI-Stream 中间有空拍，也保持 HREF 为高，直到该 descriptor 的最后一拍到来。
            if (s_axis_tvalid & s_axis_tready) begin
                href_r <= 1'b1;
                line_active_r <= ~s_axis_tlast;
            end else begin
                href_r <= line_active_r;
            end
        end
    end

    // --- 信号映射 ---
    assign isp_data  = data_r;
    assign isp_de    = de_r;
    // 简易模式下，行有效 HREF 直接连 DE (意味着没有行间消隐 blanking)
    assign isp_href  = href_r; 
    assign isp_vsync = vsync_r;
    assign s_axis_tready = 1'b1; 

endmodule
