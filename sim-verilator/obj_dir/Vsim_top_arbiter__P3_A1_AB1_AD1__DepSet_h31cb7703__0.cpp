// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_arbiter__P3_A1_AB1_AD1.h"

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[1U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) ? (1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                     [0U]) : (2U | (1U & (vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
                                          [0U] >> 1U))));
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__1(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__1\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
                     [0U]));
}

VL_INLINE_OPT void Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__2(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___act_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__2\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[1U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) ? (1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                     [0U]) : (2U | (1U & (vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
                                          [0U] >> 1U))));
}
