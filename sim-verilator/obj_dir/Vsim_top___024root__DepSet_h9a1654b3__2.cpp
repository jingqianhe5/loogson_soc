// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top___024root.h"

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__15(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__15\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0;
    __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0 = 0;
    VlWide<5>/*135:0*/ __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0;
    VL_ZERO_W(136, __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0;
    __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count;
    __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count = 0;
    CData/*5:0*/ __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0;
    __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0 = 0;
    VlWide<5>/*135:0*/ __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0;
    VL_ZERO_W(136, __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0;
    __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count;
    __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count = 0;
    // Body
    __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count;
    __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0 = 0U;
    __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count;
    __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0 = 0U;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_cpu__DOT__delay 
            = (1U | (2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_cpu__DOT__delay) 
                           << 1U)));
        if (((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count) 
             & (0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr)));
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_tpu__DOT__delay 
            = (1U | (2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_tpu__DOT__delay) 
                           << 1U)));
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_valid) 
             & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_empty)))) {
            __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count 
                = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count 
                   - (IData)(1U));
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_wr_en) 
             & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_full)))) {
            __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count 
                = ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count);
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_rd_en) 
             & (0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_wr_en) 
             & VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count))) {
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U];
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U];
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U];
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[3U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U];
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[4U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out;
            __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0 = 1U;
            __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__wr_ptr;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__wr_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__wr_ptr)));
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_wr_en) 
             & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_full)))) {
            __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count 
                = ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count);
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_rd_en) 
             & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_empty)))) {
            __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count 
                = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count 
                   - (IData)(1U));
        }
        if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_wr_en) 
             & VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count))) {
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[0U] 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd)
                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]
                    : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                        << 0x10U) | (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[1U] = 0U;
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[2U] = 0U;
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[3U] = 0U;
            __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[4U] 
                = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd)
                     ? 1U : 2U) << 6U);
            __Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0 = 1U;
            __Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__wr_ptr;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__wr_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__wr_ptr)));
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_cpu__DOT__delay = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_tpu__DOT__delay = 0U;
        __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__wr_ptr = 0U;
        __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__wr_ptr = 0U;
    }
    if (__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0][0U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0][1U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0][2U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[2U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0][3U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[3U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0][4U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem__v0[4U];
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count 
        = __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count;
    if (__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0][0U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0][1U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0][2U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[2U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0][3U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[3U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem[__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0][4U] 
            = __Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem__v0[4U];
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count 
        = __Vdly__sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count;
    vlSelf->__VdfgTmp_h91872c8c__0[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr][0U];
    vlSelf->__VdfgTmp_h91872c8c__0[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr][1U];
    vlSelf->__VdfgTmp_h91872c8c__0[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr][2U];
    vlSelf->__VdfgTmp_h91872c8c__0[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr][3U];
    vlSelf->__VdfgTmp_h91872c8c__0[4U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr][4U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_valid 
        = (0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count);
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_full 
        = VL_LTES_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count);
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_empty 
        = (0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count);
    vlSelf->__VdfgTmp_h8d1be2a1__0[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr][0U];
    vlSelf->__VdfgTmp_h8d1be2a1__0[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr][1U];
    vlSelf->__VdfgTmp_h8d1be2a1__0[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr][2U];
    vlSelf->__VdfgTmp_h8d1be2a1__0[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr][3U];
    vlSelf->__VdfgTmp_h8d1be2a1__0[4U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__mem
        [vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr][4U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_full 
        = VL_LTES_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count);
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_empty 
        = (0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count);
    if ((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_valid = 0U;
    } else if ((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_valid = 0U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[0U] 
            = vlSelf->__VdfgTmp_h91872c8c__0[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[1U] 
            = vlSelf->__VdfgTmp_h91872c8c__0[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[2U] 
            = vlSelf->__VdfgTmp_h91872c8c__0[2U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data[3U] 
            = vlSelf->__VdfgTmp_h91872c8c__0[3U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_valid 
            = (0xffU & vlSelf->__VdfgTmp_h91872c8c__0[4U]);
    }
    if ((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_addr = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_data = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_op_tpu = 0U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_addr 
            = (vlSelf->__VdfgTmp_h8d1be2a1__0[0U] >> 0x10U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_data 
            = (0xffffU & vlSelf->__VdfgTmp_h8d1be2a1__0[0U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_op_tpu 
            = (3U & (vlSelf->__VdfgTmp_h8d1be2a1__0[4U] 
                     >> 6U));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_is_start 
        = ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count) 
           & (1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_op_tpu)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__16(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__16\n"); );
    // Body
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_resetn) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_sync_cpu 
            = ((2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_sync_cpu) 
                      << 1U)) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_tpu));
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_sync_cpu 
            = ((2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_sync_cpu) 
                      << 1U)) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_tpu));
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_sync_cpu 
            = ((2U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_sync_cpu) 
                      << 1U)) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_tpu));
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_sync_cpu = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_sync_cpu = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_sync_cpu = 0U;
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__19(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v0 
        = (0xffU & vlSelf->sim_top__DOT__base_ram_data);
    vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v0 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v0 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__20(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__20\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v1 
        = (0xffU & (vlSelf->sim_top__DOT__base_ram_data 
                    >> 8U));
    vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v1 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v1 = 8U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v1 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__21(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v2 
        = (0xffU & (vlSelf->sim_top__DOT__base_ram_data 
                    >> 0x10U));
    vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v2 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v2 = 0x10U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v2 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__22(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v3 
        = (vlSelf->sim_top__DOT__base_ram_data >> 0x18U);
    vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v3 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v3 = 0x18U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v3 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__23(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__23\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v0 
        = (0xffU & vlSelf->sim_top__DOT__ext_ram_data);
    vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v0 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v0 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__24(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__24\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v1 
        = (0xffU & (vlSelf->sim_top__DOT__ext_ram_data 
                    >> 8U));
    vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v1 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v1 = 8U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v1 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__25(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__25\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v2 
        = (0xffU & (vlSelf->sim_top__DOT__ext_ram_data 
                    >> 0x10U));
    vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v2 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v2 = 0x10U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v2 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__26(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__26\n"); );
    // Body
    vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v3 
        = (vlSelf->sim_top__DOT__ext_ram_data >> 0x18U);
    vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v3 = 1U;
    vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v3 = 0x18U;
    vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v3 
        = (0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                       >> 2U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__0(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[0U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [0U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][0U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[0U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [0U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][0U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[1U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [1U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][1U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[1U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [1U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][1U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[2U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [2U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][2U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[2U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [2U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][2U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[3U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [3U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][3U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[3U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [3U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][3U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[4U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [4U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][4U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[4U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [4U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][4U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[5U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [5U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][5U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[5U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [5U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][5U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[6U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [6U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][6U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[6U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [6U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][6U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[7U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_Y_valid_q
           [7U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [3U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [3U][7U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[7U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_H_valid_q
           [7U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [4U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [4U][7U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[0U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][0U]];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[1U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][1U]];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[2U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][2U]];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[3U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][3U]];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[4U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][4U]];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[5U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][5U]];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[6U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][6U]];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[7U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
        [2U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
        [2U][7U]];
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [0U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][0U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][0U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[0U] = 0U;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [1U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][1U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][1U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[1U] = 0U;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [2U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][2U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][2U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[2U] = 0U;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [3U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[3U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][3U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[3U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][3U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[3U] = 0U;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [4U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[4U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][4U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[4U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][4U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[4U] = 0U;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [5U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[5U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][5U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[5U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][5U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[5U] = 0U;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [6U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[6U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][6U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[6U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][6U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[6U] = 0U;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_valid_in
        [7U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[7U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [6U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [6U][7U]];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[7U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
            [5U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
            [5U][7U]];
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[7U] = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[0U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [0U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][0U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[1U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [1U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][1U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[2U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [2U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][2U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[3U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [3U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][3U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[4U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [4U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][4U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[5U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [5U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][5U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[6U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [6U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][6U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[7U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_valid_out
           [7U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [0U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [0U][7U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[0U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [0U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][0U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[1U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [1U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][1U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[2U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [2U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][2U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[3U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [3U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][3U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[4U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [4U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][4U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[5U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [5U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][5U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[6U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [6U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][6U]] : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[7U] 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_valid_out
           [7U] ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_data
           [1U][vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__rd_lane_bank_q
           [1U][7U]] : 0U);
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_bias_or_weight) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_bias_or_weight) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [0U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [1U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [2U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [3U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [4U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [5U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [6U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                [7U];
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [0U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [1U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [2U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [3U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [4U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [5U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [6U]);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__grad_descent_done_out)
                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT____Vcellout__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__value_updated_out)
                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
               [7U]);
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__mul_out))));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow = 0U;
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__27(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__27\n"); );
    // Body
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        if ((0x100U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_selector))) {
            if ((1U == (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_selector)))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_vsync 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_vsync_d;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_href 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_hsync_d;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_de 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__post_de_reg;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data 
                    = (0xffffffU & (- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__monoc))));
            } else if ((2U == (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_selector)))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_vsync 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_vs;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_href 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_hs;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_de 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_de;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data 
                    = (0xffffffU & (- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__post_img_bit))));
            } else {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_vsync 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_vsync;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_href 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_href;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_de 
                    = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_de;
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data 
                    = (0xffffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_data);
            }
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_vsync 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_vsync;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_href 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_href;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_de 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_de;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data 
                = (0xffffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_data);
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_vsync = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_href = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_de = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data = 0U;
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__29(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__29\n"); );
    // Init
    CData/*0:0*/ sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0;
    sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0 = 0;
    // Body
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_valid) 
         & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_allowin))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[2U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[3U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[4U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[5U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[6U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[7U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[8U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[9U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0xaU];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0xbU];
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__preld_inst 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 6U) & ((0U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      | (8U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_op 
        = (1U & ((~ (IData)((0U != (0x60U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U])))) 
                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                    >> 5U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__icacop_inst 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (0U == (7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__dcacop_inst 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
            >> 5U) & (1U == (7U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__access_mem 
        = (IData)((0U != (0x420U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    if ((0x2000000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
            = (((QData)((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
            = (((QData)((IData)((- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])));
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
            = (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
            = (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_enable 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
            >> 6U) & ((0U != (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid)));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31 
            = (1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__x_31_buffer));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed 
            = (1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__div_signed_buffer));
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31 
            = (1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                     >> 0x1fU));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed 
            = (1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                     >> 0x19U));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_pair_valid 
        = ((0x20U > (0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])) 
           & ((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_valid_bits 
                       >> (0x3fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                    << 1U)))) & (IData)(
                                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_valid_bits 
                                                         >> 
                                                         (1U 
                                                          | (0x3eU 
                                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                << 1U)))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_div_enable 
        = ((IData)((0U != (0x30000000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
        = ((0x200U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]
            : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2 
        = ((0x100U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]
            : ((0x80U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])
                ? 4U : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin 
        = (IData)((0U != (0x7000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
            >> 0x1eU) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y 
        = ((4U & ((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                           >> 0x20U)) << 2U)) | (3U 
                                                 & (IData)(
                                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                            >> 0x1fU))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r 
        = (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_r)) 
            << 1U) | (QData)((IData)(((0x20U >= (0x3fU 
                                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count))) 
                                      & (IData)(((QData)((IData)(
                                                                 ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                                   ? 
                                                                  ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                    >> 0x1fU)
                                                                    ? 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (~ 
                                                                     vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))
                                                                    : 
                                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                                   : 
                                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data 
        = (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                              >> 6U)))) & (((- (IData)(
                                                       (1U 
                                                        & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                            >> 0xbU) 
                                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                              >> 0xeU))))) 
                                            & (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                           | (((- (IData)(
                                                          (1U 
                                                           & ((~ 
                                                               (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                >> 0xeU)) 
                                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                 >> 0xbU))))) 
                                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_byteLoaded)) 
                                              | (((- (IData)(
                                                             (1U 
                                                              & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                  >> 0xcU) 
                                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                    >> 0xeU))))) 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded) 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded))) 
                                                 | (((- (IData)(
                                                                (1U 
                                                                 & ((~ 
                                                                     (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                      >> 0xeU)) 
                                                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                       >> 0xcU))))) 
                                                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__mem_halfLoaded)) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                                >> 0xbU)))))))) 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_rdata)))))) 
           | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                 >> 7U)))) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mul_result)) 
              | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 8U)))) & (IData)(
                                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mul_result 
                                                         >> 0x20U))) 
                 | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                       >> 9U)))) & (IData)(
                                                           (0x1ffffffffULL 
                                                            & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                                ? 
                                                               (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31) 
                                                                 == 
                                                                 (1U 
                                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_complete)
                                                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__y_31_buffer)
                                                                      : 
                                                                     (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                                      >> 0x1fU))))
                                                                 ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS
                                                                 : 
                                                                (~ 
                                                                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS 
                                                                  - 1ULL)))
                                                                : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignS)))) 
                    | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                          >> 0xaU)))) 
                        & (IData)((0x1ffffffffULL & 
                                   ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                     ? ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31)
                                         ? (~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR 
                                               - 1ULL))
                                         : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR)
                                     : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__UnsignR)))) 
                       | ((- (IData)((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7c0U 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))))))) 
                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[1U] 
                             & (- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__sc_cancel_req))))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)
            ? (~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)
            : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__status_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
           & (1U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                            << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                      >> 0x1fU)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
           & (0U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                            << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                      >> 0x1fU)))));
    sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
           & (2U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                            << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                      >> 0x1fU)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_d 
        = (0x1ffffffffULL & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r 
                             - (QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
                                                 ? 
                                                ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                  >> 0x1fU)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]))
                                                  : 
                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])
                                                 : 
                                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
           + (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b 
              + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_cmd 
        = ((IData)(sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0) 
           & (0U == (0xfe0U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd 
        = ((IData)(sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT____VdfgTmp_hed47fc9e__0) 
           & (0x20U == (0xfe0U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
        = (((- (IData)((IData)((0U != (0x1800U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result) 
           | ((1U & ((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xdU)))) 
                     & (((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2 
                             >> 0x1fU)) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                           >> 0x1fU)) 
                        | ((~ ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                ^ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                               >> 0x1fU)) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
                                             >> 0x1fU))))) 
              | ((1U & ((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                          >> 0xeU)))) 
                        & (~ (IData)((1ULL & (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                                               + ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                              >> 0x20U)))))) 
                 | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 0xfU)))) 
                     & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)) 
                    | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                          >> 0x17U)))) 
                        & ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                       | (((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result) 
                           & (- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                               >> 0x10U))))) 
                          | (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 0x11U)))) 
                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result) 
                             | (((- (IData)((1U & (
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x18U)))) 
                                 & ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                                    | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                                | (((- (IData)((1U 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x12U)))) 
                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                       ^ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)) 
                                   | (((- (IData)((1U 
                                                   & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                      >> 0x16U)))) 
                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                                      | (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                         >> 0x13U)))) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                             << (0x1fU 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2))) 
                                         | ((- (IData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))))) 
                                            & (IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x15U) 
                                                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                                                                >> 0x1fU)))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1))) 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)))))))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wdata 
        = (((- (IData)((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                              >> 0x1eU)))) & ((((- (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                               << 0x18U) 
                                              | ((0xff0000U 
                                                  & (((- (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (((- (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((- (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))))) 
           | (((- (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                           >> 0x1fU))) & ((((- (IData)(
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & ((- (IData)(
                                                           (0U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))) 
              | ((- (IData)((1U & (~ (IData)((0U != 
                                              (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                               >> 0x1eU))))))) 
                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
        = ((0x40000000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
            ? (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__tlbehi_wen)
                 ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                     << 0xbU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 0x15U)) : (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbehi 
                                               >> 0xdU)) 
               << 0xdU) : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp_ale 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__access_mem) 
           & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                >> 0x1fU) & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va) 
              | ((~ (IData)((0U != (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                    >> 0x1eU)))) & 
                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
                  | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
                     >> 1U)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp 
        = (1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp_ale)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__31(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__31\n"); );
    // Body
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_vs 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_vsync_r1) 
               >> 0xfU);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_vsync_d 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_vsync;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_hs 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_href_r1) 
               >> 0xfU);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_hsync_d 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_href;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_de 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_de_r1) 
               >> 0xfU);
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_de) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__post_de_reg = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__monoc 
                = (0x40U < (0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_data 
                                     >> 0x10U)));
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__post_de_reg = 0U;
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_vs = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_vsync_d = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_hs = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_hsync_d = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_de = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__post_de_reg = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__monoc = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_vsync_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_vsync_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_href_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_href_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_de_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_de_r1;
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__32(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__32\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_start_pc_final 
        = ((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)
            ? 0U : vlSelf->__VdfgTmp_h8d1be2a1__0[0U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_resetn 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_cpu__DOT__delay) 
                 >> 1U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_resetn 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_tpu__DOT__delay) 
                 >> 1U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__33(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__33\n"); );
    // Body
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_base_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v0))) 
                & vlSelf->sim_top__DOT__u_base_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v1) {
        vlSelf->sim_top__DOT__u_base_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v1))) 
                & vlSelf->sim_top__DOT__u_base_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v2) {
        vlSelf->sim_top__DOT__u_base_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v2))) 
                & vlSelf->sim_top__DOT__u_base_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v2))));
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_base_sram__DOT__mem__v3) {
        vlSelf->sim_top__DOT__u_base_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v3))) 
                & vlSelf->sim_top__DOT__u_base_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_base_sram__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_base_sram__DOT__mem__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_base_sram__DOT__mem__v3))));
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__34(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__34\n"); );
    // Body
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_ext_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v0))) 
                & vlSelf->sim_top__DOT__u_ext_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v1) {
        vlSelf->sim_top__DOT__u_ext_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v1))) 
                & vlSelf->sim_top__DOT__u_ext_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v2) {
        vlSelf->sim_top__DOT__u_ext_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v2))) 
                & vlSelf->sim_top__DOT__u_ext_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v2))));
    }
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_ext_sram__DOT__mem__v3) {
        vlSelf->sim_top__DOT__u_ext_sram__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v3))) 
                & vlSelf->sim_top__DOT__u_ext_sram__DOT__mem
                [vlSelf->__Vdlyvdim0__sim_top__DOT__u_ext_sram__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim_top__DOT__u_ext_sram__DOT__mem__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim_top__DOT__u_ext_sram__DOT__mem__v3))));
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__6(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__rdata_d 
        = ((0xf000U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_en
            : ((0xf004U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_edge
                : ((0xf008U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_pol
                    : ((0xf00cU == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                        ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_clr
                        : ((0xf010U == (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_set
                            : ((0xf014U == (0xffffU 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_state
                                : ((0xf100U == (0xffffU 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer
                                    : ((0xf104U == 
                                        (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                        ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_cmp
                                        : ((0xf108U 
                                            == (0xffffU 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                            ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_en)
                                            : ((0xf200U 
                                                == 
                                                (0xffffU 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_ctrl
                                                : (
                                                   (0xf204U 
                                                    == 
                                                    (0xffffU 
                                                     & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_data
                                                    : 
                                                   ((0xf300U 
                                                     == 
                                                     (0xffffU 
                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                                     ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__led_data
                                                     : 
                                                    ((0xf400U 
                                                      == 
                                                      (0xffffU 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                                      ? vlSelf->sim_top__DOT__dip_sw
                                                      : 
                                                     ((0xf500U 
                                                       == 
                                                       (0xffffU 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr))
                                                       ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__simu_flag
                                                       : 0U))))))))))))));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__9(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_wr_en 
        = (1U & (~ (VL_LTES_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count) 
                    | (0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_rd_en 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_is_start) 
               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_tpu))) 
           & (0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_resetn) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[0U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[1U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 1U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[2U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 2U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[3U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[4U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 4U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[5U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 5U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[6U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 6U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[7U] 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode) 
                >> 3U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                          >> 7U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0U] 
            = (1U & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [0U] : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out)));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [0U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [0U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [0U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1U] 
            = (1U & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [1U] : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 1U)));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [1U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [1U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [1U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2U] 
            = (1U & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [2U] : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 2U)));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [2U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [2U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [2U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3U] 
            = (1U & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [3U] : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 3U)));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [3U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [3U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [3U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4U] 
            = (1U & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [4U] : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 4U)));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [4U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [4U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [4U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5U] 
            = (1U & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [5U] : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 5U)));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [5U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [5U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [5U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6U] 
            = (1U & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                      ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                     [6U] : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                             >> 6U)));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [6U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [6U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [6U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0U] = 0U;
        if ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7U] 
                = (1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_out
                   [7U]);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0U] 
                = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                   [0U]);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7U] 
                = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_valid_bus_out) 
                         >> 7U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0U] 
                = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]);
        }
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [7U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_out
                [7U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [0U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [0U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in
                [7U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [0U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1U] 
            = (0xffffU & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [1U] : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
                                   << 0x10U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
                                                >> 0x10U))));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [1U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [1U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [1U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2U] 
            = (0xffffU & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [2U] : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [2U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [2U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [2U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3U] 
            = (0xffffU & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [3U] : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
                                   << 0x10U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
                                                >> 0x10U))));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [3U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [3U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [3U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4U] 
            = (0xffffU & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [4U] : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [4U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [4U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [4U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5U] 
            = (0xffffU & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [5U] : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
                                   << 0x10U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
                                                >> 0x10U))));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [5U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [5U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [5U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6U] 
            = (0xffffU & ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))
                           ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                          [6U] : vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]));
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [6U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [6U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [6U];
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7U] = 0U;
        if ((8U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7U] 
                = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_out
                   [7U]);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0U] 
                = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U]);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1U] 
                = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[0U] 
                   >> 0x10U);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2U] 
                = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U]);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3U] 
                = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[1U] 
                   >> 0x10U);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4U] 
                = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U]);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5U] 
                = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[2U] 
                   >> 0x10U);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6U] 
                = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U]);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7U] 
                = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
                   >> 0x10U);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7U] 
                = (0xffffU & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
                               << 0x10U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__sys_data_bus_out[3U] 
                                            >> 0x10U)));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7U] = 0U;
        }
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] = 0U;
        if ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__vpu_mode))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [7U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_out
                [7U];
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7U] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in
                [7U];
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6U] = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7U] = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_start_final 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_rd_en) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_is_start));
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_rd_en) 
           & ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count) 
              & (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_op_tpu))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_valid_in[1U] 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_valid) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_valid_in_1));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_valid) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_data;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_addr;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_addr;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_data;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_data_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_data_in_1;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_host_addr_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_addr_in_1;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_addr_in_1;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_data_in_1;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in[1U] 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_valid) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_valid_in_1));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0xfeU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[0U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[0U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0xfdU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[1U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[1U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0xfbU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[2U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[2U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0xf7U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[3U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[3U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0xefU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[4U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[4U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0xdfU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[5U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[5U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0xbfU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[6U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[6U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
        = (0x7fU & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[7U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[7U] = 0U;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_addr_start_in)
            ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_addr_in)
            : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [7U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [7U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [7U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [7U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [7U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [7U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [7U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [7U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [7U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [7U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [6U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [6U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [6U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [6U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [6U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [6U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [6U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [6U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [6U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [6U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [5U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [5U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [5U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [5U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [5U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [5U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [5U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [5U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [5U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [5U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [4U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [4U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [4U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [4U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [4U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [4U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [4U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [4U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [4U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [4U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [3U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [3U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [3U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [3U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [3U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [3U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [3U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [3U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [3U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [3U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [2U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [2U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [2U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [2U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [2U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [2U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [2U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [2U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [2U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [2U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [1U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [1U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [1U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [1U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [1U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [1U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [1U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [1U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [1U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in
        [0U]) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in
            [0U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__1__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__3__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__2__Vfuncout;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__4__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next)));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_valid_in
               [0U]) {
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [0U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [0U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [0U];
        if ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
             [0U] >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next))) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next 
                = (0xffffU & ((IData)(1U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
                              [0U]));
        }
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__addr);
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout 
            = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__addr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__5__Vfuncout))));
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_addr_in
            [0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__8__Vfuncout] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_host_data_in
            [0U];
        vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout 
            = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__addr 
                        >> 3U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__7__Vfuncout] 
            = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__6__Vfuncout;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_bias_or_weight) {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [7U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [7U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [6U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [6U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [5U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [5U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [4U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [4U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [3U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [3U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [2U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [2U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [1U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [1U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [0U]) {
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__9__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__11__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__10__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__12__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [0U];
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next)));
        }
    } else {
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [7U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = (0xffffU & ((IData)(7U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr)));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [7U];
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [6U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = (0xffffU & ((IData)(6U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr)));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [6U];
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [5U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = (0xffffU & ((IData)(5U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr)));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [5U];
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [4U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = (0xffffU & ((IData)(4U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr)));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [4U];
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [3U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = (0xffffU & ((IData)(3U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr)));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [3U];
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [2U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = (0xffffU & ((IData)(2U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr)));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [2U];
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [1U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr)));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [1U];
        }
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_done_out
            [0U]) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we 
                = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                   | (0xffU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__13__Vfuncout))));
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__addr);
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout 
                = (0x7fU & (vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__addr 
                            >> 3U));
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__15__Vfuncout] 
                = vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_row__14__Vfuncout;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp;
            vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout 
                = (7U & vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__addr);
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[vlSelf->__Vfunc_sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_bank__16__Vfuncout] 
                = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_updated_out
                [0U];
        }
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__10(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__rsp_data_comb = 0U;
    if (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd) 
         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__status_cmd) 
            | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd)))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__rsp_data_comb 
            = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_code_reg) 
                << 0x10U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_count_reg) 
                              << 8U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_overflow_reg) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_full_reg) 
                                                    << 3U) 
                                                   | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_reg) 
                                                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_sync_cpu) 
                                                           >> 1U)) 
                                                       << 2U) 
                                                      | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__done_reg) 
                                                           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_sync_cpu) 
                                                              >> 1U)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__busy_reg) 
                                                            | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_sync_cpu) 
                                                               >> 1U))))))));
    } else if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_cmd) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__rsp_data_comb 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_pair_valid)
                ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_buffer
                    [(1U | (0x3eU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                     << 1U)))] << 0x10U) 
                   | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_buffer
                   [(0x3eU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                              << 1U))]) : 0U);
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__rsp_data_comb
            : ((4U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                    << 0x1eU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                 >> 2U)) : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[0U] 
        = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[1U] 
        = (IData)(((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data)) 
                     << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data))) 
                   >> 0x20U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[2U] 
        = (1U & (IData)(((0U != (0xc000400U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_div_enable))));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__11(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_wr_en 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd) 
            & VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)) 
           & VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__15(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__15\n"); );
    // Init
    CData/*0:0*/ sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT____VdfgTmp_h09c82493__0;
    sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT____VdfgTmp_h09c82493__0 = 0;
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_ready_go 
        = (1U & (((~ ((0xffU != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__count)) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_div_enable))) 
                  & ((~ ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
                             & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd)) 
                                | VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)))) 
                         & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req))) 
                     & ((~ (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                              >> 0x1eU) & (IData)((
                                                   (0x20088000U 
                                                    == 
                                                    (0x3fff8000U 
                                                     & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[3U])) 
                                                   & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_valid)))) 
                            | ((1U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en)))) 
                        & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__access_mem) 
                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__dcacop_inst) 
                                  | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__preld_inst)))) 
                           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__dcache_req_or_inst_en) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_addr_ok)))))) 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_ready_go));
    sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT____VdfgTmp_h09c82493__0 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_ready_go) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ms_allowin));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_fetch 
        = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_valid) 
             | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__dcacop_inst) 
                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__preld_en))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_addr_ok)) 
           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__icacop_inst) 
               | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                  >> 0x1eU)) & (IData)(sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT____VdfgTmp_h09c82493__0)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_allowin 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid)) 
                 | (IData)(sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT____VdfgTmp_h09c82493__0)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__17(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->sim_top__DOT__base_ram_data = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hd0f82218__0)
                                              ? 0xffffffffU
                                              : 0U) 
                                            & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hd0f82218__0)
                                                 ? 0xffffffffU
                                                 : 0U) 
                                               & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hd0f82218__0)
                                                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg
                                                    : 0U) 
                                                  & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hd0f82218__0)
                                                      ? 0xffffffffU
                                                      : 0U)))) 
                                           | ((((IData)(vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_hf7796532__0)
                                                 ? 
                                                vlSelf->sim_top__DOT__u_base_sram__DOT__mem
                                                [(0xfffffU 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                                     >> 2U))]
                                                 : 0U) 
                                               & ((IData)(vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_hf7796532__0)
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                              & ((IData)(vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_hf7796532__0)
                                                  ? 0xffffffffU
                                                  : 0U)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__18(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->sim_top__DOT__ext_ram_data = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hb164851c__0)
                                             ? 0xffffffffU
                                             : 0U) 
                                           & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hb164851c__0)
                                                ? 0xffffffffU
                                                : 0U) 
                                              & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hb164851c__0)
                                                   ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg
                                                   : 0U) 
                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT____VdfgTmp_hb164851c__0)
                                                     ? 0xffffffffU
                                                     : 0U)))) 
                                          | ((((IData)(vlSelf->sim_top__DOT__u_ext_sram__DOT____VdfgTmp_hf7796532__0)
                                                ? vlSelf->sim_top__DOT__u_ext_sram__DOT__mem
                                               [(0xfffffU 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                                    >> 2U))]
                                                : 0U) 
                                              & ((IData)(vlSelf->sim_top__DOT__u_ext_sram__DOT____VdfgTmp_hf7796532__0)
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                             & ((IData)(vlSelf->sim_top__DOT__u_ext_sram__DOT____VdfgTmp_hf7796532__0)
                                                 ? 0xffffffffU
                                                 : 0U)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__19(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [0U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [0U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [1U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [1U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [2U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [2U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [3U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [3U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [4U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [4U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [5U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [5U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [6U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [6U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                     [7U]) + VL_EXTENDS_II(17,16, 
                                                           vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                           [7U])));
    if (VL_LTS_III(17, 0x7fffU, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result = 0x7fffU;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else if (VL_GTS_III(17, 0x18000U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full)) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result = 0x8000U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow = 1U;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result 
            = (0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow = 0U;
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__20(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__20\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h4faad97f__0;
    VlWide<5>/*159:0*/ __Vtemp_h9e2fc5f2__0;
    VlWide<5>/*159:0*/ __Vtemp_hd40ef13e__0;
    VlWide<7>/*223:0*/ __Vtemp_h8b7dce90__0;
    VlWide<7>/*223:0*/ __Vtemp_h7efa0409__0;
    VlWide<11>/*351:0*/ __Vtemp_h28aa6902__0;
    VlWide<11>/*351:0*/ __Vtemp_he046ed0c__0;
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[0U] 
        = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[1U] 
        = (IData)(((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data)) 
                     << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))) 
                   >> 0x20U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[2U] 
        = ((((0x40000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
              ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                 | ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                    & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                        << 0x1eU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                     >> 2U)))) : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
            << 0xfU) | ((0x4000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                    << 0xdU)) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp) 
                                                  << 0xdU) 
                                                 | ((0x1f80U 
                                                     & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                        >> 0x13U)) 
                                                    | ((0x40U 
                                                        & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                           >> 4U)) 
                                                       | ((0x20U 
                                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                              >> 1U)) 
                                                          | (0x1fU 
                                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[3U] 
        = ((0xc0000000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                           << 0xbU)) | ((0x3fff8000U 
                                         & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            << 0xcU)) 
                                        | (((0x40000U 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                                             ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                | ((~ 
                                                    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                                   & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                       << 0x1eU) 
                                                      | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                         >> 2U))))
                                             : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                           >> 0x11U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[4U] 
        = ((0xf8000000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                           << 0xeU)) | ((0x7fe0000U 
                                         & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                            << 0x11U)) 
                                        | ((0x1f800U 
                                            & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                << 0xdU) 
                                               | (0x1800U 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                     >> 0x13U)))) 
                                           | ((0x400U 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                  << 5U)) 
                                              | ((0x300U 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                     >> 0x14U)) 
                                                 | (0x3fffffffU 
                                                    & ((0x3fffff80U 
                                                        & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp_ale) 
                                                           << 7U)) 
                                                       | (0x7fU 
                                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                             >> 0x15U)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[5U] 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
            << 0x17U) | ((0x400000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       << 0xbU)) | 
                         ((0x200000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                        << 0x10U)) 
                          | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__preld_inst) 
                              << 0x14U) | ((0xf0000U 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                               << 9U)) 
                                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en) 
                                               << 0xfU) 
                                              | ((0x4000U 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                     << 0xaU)) 
                                                 | (0x7ffffffU 
                                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                       >> 0x12U)))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[6U] 
        = ((0xff800000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                           << 0xbU)) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va 
                                        >> 9U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[7U] 
        = (((0x7ff800U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                          << 0xbU)) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 0x15U)) | 
           (0xff800000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                           << 0xbU)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[8U] 
        = (((0x7ff800U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
                          << 0xbU)) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                                       >> 0x15U)) | 
           (0xff800000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
                           << 0xbU)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[9U] 
        = (((0x7ff800U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                          << 0xbU)) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
                                       >> 0x15U)) | 
           (0xff800000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                           << 0xbU)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[0xaU] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[0xbU] 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wdata 
            << 8U) | (0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                               >> 0x15U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[0xcU] 
        = ((0xfffffe00U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                           << 7U)) | ((0x100U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                 >> 0x15U)) 
                                      | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wdata 
                                         >> 0x18U)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus[0xdU] 
        = (0x1ffU & ((0x180U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                << 7U)) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                           >> 0x19U)));
    if ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_raddr2) 
          == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_enable) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rkd)))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[2U];
    } else if ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_raddr2) 
                 == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_enable) 
                   & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rkd)))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data)) 
                        << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2))));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data)) 
                         << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2))) 
                       >> 0x20U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2)) 
                        << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2))));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2)) 
                         << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata2))) 
                       >> 0x20U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[2U] = 0U;
    }
    if ((((0x1fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                    >> 5U)) == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
         & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_enable) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rj)))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[0U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[1U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[1U];
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_ha01d14c2__0[2U];
    } else if ((((0x1fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                           >> 5U)) == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])) 
                & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_enable) 
                   & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_need_rj)))) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data)) 
                        << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1))));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data)) 
                         << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1))) 
                       >> 0x20U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[2U] 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h0663ec88__0;
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
            = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1)) 
                        << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1))));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[1U] 
            = (IData)(((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1)) 
                         << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rf_rdata1))) 
                       >> 0x20U));
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[2U] = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr 
        = (0x3fffU & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_cpucfg)
                       ? ((IData)(0xb0U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[1U])
                       : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                           << 0x16U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0xaU))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_ready_go 
        = (1U & ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[2U] 
                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[2U] 
                        | (((((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                               >> 0x1eU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 2U)) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_valid)) 
                            | (((IData)((0U != (0x8800U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[4U]))) 
                                & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_valid)) 
                               | ((IData)((0U != (0x80200U 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U]))) 
                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ws_valid)))) 
                           | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar) 
                               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_dbar)) 
                              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__pipeline_no_empty)))))) 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_target 
        = (((- (IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h19962199__0) 
                        | ((0x15U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0x1aU)) | 
                           ((0x14U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       >> 0x1aU)) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h38353e9a__0)))))) 
            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
               + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_imm)) 
           | ((- (IData)((0x13U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                    >> 0x1aU)))) & 
              (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
               + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_imm)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_eq_rd 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
           == vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_unsign 
        = (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
           < vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U]);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_data 
        = (((- (IData)((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_crmd) 
           | (((- (IData)((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_prmd) 
              | (((- (IData)((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ectl) 
                 | (((- (IData)((5U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                     & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_estat) 
                    | (((- (IData)((6U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_era) 
                       | (((- (IData)((7U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv) 
                          | (((- (IData)((0xcU == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_eentry) 
                             | (((- (IData)((0x10U 
                                             == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbidx) 
                                | (((- (IData)((0x11U 
                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbehi) 
                                   | (((- (IData)((0x12U 
                                                   == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbelo0) 
                                      | (((- (IData)(
                                                     (0x13U 
                                                      == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                          & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbelo1) 
                                         | (((- (IData)(
                                                        (0x18U 
                                                         == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_asid) 
                                            | (((- (IData)(
                                                           (0x19U 
                                                            == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl) 
                                               | (((- (IData)(
                                                              (0x1aU 
                                                               == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh) 
                                                  | (((- (IData)(
                                                                 (0x1bU 
                                                                  == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                      & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_badv 
                                                          >> 0x1fU)
                                                          ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdh
                                                          : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_pgdl)) 
                                                     | (((- (IData)(
                                                                    (0x20U 
                                                                     == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpuid) 
                                                        | (((- (IData)(
                                                                       (0x30U 
                                                                        == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save0) 
                                                           | (((- (IData)(
                                                                          (0x31U 
                                                                           == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save1) 
                                                              | (((- (IData)(
                                                                             (0x32U 
                                                                              == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save2) 
                                                                 | (((- (IData)(
                                                                                (0x33U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                     & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_save3) 
                                                                    | (((- (IData)(
                                                                                (0x40U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid) 
                                                                       | (((- (IData)(
                                                                                (0x41U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tcfg) 
                                                                          | (((- (IData)(
                                                                                (0x43U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cntc) 
                                                                             | (((- (IData)(
                                                                                (0x44U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_ticlr) 
                                                                                | (((- (IData)(
                                                                                (0x60U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & ((0xfffffffeU 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_llbctl) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit))) 
                                                                                | (((- (IData)(
                                                                                (0x42U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tval) 
                                                                                | (((- (IData)(
                                                                                (0x88U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbrentry) 
                                                                                | (((- (IData)(
                                                                                (0x180U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw0) 
                                                                                | (((- (IData)(
                                                                                (0x181U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_dmw1) 
                                                                                | (((- (IData)(
                                                                                (0xb1U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg1) 
                                                                                | (((- (IData)(
                                                                                (0xb2U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg2) 
                                                                                | (((- (IData)(
                                                                                (0xc0U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg10) 
                                                                                | (((- (IData)(
                                                                                (0xc1U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg11) 
                                                                                | (((- (IData)(
                                                                                (0xc2U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg12) 
                                                                                | ((- (IData)(
                                                                                (0xc3U 
                                                                                == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr)))) 
                                                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_cpucfg13)))))))))))))))))))))))))))))))))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_valid) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_ready_go));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_sign 
        = (1U & (((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U] 
                      >> 0x1fU)) & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
                                    >> 0x1fU)) | ((~ 
                                                   ((~ 
                                                     (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U] 
                                                      >> 0x1fU)) 
                                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U] 
                                                       >> 0x1fU))) 
                                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_unsign))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_orien 
        = ((((0x16U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x1aU)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_eq_rd)) 
            | (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_eq_rd)) 
                & (0x17U == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                             >> 0x1aU))) | (((0x18U 
                                              == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                  >> 0x1aU)) 
                                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_sign)) 
                                            | (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_sign)) 
                                                & (0x19U 
                                                   == 
                                                   (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU))) 
                                               | (((0x1aU 
                                                    == 
                                                    (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0x1aU)) 
                                                   & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_unsign)) 
                                                  | (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_unsign)) 
                                                      & (0x1bU 
                                                         == 
                                                         (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0x1aU))) 
                                                     | ((0x13U 
                                                         == 
                                                         (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                          >> 0x1aU)) 
                                                        | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1c4a3e54__0)))))))) 
           & ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 4U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_valid)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush_target 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_orien)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_target
            : ((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[0U]));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_add_entry 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_to_btb) 
           & ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 6U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_orien)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_target_error 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hfea85cf8__0) 
           & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
               >> 7U) & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_orien) 
                         & (((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                              << 0x13U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           >> 0xdU)) 
                            != vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_target))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hfa07d607__0 
        = (1U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 7U) ^ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_orien)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_pre_error 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hfea85cf8__0) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hfa07d607__0));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_add_entry) 
            | (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_to_btb)) 
                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                   >> 6U)) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_pre_error) 
                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_target_error)))) 
           & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_valid) 
              & ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                     >> 4U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_ready_go))));
    __Vtemp_h4faad97f__0[4U] = ((0x40U & (((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b)) 
                                           & (~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                                    | ((0x16U 
                                                        == 
                                                        (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 0x1aU)) 
                                                       | ((0x17U 
                                                           == 
                                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                            >> 0x1aU)) 
                                                          | ((0x18U 
                                                              == 
                                                              (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                               >> 0x1aU)) 
                                                             | ((0x19U 
                                                                 == 
                                                                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                  >> 0x1aU)) 
                                                                | ((0x1aU 
                                                                    == 
                                                                    (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                     >> 0x1aU)) 
                                                                   | ((0x1bU 
                                                                       == 
                                                                       (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                        >> 0x1aU)) 
                                                                      | ((0x14U 
                                                                          == 
                                                                          (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                           >> 0x1aU)) 
                                                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_syscall) 
                                                                            | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbsrch) 
                                                                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid_cacop) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_preld) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_dbar) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_nop)))))))))))))))))))))) 
                                          << 6U)) | 
                                ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                                   | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                      | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                         | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w) 
                                            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit))))) 
                                  << 5U) | ((0x15U 
                                             == (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0x1aU))
                                             ? 1U : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h416d0694__0))));
    __Vtemp_h9e2fc5f2__0[4U] = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__mem_sign_exted) 
                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                     | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w))))) 
                                 << 0xaU) | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__src2_is_4) 
                                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddi) 
                                                  | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddu12i))) 
                                              << 9U) 
                                             | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__need_ui5) 
                                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_addi_w) 
                                                     | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slti) 
                                                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sltui) 
                                                           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_andi) 
                                                              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ori) 
                                                                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xori) 
                                                                    | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddi) 
                                                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddu12i) 
                                                                          | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b) 
                                                                             | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_lu12i_w) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1d0e0636__0))))))))))))))))))))) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__src2_is_4) 
                                                    << 7U) 
                                                   | __Vtemp_h4faad97f__0[4U]))));
    __Vtemp_hd40ef13e__0[4U] = ((0xfffff800U & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hb469ad25__0) 
                                                  & (0x60000U 
                                                     == 
                                                     (0xf8000U 
                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                                                 << 0x18U) 
                                                | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hb469ad25__0) 
                                                     & (0x68000U 
                                                        == 
                                                        (0xf8000U 
                                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                                                    << 0x17U) 
                                                   | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_lu12i_w) 
                                                       << 0x16U) 
                                                      | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sra_w) 
                                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srai_w)) 
                                                          << 0x15U) 
                                                         | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srl_w) 
                                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_srli_w)) 
                                                             << 0x14U) 
                                                            | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sll_w) 
                                                                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slli_w)) 
                                                                << 0x13U) 
                                                               | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xor) 
                                                                    | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_xori)) 
                                                                   << 0x12U) 
                                                                  | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_or) 
                                                                       | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ori)) 
                                                                      << 0x11U) 
                                                                     | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_nor) 
                                                                         << 0x10U) 
                                                                        | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_and) 
                                                                             | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_andi)) 
                                                                            << 0xfU) 
                                                                           | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sltu) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sltui)) 
                                                                               << 0xeU) 
                                                                              | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slt) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_slti)) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sub_w) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_add_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_addi_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w) 
                                                                                | ((0x13U 
                                                                                == 
                                                                                (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x15U 
                                                                                == 
                                                                                (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0x1aU)) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddi) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_pcaddu12i) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1d0e0636__0))))))))))))))))) 
                                                                                << 0xbU))))))))))))))) 
                                | __Vtemp_h9e2fc5f2__0[4U]);
    __Vtemp_h8b7dce90__0[5U] = ((((1U & (IData)((((
                                                   (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                   >> 0x20U) 
                                                  & (1ULL 
                                                     | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                                        >> 0x20U))) 
                                                 | ((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                      >> 0x20U) 
                                                     & (1ULL 
                                                        | ((QData)((IData)(
                                                                           (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                                            >> 0x20U))) 
                                                           >> 0x20U))) 
                                                    | (((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))) 
                                                        >> 0x20U) 
                                                       & (1ULL 
                                                          | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)) 
                                                             >> 0x20U)))))))
                                   ? (((IData)((0x1ffffffffULL 
                                                & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                      | (((IData)((0x1ffffffffULL 
                                                   & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                          & (IData)(
                                                    (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                     >> 0x20U))) 
                                         | ((IData)(
                                                    (0x1ffffffffULL 
                                                     & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))))) 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)))
                                   : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w)
                                       ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit)
                                       : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_data)) 
                                 << 2U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ertn) 
                                            << 1U) 
                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp)));
    __Vtemp_h8b7dce90__0[6U] = (((1U & (IData)(((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                  >> 0x20U) 
                                                 & (1ULL 
                                                    | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                                       >> 0x20U))) 
                                                | ((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                     >> 0x20U) 
                                                    & (1ULL 
                                                       | ((QData)((IData)(
                                                                          (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                                           >> 0x20U))) 
                                                          >> 0x20U))) 
                                                   | (((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))) 
                                                       >> 0x20U) 
                                                      & (1ULL 
                                                         | ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)) 
                                                            >> 0x20U)))))))
                                  ? (((IData)((0x1ffffffffULL 
                                               & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64)) 
                                     | (((IData)((0x1ffffffffULL 
                                                  & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                         & (IData)(
                                                   (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                    >> 0x20U))) 
                                        | ((IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))))) 
                                           & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)))
                                  : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w)
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_data)) 
                                >> 0x1eU);
    __Vtemp_h7efa0409__0[6U] = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                                 << 0x1cU) | ((0xfff80000U 
                                               & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__excp_ipe) 
                                                   << 0x1bU) 
                                                  | ((0x4000000U 
                                                      & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid)) 
                                                         << 0x1aU)) 
                                                     | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_break) 
                                                         << 0x19U) 
                                                        | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_syscall) 
                                                            << 0x18U) 
                                                           | ((0xf00000U 
                                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                  << 0x14U)) 
                                                              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__has_int) 
                                                                 << 0x13U))))))) 
                                              | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__csr_mask) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__csr_we) 
                                                     << 0x11U) 
                                                    | ((0x1fff8U 
                                                        & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                           >> 7U)) 
                                                       | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
                                                            | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj) 
                                                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w) 
                                                                  | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w) 
                                                                     | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w) 
                                                                        | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_cpucfg)))))) 
                                                           << 2U) 
                                                          | __Vtemp_h8b7dce90__0[6U]))))));
    __Vtemp_h28aa6902__0[7U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                 << 0xcU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_idle) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_to_btb) 
                                                    << 9U) 
                                                   | ((0x100U 
                                                       & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                          << 3U)) 
                                                      | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__br_need_reg_data) 
                                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h1c4a3e54__0)) 
                                                          << 7U) 
                                                         | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_preld) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_valid_cacop) 
                                                                << 5U) 
                                                               | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__mem_sign_exted) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                                                         << 2U) 
                                                                        | (((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
                                                                              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbrd) 
                                                                                | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_invtlb) 
                                                                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ibar))))) 
                                                                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_valid)) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbfill)))))))))))));
    __Vtemp_he046ed0c__0[0xaU] = ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6983a416__0) 
                                    & (0x1400U == (0xfffc00U 
                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]))) 
                                   << 0x1dU) | ((0xffe00000U 
                                                 & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit) 
                                                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w)) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_w) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h) 
                                                           << 0x16U) 
                                                          | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b) 
                                                             << 0x15U))))) 
                                                | ((0xffffe000U 
                                                    & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ll_w) 
                                                        << 0x12U) 
                                                       | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_w) 
                                                           << 0x11U) 
                                                          | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                                              << 0x10U) 
                                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                                                                 << 0xfU) 
                                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                                                    << 0xeU) 
                                                                   | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b) 
                                                                      << 0xdU))))))) 
                                                   | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w) 
                                                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvh_w) 
                                                           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))) 
                                                       << 0xcU) 
                                                      | ((IData)(
                                                                 (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                                  >> 0x20U)) 
                                                         >> 0x14U)))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[0U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[1U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[1U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[2U] 
        = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_imm)) 
                    << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[1U]))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[3U] 
        = (IData)(((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_imm)) 
                     << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[1U]))) 
                   >> 0x20U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[4U] 
        = ((0xc0000000U & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_h) 
                             | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_hu) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_h))) 
                            << 0x1fU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_b) 
                                          | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_ld_bu) 
                                             | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_st_b))) 
                                         << 0x1eU))) 
           | ((0xfc000000U & ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mod_w) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mod_wu)) 
                               << 0x1dU) | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_div_w) 
                                              | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_div_wu)) 
                                             << 0x1cU) 
                                            | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mulh_w) 
                                                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mulh_wu)) 
                                                << 0x1bU) 
                                               | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mul_w) 
                                                  << 0x1aU))))) 
              | ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mul_w) 
                   | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mulh_w) 
                      | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_div_w) 
                         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_mod_w)))) 
                  << 0x19U) | __Vtemp_hd40ef13e__0[4U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[5U] 
        = __Vtemp_h8b7dce90__0[5U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[6U] 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbwr) 
            << 0x1fU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_tlbsrch) 
                          << 0x1eU) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w) 
                                        << 0x1dU) | 
                                       __Vtemp_h7efa0409__0[6U])));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[7U] 
        = __Vtemp_h28aa6902__0[7U];
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[8U] 
        = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
            >> 0x14U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64) 
                         << 0xcU));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[9U] 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64) 
            >> 0x14U) | ((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                  >> 0x20U)) << 0xcU));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0xaU] 
        = ((0x80000000U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                           << 9U)) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__lacc_req) 
                                       << 0x1eU) | 
                                      __Vtemp_he046ed0c__0[0xaU]));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus[0xbU] 
        = (1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                 >> 0x17U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_buffer
            : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_flush)
                ? (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))) 
                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tlbrentry) 
                   | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__excp_tlbrefill))))) 
                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_eentry))
                : ((IData)(vlSelf->__VdfgTmp_h9ffef122__0)
                    ? (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ertn_flush))) 
                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_era) 
                       | ((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_h52ebff71__0))) 
                          & ((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])))
                    : ((4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state))
                        ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_buffer
                        : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush) 
                            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_valid))
                            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush_target
                            : ((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_en) 
                                 & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_taken)) 
                                | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT____VdfgTmp_ha3d303c7__0))
                                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_ret_pc_t
                                : ((IData)(4U) + vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_pc)))))));
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_offset 
            = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index 
            = (0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
                        >> 4U));
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_offset 
            = (0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index 
            = (0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc 
                        >> 4U));
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__pfs_excp_adef 
        = (IData)((0U != (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__addra 
        = (((- (IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok) 
                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en) 
                           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h00af7739__0))))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)(((8U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)) 
                          | (0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_addra[0U] 
        = (((- (IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok) 
                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en) 
                           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h00af7739__0))))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)(((8U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)) 
                          | (0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_addra[1U] 
        = (((- (IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok) 
                        | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en) 
                           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____VdfgTmp_h00af7739__0))))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)(((8U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)) 
                          | (0x10U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[0U][0U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[0U][1U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[0U][2U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[0U][3U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[1U][0U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[1U][1U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[1U][2U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra[1U][3U] 
        = (((- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))) 
            & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok))))) 
              & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__request_buffer_index)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__36(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__36\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_vsync_r 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_vsync_r;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_href_r 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_href_r;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_de_r 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_de_r;
    if (vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_R 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_vsync_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_B 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_vsync_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_G 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_vsync_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_R 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_href_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_B 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_href_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_G 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_href_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_R 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_de_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_B 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_de_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_G 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_de_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_vs 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_vsync_r) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_R 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_vsync_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_B 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_vsync_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_G 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_vsync_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_hs 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_href_r) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_R 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_href_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_B 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_href_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_G 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_href_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_de 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_de_r) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_R 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_de_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_B 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_de_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_G 
            = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_de_r1) 
               >> 3U);
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_vsync 
            = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__frame_active_r;
        if (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__fifo_rd_en) {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_href = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_de = 1U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_data 
                = ((0x4000U >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__read_pointer))
                    ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__mem
                   [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__read_pointer]
                    : 0U);
        } else {
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_href = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_de = 0U;
            vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_data = 0U;
        }
    } else {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_R = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_B = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_G = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_R = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_B = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_G = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_R = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_B = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_G = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_vs = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_R = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_B = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_G = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_hs = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_R = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_B = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_G = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_de = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_R = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_B = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_G = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_vsync = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_href = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_de = 0U;
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_data = 0U;
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_vsync_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_vsync_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_vsync_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_vsync_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_vsync_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_vsync_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_href_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_href_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_href_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_href_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_href_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_href_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_de_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_de_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_de_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_de_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_de_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_de_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_vsync_r 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_vsync_r;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_vsync_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_vsync_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_vsync_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_vsync_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_vsync_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_vsync_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_href_r 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_href_r;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_href_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_href_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_href_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_href_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_href_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_href_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_de_r 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_de_r;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_de_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_de_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_de_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_de_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_de_r1 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_de_r1;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__frame_active_r 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__frame_active_r;
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__25(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__25\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__26(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__26\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo4_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (3U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__vcnt))) 
           | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__extend_2nd_last_row_en) 
              | (0x794U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__extend_last_two_row_cnt))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo1_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__vcnt))) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__extend_2nd_last_row_en));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_wenb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__vcnt))) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__extend_2nd_last_row_en));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo4_wenb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (2U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__vcnt))) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__extend_2nd_last_row_en));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo2_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_wenb) 
           | (0x794U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__extend_last_two_row_cnt)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_renb 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo4_wenb) 
           | (0x794U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__extend_last_two_row_cnt)));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__27(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__27\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_habf03dd6__0;
    VlWide<9>/*287:0*/ __Vtemp_h5f093b83__0;
    VlWide<9>/*287:0*/ __Vtemp_habf03dd6__1;
    VlWide<9>/*287:0*/ __Vtemp_ha96807bb__0;
    VlWide<9>/*287:0*/ __Vtemp_habf03dd6__2;
    VlWide<9>/*287:0*/ __Vtemp_h8a160191__0;
    // Body
    if ((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
        if ((4U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
            if ((1U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_q))) {
                vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rdata 
                    = ((0x400000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr)
                        ? vlSelf->sim_top__DOT__ext_ram_data
                        : vlSelf->sim_top__DOT__base_ram_data);
            }
        }
    }
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[0U] 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rvalid)
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rdata
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[1U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__s_rdata_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[2U] 
        = ((0U == (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
            ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
            : ((1U == (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                   << 8U) : ((2U == (3U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                              ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                 << 0x10U) : ((3U == 
                                               (3U 
                                                & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                               ? (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                  << 0x18U)
                                               : 0U))));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[3U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__s3_axi_rdata;
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[4U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__s4_axi_rdata;
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[5U] 
        = vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s7__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rdata_reg;
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[6U] 
        = (IData)(((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rdata_reg)) 
                   << 0x20U));
    vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[7U] 
        = (IData)((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_rd_inst__DOT__s_axi_rdata_reg)) 
                    << 0x20U) >> 0x20U));
    __Vtemp_habf03dd6__0[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[0U];
    __Vtemp_habf03dd6__0[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[1U];
    __Vtemp_habf03dd6__0[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[2U];
    __Vtemp_habf03dd6__0[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[3U];
    __Vtemp_habf03dd6__0[4U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[4U];
    __Vtemp_habf03dd6__0[5U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[5U];
    __Vtemp_habf03dd6__0[6U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[6U];
    __Vtemp_habf03dd6__0[7U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[7U];
    __Vtemp_habf03dd6__0[8U] = 0U;
    VL_SHIFTR_WWI(288,288,32, __Vtemp_h5f093b83__0, __Vtemp_habf03dd6__0, 
                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                   << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rdata_mux 
        = __Vtemp_h5f093b83__0[0U];
    __Vtemp_habf03dd6__1[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[0U];
    __Vtemp_habf03dd6__1[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[1U];
    __Vtemp_habf03dd6__1[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[2U];
    __Vtemp_habf03dd6__1[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[3U];
    __Vtemp_habf03dd6__1[4U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[4U];
    __Vtemp_habf03dd6__1[5U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[5U];
    __Vtemp_habf03dd6__1[6U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[6U];
    __Vtemp_habf03dd6__1[7U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[7U];
    __Vtemp_habf03dd6__1[8U] = 0U;
    VL_SHIFTR_WWI(288,288,32, __Vtemp_ha96807bb__0, __Vtemp_habf03dd6__1, 
                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                   << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rdata_mux 
        = __Vtemp_ha96807bb__0[0U];
    __Vtemp_habf03dd6__2[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[0U];
    __Vtemp_habf03dd6__2[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[1U];
    __Vtemp_habf03dd6__2[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[2U];
    __Vtemp_habf03dd6__2[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[3U];
    __Vtemp_habf03dd6__2[4U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[4U];
    __Vtemp_habf03dd6__2[5U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[5U];
    __Vtemp_habf03dd6__2[6U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[6U];
    __Vtemp_habf03dd6__2[7U] = vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata[7U];
    __Vtemp_habf03dd6__2[8U] = 0U;
    VL_SHIFTR_WWI(288,288,32, __Vtemp_h8a160191__0, __Vtemp_habf03dd6__2, 
                  ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_reg) 
                   << 5U));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rdata_mux 
        = __Vtemp_h8a160191__0[0U];
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__28(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__28\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_allowin 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_valid)) 
                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_ready_go) 
                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_allowin))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_operate_en 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_valid) 
           & ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 4U)) & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_allowin)));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_allowin 
        = (1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_valid)) 
                 | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_ready_go) 
                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_allowin))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_valid 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__idle_flush) 
               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__idle_lock))) 
           & (((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__pfs_excp_adef) 
                   | ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_req_state) 
                          | (4U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__br_target_inst_req_state)))) 
                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_tlb_excp_cancel_req)))) 
               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_allowin)) 
              | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_sign) 
                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush))));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_en 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_valid) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__req_or_inst_valid 
        = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en) 
           | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_valid));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__pfs_ready_go 
        = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_valid) 
            | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__pfs_excp_adef)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__to_fs_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__reset)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__pfs_ready_go));
}

extern const VlUnpacked<CData/*7:0*/, 256> Vsim_top__ConstPool__TABLE_h54b4e386_0;

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__29(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__29\n"); );
    // Init
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__per_img_gray 
        = ((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_de_r))
            ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__img_Y_r1)
            : 0U);
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__fifo_rd_en 
        = ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__fifo_empty) 
               | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__line_gap_r))) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__frame_active_r));
    __Vtableidx18 = vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__per_img_gray;
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__post_img_gray 
        = Vsim_top__ConstPool__TABLE_h54b4e386_0[__Vtableidx18];
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__37(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__37\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__mem__v0) {
        vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__mem[vlSelf->__Vdlyvdim0__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vsim_top___024root___nba_sequent__TOP__38(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn 
        = (1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_sys__DOT__delay) 
                 >> 1U));
}

VL_INLINE_OPT void Vsim_top___024root___nba_comb__TOP__30(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_comb__TOP__30\n"); );
    // Body
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo4_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo4_wenb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo2_renb));
    vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_renb));
}

void Vsim_top___024root___eval_triggers__act(Vsim_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(Vsim_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim_top___024root___timing_resume(Vsim_top___024root* vlSelf);
void Vsim_top___024root___eval_act(Vsim_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__nba(Vsim_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim_top___024root___eval_nba(Vsim_top___024root* vlSelf);

void Vsim_top___024root___eval(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval\n"); );
    // Init
    VlTriggerVec<119> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsim_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsim_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("sim_top.v", 202, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vsim_top___024root___timing_resume(vlSelf);
                Vsim_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsim_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("sim_top.v", 202, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsim_top___024root___eval_nba(vlSelf);
        }
    }
}

void Vsim_top___024root___timing_resume(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0x76U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vsim_top___024root___eval_debug_assertions(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
