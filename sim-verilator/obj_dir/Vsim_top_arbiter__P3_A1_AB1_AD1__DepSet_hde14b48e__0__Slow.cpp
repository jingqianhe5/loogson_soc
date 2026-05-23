// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top__Syms.h"
#include "Vsim_top_arbiter__P3_A1_AB1_AD1.h"

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                               >> 2U)) << 1U)));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request))));
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded 
        = ((IData)(vlSelf->__PVT__mask_reg) & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | (0U != (3U & (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((2U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (1U & (~ (IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded))));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid
            [0U]) | ((IData)((0U != (3U & ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                                           >> 2U)))) 
                     << 1U));
    vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[0U] 
        = ((1U & vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc
            [0U]) | (2U & ((~ ((IData)(vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded) 
                               >> 2U)) << 1U)));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst__0\n"); );
    // Body
    vlSelf->__PVT__grant_valid_next = 0U;
    if (((IData)(vlSelf->__PVT__grant_valid_reg) & 
         (~ (IData)((0U != ((IData)(vlSelf->__PVT__grant_reg) 
                            & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_acknowledge))))))) {
        vlSelf->__PVT__grant_valid_next = vlSelf->__PVT__grant_valid_reg;
    } else if ((1U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                [1U])) {
        vlSelf->__PVT__grant_valid_next = 1U;
    }
}
