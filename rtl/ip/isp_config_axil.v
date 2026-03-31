`timescale 1ns / 1ps

module isp_config_axil (
    input  wire        aclk,
    input  wire        aresetn,

    // --- AXI-Lite Slave Interface ---
    input  wire [31:0] s_axil_awaddr,
    input  wire [ 2:0] s_axil_awprot,  // 补全保护信号位宽对齐
    input  wire        s_axil_awvalid,
    output wire        s_axil_awready,
    input  wire [31:0] s_axil_wdata,   
    input  wire [ 3:0] s_axil_wstrb,   
    input  wire        s_axil_wvalid,
    output wire        s_axil_wready,
    output wire [ 1:0] s_axil_bresp,   
    output wire        s_axil_bvalid,
    input  wire        s_axil_bready,

    input  wire [31:0] s_axil_araddr,
    input  wire [ 2:0] s_axil_arprot,  // 补全保护信号位宽对齐
    input  wire        s_axil_arvalid,
    output wire        s_axil_arready,
    output wire [31:0] s_axil_rdata,
    output wire [ 1:0] s_axil_rresp,
    output wire        s_axil_rvalid,
    input  wire        s_axil_rready,

    // --- ISP Control Interface ---
    output wire        frame_start_pulse
);

    // ==========================================
    // 1. 写通道：分离式握手 (绝生死锁)
    // ==========================================
    reg aw_done;
    reg w_done;
    reg axi_bvalid;
    reg [31:0] awaddr_reg; // 锁存写地址

    assign s_axil_awready = ~aw_done && ~axi_bvalid;
    assign s_axil_wready  = ~w_done  && ~axi_bvalid;
    assign s_axil_bvalid  = axi_bvalid;
    assign s_axil_bresp   = 2'b00;

    always @(posedge aclk) begin
        if (~aresetn) begin
            aw_done    <= 1'b0;
            w_done     <= 1'b0;
            axi_bvalid <= 1'b0;
            awaddr_reg <= 32'd0;
        end else begin
            // 独立接收地址
            if (s_axil_awvalid && s_axil_awready) begin
                aw_done    <= 1'b1;
                awaddr_reg <= s_axil_awaddr; // 锁存住地址
            end
            
            // 独立接收数据
            if (s_axil_wvalid && s_axil_wready) begin
                w_done     <= 1'b1;
            end
            
            // 地址和数据收齐，发回执
            if (aw_done && w_done) begin
                axi_bvalid <= 1'b1;
                aw_done    <= 1'b0;
                w_done     <= 1'b0;
            end
            
            // CPU 签收回执
            if (axi_bvalid && s_axil_bready) begin
                axi_bvalid <= 1'b0;
            end
        end
    end

    // ==========================================
    // 2. 寄存器逻辑 (产生 frame_start_pulse)
    // ==========================================
    reg pulse_r;

    always @(posedge aclk) begin
        if (~aresetn) begin
            pulse_r <= 1'b0;
        end else begin
            // 利用 aw_done && w_done 的单周期特性触发脉冲
            // 当地址和数据都收齐的那一拍，如果写入的是基地址 (0x00)，拉高脉冲
            if (aw_done && w_done && (awaddr_reg[7:0] == 8'h00)) begin
                pulse_r <= 1'b1;
            end else begin
                pulse_r <= 1'b0;
            end
        end
    end

    assign frame_start_pulse = pulse_r;

    // ==========================================
    // 3. 读通道：防吞包设计
    // ==========================================
    reg axi_rvalid;
    reg [31:0] axi_rdata;
    
    assign s_axil_arready = ~axi_rvalid; // 手里没货时才允许接新订单
    assign s_axil_rvalid  = axi_rvalid;
    assign s_axil_rdata   = axi_rdata;
    assign s_axil_rresp   = 2'b00;

    always @(posedge aclk) begin
        if (~aresetn) begin
            axi_rvalid <= 1'b0;
            axi_rdata  <= 32'd0;
        end else begin
            if (s_axil_arvalid && s_axil_arready) begin
                axi_rvalid <= 1'b1;
                // ISP 模块目前没有状态供 CPU 读取，所以无论读什么地址都返回 0
                axi_rdata  <= 32'd0; 
            end else if (s_axil_rready && axi_rvalid) begin
                axi_rvalid <= 1'b0;
            end
        end
    end

endmodule
