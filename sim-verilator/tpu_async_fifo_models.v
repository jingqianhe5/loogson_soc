`timescale 1ns/1ps

module sim_async_fifo_model #(
    parameter WIDTH = 32,
    parameter DEPTH = 16
) (
    input  wire             rst,
    input  wire             wr_clk,
    input  wire             rd_clk,
    input  wire [WIDTH-1:0] din,
    input  wire             wr_en,
    input  wire             rd_en,
    output wire [WIDTH-1:0] dout,
    output wire             full,
    output wire             empty,
    output wire             valid,
    output wire             wr_rst_busy,
    output wire             rd_rst_busy
);
    localparam PTR_WIDTH = $clog2(DEPTH);

    reg [WIDTH-1:0] mem [0:DEPTH-1];
    reg [PTR_WIDTH-1:0] wr_ptr;
    reg [PTR_WIDTH-1:0] rd_ptr;
    integer count;

    assign full  = (count >= DEPTH);
    assign empty = (count == 0);
    assign valid = !empty;
    assign dout  = valid ? mem[rd_ptr] : {WIDTH{1'b0}};
    assign wr_rst_busy = 1'b0;
    assign rd_rst_busy = 1'b0;

    always @(posedge wr_clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= {PTR_WIDTH{1'b0}};
            count  <= 0;
        end else if (wr_en && !full) begin
            mem[wr_ptr] <= din;
            wr_ptr      <= wr_ptr + {{(PTR_WIDTH-1){1'b0}}, 1'b1};
            count       <= count + 1;
        end
    end

    always @(posedge rd_clk or posedge rst) begin
        if (rst) begin
            rd_ptr <= {PTR_WIDTH{1'b0}};
        end else if (rd_en && !empty) begin
            rd_ptr <= rd_ptr + {{(PTR_WIDTH-1){1'b0}}, 1'b1};
            count  <= count - 1;
        end
    end
endmodule

module tpu_cmd_async_fifo(
    input  wire        rst,
    input  wire        wr_clk,
    input  wire        rd_clk,
    input  wire [31:0] din,
    input  wire        wr_en,
    input  wire        rd_en,
    output wire [31:0] dout,
    output wire        full,
    output wire        empty,
    output wire        valid,
    output wire        wr_rst_busy,
    output wire        rd_rst_busy
);
    sim_async_fifo_model #(
        .WIDTH(32),
        .DEPTH(16)
    ) u_model (
        .rst(rst),
        .wr_clk(wr_clk),
        .rd_clk(rd_clk),
        .din(din),
        .wr_en(wr_en),
        .rd_en(rd_en),
        .dout(dout),
        .full(full),
        .empty(empty),
        .valid(valid),
        .wr_rst_busy(wr_rst_busy),
        .rd_rst_busy(rd_rst_busy)
    );
endmodule

module tpu_result_async_fifo(
    input  wire         rst,
    input  wire         wr_clk,
    input  wire         rd_clk,
    input  wire [135:0] din,
    input  wire         wr_en,
    input  wire         rd_en,
    output wire [135:0] dout,
    output wire         full,
    output wire         empty,
    output wire         valid,
    output wire         wr_rst_busy,
    output wire         rd_rst_busy
);
    sim_async_fifo_model #(
        .WIDTH(136),
        .DEPTH(64)
    ) u_model (
        .rst(rst),
        .wr_clk(wr_clk),
        .rd_clk(rd_clk),
        .din(din),
        .wr_en(wr_en),
        .rd_en(rd_en),
        .dout(dout),
        .full(full),
        .empty(empty),
        .valid(valid),
        .wr_rst_busy(wr_rst_busy),
        .rd_rst_busy(rd_rst_busy)
    );
endmodule
