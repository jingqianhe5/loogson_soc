/*------------------------------------------------------------------------------
--------------------------------------------------------------------------------
Copyright (c) 2016, Loongson Technology Corporation Limited.

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this 
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

3. Neither the name of Loongson Technology Corporation Limited nor the names of 
its contributors may be used to endorse or promote products derived from this 
software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL LOONGSON TECHNOLOGY CORPORATION LIMITED BE LIABLE
TO ANY PARTY FOR DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------
------------------------------------------------------------------------------*/
`timescale 1ns / 1ps
`include "config.h"

`define UART_PSEL               u_soc_top.u_axi_uart_controller.uart0.PSEL
`define UART_PENBLE             u_soc_top.u_axi_uart_controller.uart0.PENABLE
`define UART_PWRITE             u_soc_top.u_axi_uart_controller.uart0.PWRITE
`define UART_WADDR              u_soc_top.u_axi_uart_controller.uart0.PADDR[7:0]
`define UART_WDATA              u_soc_top.u_axi_uart_controller.uart0.PWDATA[7:0]

module tb_top( );
reg reset;
reg clk;
reg   [3:0]  touch_btn;
reg   [31:0]  dip_sw;

wire         UART_RX;
wire         UART_TX;
wire  [2:0]  video_red;
wire  [2:0]  video_green;
wire  [1:0]  video_blue;
wire  video_hsync;
wire  video_vsync;
wire  video_clk;
wire  video_de;
wire  [15:0]  leds;
wire  [7:0]  dpy0;
wire  [7:0]  dpy1;
wire  [19:0]  base_ram_addr;
wire  [ 3:0]  base_ram_be_n;
wire  base_ram_ce_n;
wire  base_ram_oe_n;
wire  base_ram_we_n;
wire  [19:0]  ext_ram_addr;
wire  [ 3:0]  ext_ram_be_n;
wire  ext_ram_ce_n;
wire  ext_ram_oe_n;
wire  ext_ram_we_n;
wire  [31:0]  base_ram_data;
wire  [31:0]  ext_ram_data;


initial
begin
    clk = 1'b0;
    reset = 1'b1;
    dip_sw = 32'h0;
    #2000;
    reset = 1'b0;
end
always #10 clk=~clk;

initial
begin
    touch_btn = 4'h0;
    dip_sw    = 32'h0000_abcd;

    #3000000;

    #100000
    touch_btn = 4'b0001;
    #50
    touch_btn = 4'b0000;

    #100000
    touch_btn = 4'b0010;
    #50
    touch_btn = 4'b0000;

    #100000
    touch_btn = 4'b0100;
    #50
    touch_btn = 4'b0000;

    #100000
    touch_btn = 4'b1000;
    #50
    touch_btn = 4'b0000;

end

soc_top  #(.SIMULATION(1'b1)) u_soc_top (
    .clk                     ( clk           ),
    .reset                   ( reset         ),
    .touch_btn               ( touch_btn     ),
    .dip_sw                  ( dip_sw        ),

    .video_red               ( video_red     ),
    .video_green             ( video_green   ),
    .video_blue              ( video_blue    ),
    .video_hsync             ( video_hsync   ),
    .video_vsync             ( video_vsync   ),
    .video_clk               ( video_clk     ),
    .video_de                ( video_de      ),
    .leds                    ( leds          ),
    .dpy0                    ( dpy0          ),
    .dpy1                    ( dpy1          ),

    .base_ram_addr           ( base_ram_addr   ),
    .base_ram_be_n           ( base_ram_be_n   ),
    .base_ram_ce_n           ( base_ram_ce_n   ),
    .base_ram_oe_n           ( base_ram_oe_n   ),
    .base_ram_we_n           ( base_ram_we_n   ),
    .ext_ram_addr            ( ext_ram_addr    ),
    .ext_ram_be_n            ( ext_ram_be_n    ),
    .ext_ram_ce_n            ( ext_ram_ce_n    ),
    .ext_ram_oe_n            ( ext_ram_oe_n    ),
    .ext_ram_we_n            ( ext_ram_we_n    ),

    .base_ram_data           ( base_ram_data   ),
    .ext_ram_data            ( ext_ram_data    ),

    .UART_RX                 ( UART_RX       ),
    .UART_TX                 ( UART_TX       )
);


//模拟串口打印
wire uart_display;
wire [7:0] uart_data;
wire uart_wen;
assign uart_wen = (`UART_PSEL == 1'b1) &&  (`UART_PENBLE == 1'b1) && (`UART_PWRITE == 1'b1);
assign uart_display = (uart_wen == 1'b1) && (`UART_WADDR == 8'h0);
assign uart_data    = `UART_WDATA;

always @(posedge clk)
begin
    if(uart_display)
    begin
        if(uart_data==8'hff)
        begin
            ;//$finish;
        end
        else
        begin
            $write("%c",uart_data);
        end
    end
end

sram_sp #(
    .AW        ( 21     ),
    .Init_File(`SRAM_Init_File))
base_sram_sp (
    .ram_addr                ( base_ram_addr   ),
    .ram_be_n                ( base_ram_be_n   ),
    .ram_ce_n                ( base_ram_ce_n   ),
    .ram_oe_n                ( base_ram_oe_n   ),
    .ram_we_n                ( base_ram_we_n   ),

    .ram_data                ( base_ram_data   )
);

sram_sp #(
    .AW        ( 21     ),
    .Init_File(`SRAM_Init_File))
ext_sram_sp (
    .ram_addr                ( ext_ram_addr   ),
    .ram_be_n                ( ext_ram_be_n   ),
    .ram_ce_n                ( ext_ram_ce_n   ),
    .ram_oe_n                ( ext_ram_oe_n   ),
    .ram_we_n                ( ext_ram_we_n   ),

    .ram_data                ( ext_ram_data   )
);
initial begin
    // 必须等待一段时间！
    // 因为 sram_sp 内部有 $readmemb(Init_File, BRAM) 会在 0 时刻加载启动代码。
    // 我们等启动代码加载完、系统复位结束后，再把图像数据“强塞”进去。
    #5000; 
    
    $display("-----------------------------------------");
    $display("--- [TB] Start Loading Image to SRAM  ---");
    
    // 【地址映射核对】:
    // 假设 C 代码里配置 DMA 读起始地址为 0x1C10_0000
    // base_sram 基地址是 0x1C00_0000，偏移量是 0x10_0000 字节。
    // Verilog 数组索引是 Word(32-bit) 地址，所以索引 = 0x100000 / 4 = 0x40000。
    // 假设图像是 256x256 (65536 像素)，占 0x10000 个 Word。
    // 结束索引 = 0x40000 + 0x10000 - 1 = 0x4FFFF。
    
    // 从 image_in.hex 读取数据，塞入 BRAM
   $readmemh("/home/hjq/usr/loongson/la32r_soc_ciciec-2/sdk/software/examples/isp_test/image_in.hex", base_sram_sp.BRAM, 21'h80000, 21'h80FFF);
    
    $display("--- [TB] Image Loaded Successfully!   ---");
    $display("-----------------------------------------");
end

// ===================================================================
// [新增功能 2]：仿真后期 -> 导出处理后的图像数据
// ===================================================================
initial begin
    // 给系统留出足够的处理时间！
    // 256x256=65536个像素，假设 ISP 处理一个像素要 1 个时钟周期(10ns)，
    // 加上 DMA 总线传输的开销，至少需要几毫秒的仿真时间。
    // 这里等待 20 毫秒 (20,000,000 ns)，如果提前跑完了可以在 C 代码里加个打印。
    #8000000; 
    
    $display("-----------------------------------------");
    $display("--- [TB] Start Extracting Image       ---");
    
    // 【地址映射核对】:
    // 假设 C 代码里配置 DMA 写回地址为 0x1C20_0000
    // 偏移量 0x20_0000 字节 -> Word 索引 = 0x200000 / 4 = 0x80000。
    // 结束索引 = 0x80000 + 0x10000 - 1 = 0x8FFFF。
    
    // XSIM 对这里的 $writememh 支持不稳定，手动逐行导出更可靠
    begin : dump_image
        integer fd;
        integer idx;
        fd = $fopen("/home/hjq/usr/loongson/la32r_soc_ciciec-2/sdk/software/examples/isp_test/image_out.hex", "w");
        if (fd == 0) begin
            $display("[%0t] ERROR: failed to open image_out.hex for write", $time);
        end else begin
            for (idx = 21'hC0000; idx <= 21'hC0FFF; idx = idx + 1) begin
                $fdisplay(fd, "%08x", base_sram_sp.BRAM[idx]);
            end
            $fclose(fd);
        end
    end
    
    $display("--- [TB] Extraction Complete!         ---");
    $display("-----------------------------------------");
    
    // 数据拿到了，主动结束仿真，防止干等
    $finish; 
end

endmodule
