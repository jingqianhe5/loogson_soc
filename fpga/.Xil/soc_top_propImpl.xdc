set_property SRC_FILE_INFO {cfile:/home/hjq/usr/loongson/la32r_soc_ciciec-2/fpga/project/ipgen/clk_pll/clk_pll.xdc rfile:../project/ipgen/clk_pll/clk_pll.xdc id:1 order:EARLY scoped_inst:pll_clk.u_clk_pll/inst} [current_design]
set_property SRC_FILE_INFO {cfile:/home/hjq/usr/loongson/la32r_soc_ciciec-2/fpga/constraints/soc.xdc rfile:../constraints/soc.xdc id:2} [current_design]
current_instance pll_clk.u_clk_pll/inst
set_property src_info {type:SCOPED_XDC file:1 line:54 export:INPUT save:INPUT read:READ} [current_design]
set_input_jitter [get_clocks -of_objects [get_ports clk_in1]] 0.200
current_instance
set_property src_info {type:XDC file:2 line:107 export:INPUT save:INPUT read:READ} [current_design]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets clock_btn_IBUF]
