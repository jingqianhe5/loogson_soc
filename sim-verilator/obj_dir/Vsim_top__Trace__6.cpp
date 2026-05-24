// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_sub_6(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 19153);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x29U])) {
        bufp->chgBit(oldp+0,((1U & (IData)((0xffffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))))));
        bufp->chgBit(oldp+1,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                              [0xcU])));
        bufp->chgBit(oldp+2,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                    [0xcU] >> 1U))));
        bufp->chgBit(oldp+3,((1U & (~ (IData)((0xffffffffff000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xcU)))))));
        bufp->chgBit(oldp+4,((((~ (IData)((0xffffffffff000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xcU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0xffffffffff000ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xcU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+5,((1U & (IData)((0x7fffffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))))));
        bufp->chgBit(oldp+6,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                              [0xdU])));
        bufp->chgBit(oldp+7,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                    [0xdU] >> 1U))));
        bufp->chgBit(oldp+8,((1U & (~ (IData)((0x7fffffffff800ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xbU)))))));
        bufp->chgBit(oldp+9,((((~ (IData)((0x7fffffffff800ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xbU)))) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                              | (((IData)((0x7fffffffff800ULL 
                                           & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0xbU))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                 | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                    | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+10,((1U & (IData)((0x3fffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
        bufp->chgBit(oldp+11,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
        bufp->chgBit(oldp+12,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
        bufp->chgBit(oldp+13,((1U & (~ (IData)((0x3fffffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
        bufp->chgBit(oldp+14,((((~ (IData)((0x3fffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+15,((1U & (IData)((0x1fffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
        bufp->chgBit(oldp+16,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
        bufp->chgBit(oldp+17,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
        bufp->chgBit(oldp+18,((1U & (~ (IData)((0x1fffffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
        bufp->chgBit(oldp+19,((((~ (IData)((0x1fffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+20,((1U & (IData)((0xffffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
        bufp->chgBit(oldp+21,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
        bufp->chgBit(oldp+22,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
        bufp->chgBit(oldp+23,((1U & (~ (IData)((0xffffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
        bufp->chgBit(oldp+24,((((~ (IData)((0xffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+25,((1U & (IData)((0x7fffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
        bufp->chgBit(oldp+26,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
        bufp->chgBit(oldp+27,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
        bufp->chgBit(oldp+28,((1U & (~ (IData)((0x7fffffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
        bufp->chgBit(oldp+29,((((~ (IData)((0x7fffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+30,((1U & (IData)((0x3fffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
        bufp->chgBit(oldp+31,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
        bufp->chgBit(oldp+32,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
        bufp->chgBit(oldp+33,((1U & (~ (IData)((0x3fffffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
        bufp->chgBit(oldp+34,((((~ (IData)((0x3fffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+35,((1U & (IData)((0x1fffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
        bufp->chgBit(oldp+36,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
        bufp->chgBit(oldp+37,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
        bufp->chgBit(oldp+38,((1U & (~ (IData)((0x1fffffffffe0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 5U)))))));
        bufp->chgBit(oldp+39,((((~ (IData)((0x1fffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+40,((1U & (IData)((0x7fffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))))));
        bufp->chgBit(oldp+41,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
        bufp->chgBit(oldp+42,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
        bufp->chgBit(oldp+43,((1U & (~ (IData)((0x7fffffffff800000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x17U)))))));
        bufp->chgBit(oldp+44,((((~ (IData)((0x7fffffffff800000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff800000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+45,((1U & (IData)((0xffffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
        bufp->chgBit(oldp+46,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
        bufp->chgBit(oldp+48,((1U & (~ (IData)((0xffffffffff0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 4U)))))));
        bufp->chgBit(oldp+49,((((~ (IData)((0xffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+50,((1U & (IData)((0x7fffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
        bufp->chgBit(oldp+51,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
        bufp->chgBit(oldp+52,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
        bufp->chgBit(oldp+53,((1U & (~ (IData)((0x7fffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
        bufp->chgBit(oldp+54,((((~ (IData)((0x7fffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+55,((1U & (IData)((0x3fffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
        bufp->chgBit(oldp+56,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
        bufp->chgBit(oldp+57,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
        bufp->chgBit(oldp+58,((1U & (~ (IData)((0x3fffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
        bufp->chgBit(oldp+59,((((~ (IData)((0x3fffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+60,((1U & (IData)((0x1fffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
        bufp->chgBit(oldp+61,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
        bufp->chgBit(oldp+62,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
        bufp->chgBit(oldp+63,((1U & (~ (IData)((0x1fffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
        bufp->chgBit(oldp+64,((((~ (IData)((0x1fffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+65,((1U & (IData)((0xffffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+66,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
        bufp->chgBit(oldp+67,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
        bufp->chgBit(oldp+68,((1U & (~ (IData)((0xffffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+69,((((~ (IData)((0xffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+70,((1U & (IData)((0x7fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
        bufp->chgBit(oldp+71,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
        bufp->chgBit(oldp+72,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
        bufp->chgBit(oldp+73,((1U & (~ (IData)((0x7fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
        bufp->chgBit(oldp+74,((((~ (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+75,((1U & (IData)((0x3fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
        bufp->chgBit(oldp+76,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
        bufp->chgBit(oldp+77,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
        bufp->chgBit(oldp+78,((1U & (~ (IData)((0x3fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
        bufp->chgBit(oldp+79,((((~ (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+80,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
        bufp->chgBit(oldp+81,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
        bufp->chgBit(oldp+82,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
        bufp->chgBit(oldp+83,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
        bufp->chgBit(oldp+84,((((~ (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+85,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
        bufp->chgBit(oldp+86,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
        bufp->chgBit(oldp+87,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
        bufp->chgBit(oldp+88,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
        bufp->chgBit(oldp+89,((((~ (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+90,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
        bufp->chgBit(oldp+91,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
        bufp->chgBit(oldp+92,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
        bufp->chgBit(oldp+93,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
        bufp->chgBit(oldp+94,((((~ (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+95,((1U & (IData)((0x3fffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))))));
        bufp->chgBit(oldp+96,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
        bufp->chgBit(oldp+97,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
        bufp->chgBit(oldp+98,((1U & (~ (IData)((0x3fffffffffc00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))))));
        bufp->chgBit(oldp+99,((((~ (IData)((0x3fffffffffc00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffc00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+100,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+101,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+103,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+104,((((~ (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+105,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+106,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+107,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+108,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+109,((((~ (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+110,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+111,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+112,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+113,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+114,((((~ (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+115,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+116,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+117,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+118,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+119,((((~ (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+120,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+121,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+122,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+123,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+124,((((~ (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+125,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+126,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+127,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+128,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+129,((((~ (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+130,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+131,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+132,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+133,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+134,((((~ (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+135,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+136,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+137,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+138,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+139,((((~ (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+140,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+141,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+142,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+143,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+144,((((~ (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+145,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+146,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+148,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+149,((((~ (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+150,((1U & (IData)((0x1fffffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+151,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+152,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+153,((1U & (~ (IData)((0x1fffffffffe00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+154,((((~ (IData)((0x1fffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [3U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+155,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+156,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+157,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+158,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+159,((((~ (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+160,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+161,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+162,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+163,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+164,((((~ (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+165,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+166,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+167,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+168,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+169,((((~ (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+170,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+171,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+173,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+174,((((~ (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+175,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+176,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+177,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+178,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+179,((((~ (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+180,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+181,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+182,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+183,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+184,((((~ (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+185,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+186,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+187,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+188,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+189,((((~ (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+190,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+191,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+192,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+193,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+194,((((~ (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+195,((1U & (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+196,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+197,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+198,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+199,((((~ (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+200,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+201,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+202,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+203,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+204,((((~ (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+205,((1U & (IData)((0xffffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+206,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+207,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+208,((1U & (~ (IData)((0xffffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+209,((((~ (IData)((0xffffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [4U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+210,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+211,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+212,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+213,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+214,((((~ (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+215,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+216,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+217,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+218,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+219,((((~ (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+220,((1U & (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+221,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+223,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+224,((((~ (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+225,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+226,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+228,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+229,((((~ (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+230,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+231,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+232,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+233,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+234,((((~ (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+235,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+236,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+237,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+238,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+239,((((~ (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+240,((1U & (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+241,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+242,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+243,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+244,((((~ (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+245,((1U & (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+246,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+247,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+248,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+249,((((~ (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+250,((1U & (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+251,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+252,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+253,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+254,((((~ (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+255,((1U & (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+256,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+257,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+258,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+259,((((~ (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+260,((1U & (IData)((0x7fffffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+261,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+262,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+263,((1U & (~ (IData)((0x7fffffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+264,((((~ (IData)((0x7fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [5U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+265,((1U & (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+266,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+267,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+268,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+269,((((~ (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+270,((1U & (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+271,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+272,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+273,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+274,((((~ (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+275,((1U & (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+276,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+277,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+278,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+279,((((~ (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x26U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+280,((1U & (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+281,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+282,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+283,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+284,((((~ (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x27U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U) 
                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x))) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+285,((1U & (IData)((0x3fffffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+286,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+287,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+288,((1U & (~ (IData)((0x3fffffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+289,((((~ (IData)((0x3fffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [6U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+290,((1U & (IData)((0x1fffffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+291,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+292,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+293,((1U & (~ (IData)((0x1fffffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+294,((((~ (IData)((0x1fffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [7U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+295,((1U & (IData)((0xffffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+296,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+297,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+298,((1U & (~ (IData)((0xffffffffff0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+299,((((~ (IData)((0xffffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [8U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+300,((1U & (IData)((0x7fffffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+301,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+302,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+303,((1U & (~ (IData)((0x7fffffffff8000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+304,((((~ (IData)((0x7fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                        [9U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__CarrySig
                                         [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+305,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+306,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x18U)))));
        bufp->chgCData(oldp+307,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                >> 0x19U)))),3);
        bufp->chgQData(oldp+308,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                  << 0x1aU)),64);
        bufp->chgQData(oldp+310,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+312,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+313,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+316,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1aU)))));
        bufp->chgBit(oldp+317,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))))));
        bufp->chgBit(oldp+318,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1aU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1aU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+319,((1U & (IData)((0x3fffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+320,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+321,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+322,((1U & (~ (IData)((0x3fffffffff0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+323,((((~ (IData)((0x3fffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+324,((1U & (IData)((0x1fffffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+325,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+326,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+327,((1U & (~ (IData)((0x1fffffffff8000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+328,((((~ (IData)((0x1fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+329,((1U & (IData)((0xfffffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+330,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+331,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+332,((1U & (~ (IData)((0xfffffffffc000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+333,((((~ (IData)((0xfffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+334,((1U & (IData)((0x7ffffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+335,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+336,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+337,((1U & (~ (IData)((0x7ffffffffe000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+338,((((~ (IData)((0x7ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+339,((1U & (IData)((0x3fffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+340,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+341,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+342,((1U & (~ (IData)((0x3fffffffff000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+343,((((~ (IData)((0x3fffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+344,((1U & (IData)((0x1fffffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+345,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+346,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+347,((1U & (~ (IData)((0x1fffffffff800ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+348,((((~ (IData)((0x1fffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+349,((1U & (IData)((0xfffffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+350,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+351,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+352,((1U & (~ (IData)((0xfffffffffc00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+353,((((~ (IData)((0xfffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+354,((1U & (IData)((0x7ffffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+355,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+356,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+357,((1U & (~ (IData)((0x7ffffffffe00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+358,((((~ (IData)((0x7ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+359,((1U & (IData)((0x3fffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+360,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+361,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+362,((1U & (~ (IData)((0x3fffffffff00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+363,((((~ (IData)((0x3fffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+364,((1U & (IData)((0x1fffffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+365,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+366,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+367,((1U & (~ (IData)((0x1fffffffff80ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+368,((((~ (IData)((0x1fffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+369,((1U & (IData)((0x7ffffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))));
        bufp->chgBit(oldp+370,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+371,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+372,((1U & (~ (IData)((0x7ffffffffe000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x19U)))))));
        bufp->chgBit(oldp+373,((((~ (IData)((0x7ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [1U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+374,((1U & (IData)((0xfffffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+375,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+376,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+377,((1U & (~ (IData)((0xfffffffffc0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+378,((((~ (IData)((0xfffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+379,((1U & (IData)((0x7ffffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+380,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+381,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+382,((1U & (~ (IData)((0x7ffffffffe0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+383,((((~ (IData)((0x7ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+384,((1U & (IData)((0x3fffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+385,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+386,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+387,((1U & (~ (IData)((0x3fffffffff0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+388,((((~ (IData)((0x3fffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+389,((1U & (IData)((0x1fffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+390,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+391,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+392,((1U & (~ (IData)((0x1fffffffff8ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+393,((((~ (IData)((0x1fffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+394,((1U & (IData)((0xfffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+395,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+396,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+397,((1U & (~ (IData)((0xfffffffffcULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+398,((((~ (IData)((0xfffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+399,((1U & (IData)((0x7ffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+400,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+401,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+402,((1U & (~ (IData)((0x7ffffffffeULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+403,((((~ (IData)((0x7ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+404,((1U & (IData)((0x3fffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+405,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+406,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+407,((1U & (~ (IData)((0x3fffffffffULL 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+408,((((~ (IData)((0x3fffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+409,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+410,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+411,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+412,((1U & (~ (IData)((0x1fffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+413,((((~ (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+414,((1U & (IData)((0xfffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+415,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+416,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+417,((1U & (~ (IData)((0xfffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+418,((((~ (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+419,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+420,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+421,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+422,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+423,((((~ (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+424,((1U & (IData)((0x3fffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))));
        bufp->chgBit(oldp+425,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+426,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+427,((1U & (~ (IData)((0x3fffffffff000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))))));
        bufp->chgBit(oldp+428,((((~ (IData)((0x3fffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [2U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+429,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+430,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+431,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+432,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+433,((((~ (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+434,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+435,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+436,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+437,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+438,((((~ (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+439,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+440,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+441,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+442,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+443,((((~ (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+444,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+445,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+446,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+447,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+448,((((~ (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+449,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+450,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+451,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+452,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+453,((((~ (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+454,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+455,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+456,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+457,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+458,((((~ (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+459,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+460,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+461,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+462,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+463,((((~ (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+464,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+465,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+466,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+467,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+468,((((~ (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+469,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+470,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+471,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+472,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+473,((((~ (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+474,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+475,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+476,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+477,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+478,((((~ (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+479,((1U & (IData)((0x1fffffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))));
        bufp->chgBit(oldp+480,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+481,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+482,((1U & (~ (IData)((0x1fffffffff800000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x17U)))))));
        bufp->chgBit(oldp+483,((((~ (IData)((0x1fffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [3U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+484,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+485,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+486,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+487,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+488,((((~ (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+489,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+490,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+491,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+492,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+493,((((~ (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+494,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+495,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+496,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+497,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+498,((((~ (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+499,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+500,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+501,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+502,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+503,((((~ (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+504,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+505,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+506,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+507,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+508,((((~ (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+509,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+510,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+511,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+512,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+513,((((~ (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+514,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+515,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+516,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+517,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+518,((((~ (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+519,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+520,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+521,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+522,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+523,((((~ (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+524,((1U & (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+525,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+526,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+527,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+528,((((~ (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+529,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+530,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+531,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+532,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+533,((((~ (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+534,((1U & (IData)((0xfffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+535,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+536,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+537,((1U & (~ (IData)((0xfffffffffc00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+538,((((~ (IData)((0xfffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [4U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+539,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+540,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+541,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+542,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+543,((((~ (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+544,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+545,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+546,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+547,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+548,((((~ (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+549,((1U & (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+550,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+551,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+552,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+553,((((~ (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+554,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+555,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+556,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+557,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+558,((((~ (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+559,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+560,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+561,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+562,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+563,((((~ (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+564,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+565,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+566,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+567,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+568,((((~ (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+569,((1U & (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+570,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+571,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+572,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+573,((((~ (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+574,((1U & (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+575,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+576,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+577,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+578,((((~ (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+579,((1U & (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+580,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+581,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+582,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+583,((((~ (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+584,((1U & (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+585,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+586,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+587,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+588,((((~ (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+589,((1U & (IData)((0x7ffffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+590,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+591,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+592,((1U & (~ (IData)((0x7ffffffffe00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+593,((((~ (IData)((0x7ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [5U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+594,((1U & (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+595,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+596,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+597,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+598,((((~ (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+599,((1U & (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+600,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+601,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+602,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+603,((((~ (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+604,((1U & (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+605,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+606,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+607,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+608,((((~ (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x24U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+609,((1U & (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+610,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+611,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+612,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+613,((((~ (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x25U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U) 
                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x))) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+614,((1U & (IData)((0x3fffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+615,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+616,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+617,((1U & (~ (IData)((0x3fffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+618,((((~ (IData)((0x3fffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [6U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+619,((1U & (IData)((0x1fffffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+620,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+621,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+622,((1U & (~ (IData)((0x1fffffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+623,((((~ (IData)((0x1fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [7U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+624,((1U & (IData)((0xfffffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+625,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+626,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+627,((1U & (~ (IData)((0xfffffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+628,((((~ (IData)((0xfffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [8U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+629,((1U & (IData)((0x7ffffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+630,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+631,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+632,((1U & (~ (IData)((0x7ffffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+633,((((~ (IData)((0x7ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                        [9U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__CarrySig
                                         [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+634,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+635,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1aU)))));
        bufp->chgCData(oldp+636,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                >> 0x1bU)))),3);
        bufp->chgQData(oldp+637,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                  << 0x1cU)),64);
        bufp->chgQData(oldp+639,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+641,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+645,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1cU)))));
        bufp->chgBit(oldp+646,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))))));
        bufp->chgBit(oldp+647,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1cU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1cU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+648,((1U & (IData)((0x3ffffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+649,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+650,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+651,((1U & (~ (IData)((0x3ffffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+652,((((~ (IData)((0x3ffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+653,((1U & (IData)((0x1ffffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+654,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+655,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+656,((1U & (~ (IData)((0x1ffffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+657,((((~ (IData)((0x1ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+658,((1U & (IData)((0xfffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+659,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+660,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+661,((1U & (~ (IData)((0xfffffffff0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x10U)))))));
        bufp->chgBit(oldp+662,((((~ (IData)((0xfffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+663,((1U & (IData)((0x7ffffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))))));
        bufp->chgBit(oldp+664,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+665,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+666,((1U & (~ (IData)((0x7ffffffff8000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xfU)))))));
        bufp->chgBit(oldp+667,((((~ (IData)((0x7ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+668,((1U & (IData)((0x3ffffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))))));
        bufp->chgBit(oldp+669,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+670,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+671,((1U & (~ (IData)((0x3ffffffffc000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xeU)))))));
        bufp->chgBit(oldp+672,((((~ (IData)((0x3ffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+673,((1U & (IData)((0x1ffffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))))));
        bufp->chgBit(oldp+674,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0xfU])));
        bufp->chgBit(oldp+675,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0xfU] >> 1U))));
        bufp->chgBit(oldp+676,((1U & (~ (IData)((0x1ffffffffe000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xdU)))))));
        bufp->chgBit(oldp+677,((((~ (IData)((0x1ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+678,((1U & (IData)((0xfffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))))));
        bufp->chgBit(oldp+679,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x10U])));
        bufp->chgBit(oldp+680,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x10U] >> 1U))));
        bufp->chgBit(oldp+681,((1U & (~ (IData)((0xfffffffff000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xcU)))))));
        bufp->chgBit(oldp+682,((((~ (IData)((0xfffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+683,((1U & (IData)((0x7ffffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))))));
        bufp->chgBit(oldp+684,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x11U])));
        bufp->chgBit(oldp+685,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x11U] >> 1U))));
        bufp->chgBit(oldp+686,((1U & (~ (IData)((0x7ffffffff800ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xbU)))))));
        bufp->chgBit(oldp+687,((((~ (IData)((0x7ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+688,((1U & (IData)((0x3ffffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))))));
        bufp->chgBit(oldp+689,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x12U])));
        bufp->chgBit(oldp+690,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x12U] >> 1U))));
        bufp->chgBit(oldp+691,((1U & (~ (IData)((0x3ffffffffc00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0xaU)))))));
        bufp->chgBit(oldp+692,((((~ (IData)((0x3ffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+693,((1U & (IData)((0x1ffffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U))))));
        bufp->chgBit(oldp+694,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x13U])));
        bufp->chgBit(oldp+695,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x13U] >> 1U))));
        bufp->chgBit(oldp+696,((1U & (~ (IData)((0x1ffffffffe00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 9U)))))));
        bufp->chgBit(oldp+697,((((~ (IData)((0x1ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+698,((1U & (IData)((0x7ffffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))))));
        bufp->chgBit(oldp+699,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [1U])));
        bufp->chgBit(oldp+700,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+701,((1U & (~ (IData)((0x7ffffffff8000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1bU)))))));
        bufp->chgBit(oldp+702,((((~ (IData)((0x7ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [1U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+703,((1U & (IData)((0xfffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U))))));
        bufp->chgBit(oldp+704,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x14U])));
        bufp->chgBit(oldp+705,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x14U] >> 1U))));
        bufp->chgBit(oldp+706,((1U & (~ (IData)((0xfffffffff00ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 8U)))))));
        bufp->chgBit(oldp+707,((((~ (IData)((0xfffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+708,((1U & (IData)((0x7ffffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U))))));
        bufp->chgBit(oldp+709,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x15U])));
        bufp->chgBit(oldp+710,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x15U] >> 1U))));
        bufp->chgBit(oldp+711,((1U & (~ (IData)((0x7ffffffff80ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 7U)))))));
        bufp->chgBit(oldp+712,((((~ (IData)((0x7ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+713,((1U & (IData)((0x3ffffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U))))));
        bufp->chgBit(oldp+714,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x16U])));
        bufp->chgBit(oldp+715,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x16U] >> 1U))));
        bufp->chgBit(oldp+716,((1U & (~ (IData)((0x3ffffffffc0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 6U)))))));
        bufp->chgBit(oldp+717,((((~ (IData)((0x3ffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+718,((1U & (IData)((0x1ffffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))))));
        bufp->chgBit(oldp+719,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x17U])));
        bufp->chgBit(oldp+720,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x17U] >> 1U))));
        bufp->chgBit(oldp+721,((1U & (~ (IData)((0x1ffffffffe0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 5U)))))));
        bufp->chgBit(oldp+722,((((~ (IData)((0x1ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+723,((1U & (IData)((0xfffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))))));
        bufp->chgBit(oldp+724,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x18U])));
        bufp->chgBit(oldp+725,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x18U] >> 1U))));
        bufp->chgBit(oldp+726,((1U & (~ (IData)((0xfffffffff0ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 4U)))))));
        bufp->chgBit(oldp+727,((((~ (IData)((0xfffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+728,((1U & (IData)((0x7ffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))))));
        bufp->chgBit(oldp+729,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x19U])));
        bufp->chgBit(oldp+730,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x19U] >> 1U))));
        bufp->chgBit(oldp+731,((1U & (~ (IData)((0x7ffffffff8ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 3U)))))));
        bufp->chgBit(oldp+732,((((~ (IData)((0x7ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+733,((1U & (IData)((0x3ffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))))));
        bufp->chgBit(oldp+734,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1aU])));
        bufp->chgBit(oldp+735,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1aU] >> 1U))));
        bufp->chgBit(oldp+736,((1U & (~ (IData)((0x3ffffffffcULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 2U)))))));
        bufp->chgBit(oldp+737,((((~ (IData)((0x3ffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+738,((1U & (IData)((0x1ffffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))))));
        bufp->chgBit(oldp+739,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1bU])));
        bufp->chgBit(oldp+740,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1bU] >> 1U))));
        bufp->chgBit(oldp+741,((1U & (~ (IData)((0x1ffffffffeULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 1U)))))));
        bufp->chgBit(oldp+742,((((~ (IData)((0x1ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+743,((1U & (IData)((0xfffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+744,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1cU])));
        bufp->chgBit(oldp+745,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1cU] >> 1U))));
        bufp->chgBit(oldp+746,((1U & (~ (IData)((0xfffffffffULL 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+747,((((~ (IData)((0xfffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+748,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))))));
        bufp->chgBit(oldp+749,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1dU])));
        bufp->chgBit(oldp+750,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1dU] >> 1U))));
        bufp->chgBit(oldp+751,((1U & (~ (IData)((0x7ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+752,((((~ (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+753,((1U & (IData)((0x3ffffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))))));
        bufp->chgBit(oldp+754,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [2U])));
        bufp->chgBit(oldp+755,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+756,((1U & (~ (IData)((0x3ffffffffc000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x1aU)))))));
        bufp->chgBit(oldp+757,((((~ (IData)((0x3ffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [2U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+758,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))))));
        bufp->chgBit(oldp+759,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1eU])));
        bufp->chgBit(oldp+760,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1eU] >> 1U))));
        bufp->chgBit(oldp+761,((1U & (~ (IData)((0x3ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+762,((((~ (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+763,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))))));
        bufp->chgBit(oldp+764,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x1fU])));
        bufp->chgBit(oldp+765,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x1fU] >> 1U))));
        bufp->chgBit(oldp+766,((1U & (~ (IData)((0x1ffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+767,((((~ (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+768,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))))));
        bufp->chgBit(oldp+769,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x20U])));
        bufp->chgBit(oldp+770,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x20U] >> 1U))));
        bufp->chgBit(oldp+771,((1U & (~ (IData)((0xffffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+772,((((~ (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+773,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))))));
        bufp->chgBit(oldp+774,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x21U])));
        bufp->chgBit(oldp+775,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x21U] >> 1U))));
        bufp->chgBit(oldp+776,((1U & (~ (IData)((0x7fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+777,((((~ (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+778,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))))));
        bufp->chgBit(oldp+779,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x22U])));
        bufp->chgBit(oldp+780,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x22U] >> 1U))));
        bufp->chgBit(oldp+781,((1U & (~ (IData)((0x3fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+782,((((~ (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+783,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))))));
        bufp->chgBit(oldp+784,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x23U])));
        bufp->chgBit(oldp+785,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x23U] >> 1U))));
        bufp->chgBit(oldp+786,((1U & (~ (IData)((0x1fffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+787,((((~ (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+788,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))))));
        bufp->chgBit(oldp+789,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x24U])));
        bufp->chgBit(oldp+790,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x24U] >> 1U))));
        bufp->chgBit(oldp+791,((1U & (~ (IData)((0xfffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+792,((((~ (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+793,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))))));
        bufp->chgBit(oldp+794,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x25U])));
        bufp->chgBit(oldp+795,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x25U] >> 1U))));
        bufp->chgBit(oldp+796,((1U & (~ (IData)((0x7ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+797,((((~ (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+798,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+799,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x26U])));
        bufp->chgBit(oldp+800,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x26U] >> 1U))));
        bufp->chgBit(oldp+801,((1U & (~ (IData)((0x3ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+802,((((~ (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+803,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+804,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x27U])));
        bufp->chgBit(oldp+805,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x27U] >> 1U))));
        bufp->chgBit(oldp+806,((1U & (~ (IData)((0x1ffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+807,((((~ (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+808,((1U & (IData)((0x1ffffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))))));
        bufp->chgBit(oldp+809,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [3U])));
        bufp->chgBit(oldp+810,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+811,((1U & (~ (IData)((0x1ffffffffe000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x19U)))))));
        bufp->chgBit(oldp+812,((((~ (IData)((0x1ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [3U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+813,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+814,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x28U])));
        bufp->chgBit(oldp+815,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x28U] >> 1U))));
        bufp->chgBit(oldp+816,((1U & (~ (IData)((0xffffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+817,((((~ (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+818,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+819,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x29U])));
        bufp->chgBit(oldp+820,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x29U] >> 1U))));
        bufp->chgBit(oldp+821,((1U & (~ (IData)((0x7fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+822,((((~ (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+823,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+824,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2aU])));
        bufp->chgBit(oldp+825,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2aU] >> 1U))));
        bufp->chgBit(oldp+826,((1U & (~ (IData)((0x3fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+827,((((~ (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+828,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+829,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2bU])));
        bufp->chgBit(oldp+830,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2bU] >> 1U))));
        bufp->chgBit(oldp+831,((1U & (~ (IData)((0x1fffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+832,((((~ (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+833,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+834,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2cU])));
        bufp->chgBit(oldp+835,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2cU] >> 1U))));
        bufp->chgBit(oldp+836,((1U & (~ (IData)((0xfffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+837,((((~ (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+838,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+839,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2dU])));
        bufp->chgBit(oldp+840,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2dU] >> 1U))));
        bufp->chgBit(oldp+841,((1U & (~ (IData)((0x7ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+842,((((~ (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+843,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+844,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2eU])));
        bufp->chgBit(oldp+845,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2eU] >> 1U))));
        bufp->chgBit(oldp+846,((1U & (~ (IData)((0x3ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+847,((((~ (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+848,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+849,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x2fU])));
        bufp->chgBit(oldp+850,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x2fU] >> 1U))));
        bufp->chgBit(oldp+851,((1U & (~ (IData)((0x1ffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+852,((((~ (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+853,((1U & (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+854,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x30U])));
        bufp->chgBit(oldp+855,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x30U] >> 1U))));
        bufp->chgBit(oldp+856,((1U & (~ (IData)((0xffffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+857,((((~ (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+858,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+859,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x31U])));
        bufp->chgBit(oldp+860,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x31U] >> 1U))));
        bufp->chgBit(oldp+861,((1U & (~ (IData)((0x7fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+862,((((~ (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+863,((1U & (IData)((0xfffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))))));
        bufp->chgBit(oldp+864,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [4U])));
        bufp->chgBit(oldp+865,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+866,((1U & (~ (IData)((0xfffffffff000000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x18U)))))));
        bufp->chgBit(oldp+867,((((~ (IData)((0xfffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [4U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+868,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+869,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x32U])));
        bufp->chgBit(oldp+870,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x32U] >> 1U))));
        bufp->chgBit(oldp+871,((1U & (~ (IData)((0x3fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+872,((((~ (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+873,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+874,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x33U])));
        bufp->chgBit(oldp+875,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x33U] >> 1U))));
        bufp->chgBit(oldp+876,((1U & (~ (IData)((0x1fffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+877,((((~ (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+878,((1U & (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+879,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x34U])));
        bufp->chgBit(oldp+880,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x34U] >> 1U))));
        bufp->chgBit(oldp+881,((1U & (~ (IData)((0xfffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+882,((((~ (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+883,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+884,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x35U])));
        bufp->chgBit(oldp+885,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x35U] >> 1U))));
        bufp->chgBit(oldp+886,((1U & (~ (IData)((0x7ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+887,((((~ (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+888,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+889,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x36U])));
        bufp->chgBit(oldp+890,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x36U] >> 1U))));
        bufp->chgBit(oldp+891,((1U & (~ (IData)((0x3ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+892,((((~ (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+893,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+894,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x37U])));
        bufp->chgBit(oldp+895,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x37U] >> 1U))));
        bufp->chgBit(oldp+896,((1U & (~ (IData)((0x1ffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+897,((((~ (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+898,((1U & (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+899,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x38U])));
        bufp->chgBit(oldp+900,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x38U] >> 1U))));
        bufp->chgBit(oldp+901,((1U & (~ (IData)((0xffULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+902,((((~ (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+903,((1U & (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+904,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x39U])));
        bufp->chgBit(oldp+905,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x39U] >> 1U))));
        bufp->chgBit(oldp+906,((1U & (~ (IData)((0x7fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+907,((((~ (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+908,((1U & (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+909,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3aU])));
        bufp->chgBit(oldp+910,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3aU] >> 1U))));
        bufp->chgBit(oldp+911,((1U & (~ (IData)((0x3fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+912,((((~ (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+913,((1U & (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+914,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3bU])));
        bufp->chgBit(oldp+915,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3bU] >> 1U))));
        bufp->chgBit(oldp+916,((1U & (~ (IData)((0x1fULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+917,((((~ (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+918,((1U & (IData)((0x7ffffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))))));
        bufp->chgBit(oldp+919,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [5U])));
        bufp->chgBit(oldp+920,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+921,((1U & (~ (IData)((0x7ffffffff800000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x17U)))))));
        bufp->chgBit(oldp+922,((((~ (IData)((0x7ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [5U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+923,((1U & (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+924,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3cU])));
        bufp->chgBit(oldp+925,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3cU] >> 1U))));
        bufp->chgBit(oldp+926,((1U & (~ (IData)((0xfULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+927,((((~ (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+928,((1U & (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+929,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3dU])));
        bufp->chgBit(oldp+930,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3dU] >> 1U))));
        bufp->chgBit(oldp+931,((1U & (~ (IData)((7ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+932,((((~ (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+933,((1U & (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+934,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3eU])));
        bufp->chgBit(oldp+935,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3eU] >> 1U))));
        bufp->chgBit(oldp+936,((1U & (~ (IData)((3ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+937,((((~ (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x22U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+938,((1U & (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+939,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [0x3fU])));
        bufp->chgBit(oldp+940,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [0x3fU] >> 1U))));
        bufp->chgBit(oldp+941,((1U & (~ (IData)((1ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+942,((((~ (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x23U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x23U) 
                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x))) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+943,((1U & (IData)((0x3ffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))))));
        bufp->chgBit(oldp+944,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [6U])));
        bufp->chgBit(oldp+945,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+946,((1U & (~ (IData)((0x3ffffffffc00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x16U)))))));
        bufp->chgBit(oldp+947,((((~ (IData)((0x3ffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [6U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+948,((1U & (IData)((0x1ffffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))))));
        bufp->chgBit(oldp+949,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [7U])));
        bufp->chgBit(oldp+950,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+951,((1U & (~ (IData)((0x1ffffffffe00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x15U)))))));
        bufp->chgBit(oldp+952,((((~ (IData)((0x1ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [7U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+953,((1U & (IData)((0xfffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+954,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [8U])));
        bufp->chgBit(oldp+955,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+956,((1U & (~ (IData)((0xfffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+957,((((~ (IData)((0xfffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xfffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [8U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+958,((1U & (IData)((0x7ffffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+959,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                [9U])));
        bufp->chgBit(oldp+960,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+961,((1U & (~ (IData)((0x7ffffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+962,((((~ (IData)((0x7ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                        [9U] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__CarrySig
                                         [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+963,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+964,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                              >> 0x1cU)))));
        bufp->chgCData(oldp+965,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                                >> 0x1dU)))),3);
        bufp->chgQData(oldp+966,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                  << 0x1eU)),64);
        bufp->chgQData(oldp+968,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.OutX),64);
        bufp->chgBit(oldp+970,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x) 
                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx))));
        bufp->chgBit(oldp+971,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x));
        bufp->chgBit(oldp+973,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              << 0x1eU)))));
        bufp->chgBit(oldp+975,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1eU))))));
        bufp->chgBit(oldp+976,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1eU))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x1eU)) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)))));
        bufp->chgBit(oldp+977,((1U & (IData)((0x3ffffffff00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x14U))))));
        bufp->chgBit(oldp+978,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xaU])));
        bufp->chgBit(oldp+979,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+980,((1U & (~ (IData)((0x3ffffffff00000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x14U)))))));
        bufp->chgBit(oldp+981,((((~ (IData)((0x3ffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x3ffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+982,((1U & (IData)((0x1ffffffff80000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x13U))))));
        bufp->chgBit(oldp+983,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xbU])));
        bufp->chgBit(oldp+984,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+985,((1U & (~ (IData)((0x1ffffffff80000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x13U)))))));
        bufp->chgBit(oldp+986,((((~ (IData)((0x1ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x1ffffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+987,((1U & (IData)((0xffffffffc0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x12U))))));
        bufp->chgBit(oldp+988,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xcU])));
        bufp->chgBit(oldp+989,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xcU] >> 1U))));
        bufp->chgBit(oldp+990,((1U & (~ (IData)((0xffffffffc0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x12U)))))));
        bufp->chgBit(oldp+991,((((~ (IData)((0xffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0xffffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+992,((1U & (IData)((0x7fffffffe0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x11U))))));
        bufp->chgBit(oldp+993,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xdU])));
        bufp->chgBit(oldp+994,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xdU] >> 1U))));
        bufp->chgBit(oldp+995,((1U & (~ (IData)((0x7fffffffe0000ULL 
                                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                    << 0x11U)))))));
        bufp->chgBit(oldp+996,((((~ (IData)((0x7fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U)))) 
                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                | (((IData)((0x7fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))) 
                                    & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                   | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] >> 1U) 
                                       & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                      | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+997,((1U & (IData)((0x3ffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))))));
        bufp->chgBit(oldp+998,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                [0xeU])));
        bufp->chgBit(oldp+999,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                      [0xeU] >> 1U))));
        bufp->chgBit(oldp+1000,((1U & (~ (IData)((0x3ffffffff0000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x10U)))))));
        bufp->chgBit(oldp+1001,((((~ (IData)((0x3ffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffff0000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xeU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1002,((1U & (IData)((0x1ffffffff8000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xfU))))));
        bufp->chgBit(oldp+1003,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0xfU])));
        bufp->chgBit(oldp+1004,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1005,((1U & (~ (IData)((0x1ffffffff8000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xfU)))))));
        bufp->chgBit(oldp+1006,((((~ (IData)((0x1ffffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffff8000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0xfU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1007,((1U & (IData)((0xffffffffc000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xeU))))));
        bufp->chgBit(oldp+1008,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x10U])));
        bufp->chgBit(oldp+1009,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1010,((1U & (~ (IData)((0xffffffffc000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xeU)))))));
        bufp->chgBit(oldp+1011,((((~ (IData)((0xffffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffc000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x10U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1012,((1U & (IData)((0x7fffffffe000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xdU))))));
        bufp->chgBit(oldp+1013,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x11U])));
        bufp->chgBit(oldp+1014,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U))));
        bufp->chgBit(oldp+1015,((1U & (~ (IData)((0x7fffffffe000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xdU)))))));
        bufp->chgBit(oldp+1016,((((~ (IData)((0x7fffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffe000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x11U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1017,((1U & (IData)((0x3ffffffff000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xcU))))));
        bufp->chgBit(oldp+1018,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x12U])));
        bufp->chgBit(oldp+1019,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U))));
        bufp->chgBit(oldp+1020,((1U & (~ (IData)((0x3ffffffff000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xcU)))))));
        bufp->chgBit(oldp+1021,((((~ (IData)((0x3ffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffff000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x12U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1022,((1U & (IData)((0x1ffffffff800ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xbU))))));
        bufp->chgBit(oldp+1023,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x13U])));
        bufp->chgBit(oldp+1024,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U))));
        bufp->chgBit(oldp+1025,((1U & (~ (IData)((0x1ffffffff800ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xbU)))))));
        bufp->chgBit(oldp+1026,((((~ (IData)((0x1ffffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffff800ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x13U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1027,((1U & (IData)((0x7fffffffe0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1dU))))));
        bufp->chgBit(oldp+1028,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [1U])));
        bufp->chgBit(oldp+1029,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U))));
        bufp->chgBit(oldp+1030,((1U & (~ (IData)((0x7fffffffe0000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1dU)))))));
        bufp->chgBit(oldp+1031,((((~ (IData)((0x7fffffffe0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffe0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [1U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1032,((1U & (IData)((0xffffffffc00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0xaU))))));
        bufp->chgBit(oldp+1033,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x14U])));
        bufp->chgBit(oldp+1034,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U))));
        bufp->chgBit(oldp+1035,((1U & (~ (IData)((0xffffffffc00ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0xaU)))))));
        bufp->chgBit(oldp+1036,((((~ (IData)((0xffffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffc00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x14U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1037,((1U & (IData)((0x7fffffffe00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 9U))))));
        bufp->chgBit(oldp+1038,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x15U])));
        bufp->chgBit(oldp+1039,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U))));
        bufp->chgBit(oldp+1040,((1U & (~ (IData)((0x7fffffffe00ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 9U)))))));
        bufp->chgBit(oldp+1041,((((~ (IData)((0x7fffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffe00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x15U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1042,((1U & (IData)((0x3ffffffff00ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 8U))))));
        bufp->chgBit(oldp+1043,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x16U])));
        bufp->chgBit(oldp+1044,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U))));
        bufp->chgBit(oldp+1045,((1U & (~ (IData)((0x3ffffffff00ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 8U)))))));
        bufp->chgBit(oldp+1046,((((~ (IData)((0x3ffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffff00ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x16U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1047,((1U & (IData)((0x1ffffffff80ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 7U))))));
        bufp->chgBit(oldp+1048,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x17U])));
        bufp->chgBit(oldp+1049,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U))));
        bufp->chgBit(oldp+1050,((1U & (~ (IData)((0x1ffffffff80ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 7U)))))));
        bufp->chgBit(oldp+1051,((((~ (IData)((0x1ffffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffff80ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x17U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1052,((1U & (IData)((0xffffffffc0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 6U))))));
        bufp->chgBit(oldp+1053,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x18U])));
        bufp->chgBit(oldp+1054,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U))));
        bufp->chgBit(oldp+1055,((1U & (~ (IData)((0xffffffffc0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 6U)))))));
        bufp->chgBit(oldp+1056,((((~ (IData)((0xffffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffc0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x18U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1057,((1U & (IData)((0x7fffffffe0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 5U))))));
        bufp->chgBit(oldp+1058,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x19U])));
        bufp->chgBit(oldp+1059,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U))));
        bufp->chgBit(oldp+1060,((1U & (~ (IData)((0x7fffffffe0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 5U)))))));
        bufp->chgBit(oldp+1061,((((~ (IData)((0x7fffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffe0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x19U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1062,((1U & (IData)((0x3ffffffff0ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 4U))))));
        bufp->chgBit(oldp+1063,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x1aU])));
        bufp->chgBit(oldp+1064,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U))));
        bufp->chgBit(oldp+1065,((1U & (~ (IData)((0x3ffffffff0ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 4U)))))));
        bufp->chgBit(oldp+1066,((((~ (IData)((0x3ffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffff0ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1067,((1U & (IData)((0x1ffffffff8ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 3U))))));
        bufp->chgBit(oldp+1068,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x1bU])));
        bufp->chgBit(oldp+1069,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U))));
        bufp->chgBit(oldp+1070,((1U & (~ (IData)((0x1ffffffff8ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 3U)))))));
        bufp->chgBit(oldp+1071,((((~ (IData)((0x1ffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffff8ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1072,((1U & (IData)((0xffffffffcULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 2U))))));
        bufp->chgBit(oldp+1073,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x1cU])));
        bufp->chgBit(oldp+1074,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U))));
        bufp->chgBit(oldp+1075,((1U & (~ (IData)((0xffffffffcULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 2U)))))));
        bufp->chgBit(oldp+1076,((((~ (IData)((0xffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffcULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1077,((1U & (IData)((0x7fffffffeULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 1U))))));
        bufp->chgBit(oldp+1078,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x1dU])));
        bufp->chgBit(oldp+1079,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U))));
        bufp->chgBit(oldp+1080,((1U & (~ (IData)((0x7fffffffeULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 1U)))))));
        bufp->chgBit(oldp+1081,((((~ (IData)((0x7fffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffeULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1082,((1U & (IData)((0x3ffffffff0000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1cU))))));
        bufp->chgBit(oldp+1083,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [2U])));
        bufp->chgBit(oldp+1084,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1085,((1U & (~ (IData)((0x3ffffffff0000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1cU)))))));
        bufp->chgBit(oldp+1086,((((~ (IData)((0x3ffffffff0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffff0000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [2U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1087,((1U & (IData)((0x3ffffffffULL 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
        bufp->chgBit(oldp+1088,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x1eU])));
        bufp->chgBit(oldp+1089,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U))));
        bufp->chgBit(oldp+1090,((1U & (~ (IData)((0x3ffffffffULL 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
        bufp->chgBit(oldp+1091,((((~ (IData)((0x3ffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffffULL 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1092,((1U & (IData)((0x1ffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1093,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x1fU])));
        bufp->chgBit(oldp+1094,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U))));
        bufp->chgBit(oldp+1095,((1U & (~ (IData)((0x1ffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1096,((((~ (IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 1U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x1fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1097,((1U & (IData)((0xffffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1098,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x20U])));
        bufp->chgBit(oldp+1099,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U))));
        bufp->chgBit(oldp+1100,((1U & (~ (IData)((0xffffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1101,((((~ (IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 2U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x20U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1102,((1U & (IData)((0x7fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1103,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x21U])));
        bufp->chgBit(oldp+1104,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U))));
        bufp->chgBit(oldp+1105,((1U & (~ (IData)((0x7fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1106,((((~ (IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 3U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x21U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1107,((1U & (IData)((0x3fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1108,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x22U])));
        bufp->chgBit(oldp+1109,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U))));
        bufp->chgBit(oldp+1110,((1U & (~ (IData)((0x3fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1111,((((~ (IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 4U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x22U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1112,((1U & (IData)((0x1fffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1113,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x23U])));
        bufp->chgBit(oldp+1114,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U))));
        bufp->chgBit(oldp+1115,((1U & (~ (IData)((0x1fffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1116,((((~ (IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 5U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x23U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1117,((1U & (IData)((0xfffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1118,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x24U])));
        bufp->chgBit(oldp+1119,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U))));
        bufp->chgBit(oldp+1120,((1U & (~ (IData)((0xfffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1121,((((~ (IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 6U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x24U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1122,((1U & (IData)((0x7ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1123,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x25U])));
        bufp->chgBit(oldp+1124,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U))));
        bufp->chgBit(oldp+1125,((1U & (~ (IData)((0x7ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1126,((((~ (IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 7U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x25U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1127,((1U & (IData)((0x3ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1128,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x26U])));
        bufp->chgBit(oldp+1129,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U))));
        bufp->chgBit(oldp+1130,((1U & (~ (IData)((0x3ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1131,((((~ (IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 8U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x26U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1132,((1U & (IData)((0x1ffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1133,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x27U])));
        bufp->chgBit(oldp+1134,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U))));
        bufp->chgBit(oldp+1135,((1U & (~ (IData)((0x1ffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1136,((((~ (IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 9U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x27U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1137,((1U & (IData)((0x1ffffffff8000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1bU))))));
        bufp->chgBit(oldp+1138,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [3U])));
        bufp->chgBit(oldp+1139,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1140,((1U & (~ (IData)((0x1ffffffff8000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1bU)))))));
        bufp->chgBit(oldp+1141,((((~ (IData)((0x1ffffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffff8000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [3U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1142,((1U & (IData)((0xffffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1143,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x28U])));
        bufp->chgBit(oldp+1144,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U))));
        bufp->chgBit(oldp+1145,((1U & (~ (IData)((0xffffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1146,((((~ (IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xaU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x28U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1147,((1U & (IData)((0x7fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1148,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x29U])));
        bufp->chgBit(oldp+1149,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U))));
        bufp->chgBit(oldp+1150,((1U & (~ (IData)((0x7fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1151,((((~ (IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xbU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x29U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1152,((1U & (IData)((0x3fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1153,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x2aU])));
        bufp->chgBit(oldp+1154,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U))));
        bufp->chgBit(oldp+1155,((1U & (~ (IData)((0x3fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1156,((((~ (IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xcU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1157,((1U & (IData)((0x1fffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1158,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x2bU])));
        bufp->chgBit(oldp+1159,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U))));
        bufp->chgBit(oldp+1160,((1U & (~ (IData)((0x1fffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1161,((((~ (IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xdU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1162,((1U & (IData)((0xfffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1163,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x2cU])));
        bufp->chgBit(oldp+1164,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U))));
        bufp->chgBit(oldp+1165,((1U & (~ (IData)((0xfffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1166,((((~ (IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xeU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1167,((1U & (IData)((0x7ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1168,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x2dU])));
        bufp->chgBit(oldp+1169,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U))));
        bufp->chgBit(oldp+1170,((1U & (~ (IData)((0x7ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1171,((((~ (IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0xfU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1172,((1U & (IData)((0x3ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1173,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x2eU])));
        bufp->chgBit(oldp+1174,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U))));
        bufp->chgBit(oldp+1175,((1U & (~ (IData)((0x3ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1176,((((~ (IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x10U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1177,((1U & (IData)((0x1ffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1178,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x2fU])));
        bufp->chgBit(oldp+1179,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U))));
        bufp->chgBit(oldp+1180,((1U & (~ (IData)((0x1ffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1181,((((~ (IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x11U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x2fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1182,((1U & (IData)((0xffffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1183,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x30U])));
        bufp->chgBit(oldp+1184,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U))));
        bufp->chgBit(oldp+1185,((1U & (~ (IData)((0xffffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1186,((((~ (IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x12U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x30U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1187,((1U & (IData)((0x7fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1188,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x31U])));
        bufp->chgBit(oldp+1189,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U))));
        bufp->chgBit(oldp+1190,((1U & (~ (IData)((0x7fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1191,((((~ (IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x13U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x31U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1192,((1U & (IData)((0xffffffffc000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x1aU))))));
        bufp->chgBit(oldp+1193,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [4U])));
        bufp->chgBit(oldp+1194,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1195,((1U & (~ (IData)((0xffffffffc000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x1aU)))))));
        bufp->chgBit(oldp+1196,((((~ (IData)((0xffffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffc000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [4U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1197,((1U & (IData)((0x3fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1198,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x32U])));
        bufp->chgBit(oldp+1199,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U))));
        bufp->chgBit(oldp+1200,((1U & (~ (IData)((0x3fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1201,((((~ (IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x14U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x32U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1202,((1U & (IData)((0x1fffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1203,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x33U])));
        bufp->chgBit(oldp+1204,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U))));
        bufp->chgBit(oldp+1205,((1U & (~ (IData)((0x1fffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1206,((((~ (IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x33U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1207,((1U & (IData)((0xfffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1208,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x34U])));
        bufp->chgBit(oldp+1209,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U))));
        bufp->chgBit(oldp+1210,((1U & (~ (IData)((0xfffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1211,((((~ (IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x34U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1212,((1U & (IData)((0x7ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1213,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x35U])));
        bufp->chgBit(oldp+1214,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U))));
        bufp->chgBit(oldp+1215,((1U & (~ (IData)((0x7ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1216,((((~ (IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x35U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1217,((1U & (IData)((0x3ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1218,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x36U])));
        bufp->chgBit(oldp+1219,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U))));
        bufp->chgBit(oldp+1220,((1U & (~ (IData)((0x3ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1221,((((~ (IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x36U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1222,((1U & (IData)((0x1ffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1223,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x37U])));
        bufp->chgBit(oldp+1224,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U))));
        bufp->chgBit(oldp+1225,((1U & (~ (IData)((0x1ffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1226,((((~ (IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x37U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1227,((1U & (IData)((0xffULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1228,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x38U])));
        bufp->chgBit(oldp+1229,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U))));
        bufp->chgBit(oldp+1230,((1U & (~ (IData)((0xffULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1231,((((~ (IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1aU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x38U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1232,((1U & (IData)((0x7fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1233,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x39U])));
        bufp->chgBit(oldp+1234,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U))));
        bufp->chgBit(oldp+1235,((1U & (~ (IData)((0x7fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1236,((((~ (IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1bU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x39U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1237,((1U & (IData)((0x3fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1238,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x3aU])));
        bufp->chgBit(oldp+1239,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U))));
        bufp->chgBit(oldp+1240,((1U & (~ (IData)((0x3fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1241,((((~ (IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1cU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3aU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1242,((1U & (IData)((0x1fULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1243,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x3bU])));
        bufp->chgBit(oldp+1244,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U))));
        bufp->chgBit(oldp+1245,((1U & (~ (IData)((0x1fULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1246,((((~ (IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1fULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1dU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3bU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1247,((1U & (IData)((0x7fffffffe000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x19U))))));
        bufp->chgBit(oldp+1248,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [5U])));
        bufp->chgBit(oldp+1249,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1250,((1U & (~ (IData)((0x7fffffffe000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x19U)))))));
        bufp->chgBit(oldp+1251,((((~ (IData)((0x7fffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffe000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x19U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [5U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1252,((1U & (IData)((0xfULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1253,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x3cU])));
        bufp->chgBit(oldp+1254,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U))));
        bufp->chgBit(oldp+1255,((1U & (~ (IData)((0xfULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1256,((((~ (IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xfULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1eU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3cU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1257,((1U & (IData)((7ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1258,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x3dU])));
        bufp->chgBit(oldp+1259,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U))));
        bufp->chgBit(oldp+1260,((1U & (~ (IData)((7ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1261,((((~ (IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((7ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x1fU))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3dU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1262,((1U & (IData)((3ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1263,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x3eU])));
        bufp->chgBit(oldp+1264,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U))));
        bufp->chgBit(oldp+1265,((1U & (~ (IData)((3ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1266,((((~ (IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((3ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x20U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3eU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1267,((1U & (IData)((1ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1268,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [0x3fU])));
        bufp->chgBit(oldp+1269,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U))));
        bufp->chgBit(oldp+1270,((1U & (~ (IData)((1ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1271,((((~ (IData)((1ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 >> 0x21U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x21U) 
                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x))) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [0x3fU] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1272,((1U & (IData)((0x3ffffffff000000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x18U))))));
        bufp->chgBit(oldp+1273,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [6U])));
        bufp->chgBit(oldp+1274,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1275,((1U & (~ (IData)((0x3ffffffff000000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x18U)))))));
        bufp->chgBit(oldp+1276,((((~ (IData)((0x3ffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x3ffffffff000000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x18U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [6U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1277,((1U & (IData)((0x1ffffffff800000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x17U))))));
        bufp->chgBit(oldp+1278,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [7U])));
        bufp->chgBit(oldp+1279,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1280,((1U & (~ (IData)((0x1ffffffff800000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x17U)))))));
        bufp->chgBit(oldp+1281,((((~ (IData)((0x1ffffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x1ffffffff800000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x17U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [7U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1282,((1U & (IData)((0xffffffffc00000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x16U))))));
        bufp->chgBit(oldp+1283,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [8U])));
        bufp->chgBit(oldp+1284,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1285,((1U & (~ (IData)((0xffffffffc00000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x16U)))))));
        bufp->chgBit(oldp+1286,((((~ (IData)((0xffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0xffffffffc00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x16U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [8U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1287,((1U & (IData)((0x7fffffffe00000ULL 
                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                  << 0x15U))))));
        bufp->chgBit(oldp+1288,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                 [9U])));
        bufp->chgBit(oldp+1289,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1290,((1U & (~ (IData)((0x7fffffffe00000ULL 
                                                  & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                     << 0x15U)))))));
        bufp->chgBit(oldp+1291,((((~ (IData)((0x7fffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U)))) 
                                  & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                 | (((IData)((0x7fffffffe00000ULL 
                                              & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                 << 0x15U))) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__x)) 
                                    | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                         [9U] >> 1U) 
                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x)) 
                                       | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__CarrySig
                                          [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT___2x)))))));
        bufp->chgBit(oldp+1292,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1293,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 0x1eU)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2aU])) {
        bufp->chgCData(oldp+1294,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next),4);
        bufp->chgCData(oldp+1295,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next),3);
        bufp->chgCData(oldp+1296,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_aregion_next),4);
        bufp->chgCData(oldp+1297,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next),3);
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1299,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1300,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_readArbitation_fire));
        bufp->chgBit(oldp+1301,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_readArbitation_fire));
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1305,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1306,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_readArbitation_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2bU])) {
        bufp->chgBit(oldp+1307,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_full)))));
        bufp->chgBit(oldp+1308,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushCC_full)))));
        bufp->chgBit(oldp+1309,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushCC_full)))));
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_pushPtrGray),3);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_pushPtr),3);
        bufp->chgCData(oldp+1312,((7U & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_pushPtr)))),3);
        bufp->chgBit(oldp+1313,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_full));
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushCC_pushPtrGray),3);
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushCC_pushPtr),3);
        bufp->chgCData(oldp+1316,((7U & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushCC_pushPtr)))),3);
        bufp->chgBit(oldp+1317,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushCC_full));
        bufp->chgCData(oldp+1318,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushCC_pushPtrGray),4);
        bufp->chgCData(oldp+1319,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushCC_pushPtr),4);
        bufp->chgCData(oldp+1320,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushCC_pushPtr)))),4);
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushCC_full));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2cU])) {
        bufp->chgCData(oldp+1322,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_axi_aregion_next),4);
        bufp->chgCData(oldp+1323,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_select_next),3);
        bufp->chgCData(oldp+1324,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_axi_aregion_next),4);
        bufp->chgCData(oldp+1325,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_select_next),3);
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1328,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_readArbitation_fire));
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1330,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_readArbitation_fire));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_readArbitation_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2dU])) {
        bufp->chgCData(oldp+1335,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_wvalid),3);
        bufp->chgIData(oldp+1336,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_wvalid),24);
        bufp->chgBit(oldp+1337,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__w_select_valid_next));
        bufp->chgBit(oldp+1338,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1339,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1340,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1341,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1342,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1343,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
        bufp->chgBit(oldp+1344,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output));
        bufp->chgBit(oldp+1345,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp));
        bufp->chgBit(oldp+1346,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output));
        bufp->chgBit(oldp+1347,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1348,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1349,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1350,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1351,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
        bufp->chgBit(oldp+1352,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output));
        bufp->chgBit(oldp+1353,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp));
        bufp->chgBit(oldp+1354,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output));
        bufp->chgBit(oldp+1355,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_wready_early));
        bufp->chgBit(oldp+1356,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1357,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1358,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1359,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1360,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
        bufp->chgBit(oldp+1361,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output));
        bufp->chgBit(oldp+1362,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp));
        bufp->chgBit(oldp+1363,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output));
        bufp->chgBit(oldp+1364,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1365,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1366,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1367,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1368,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
        bufp->chgBit(oldp+1369,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output));
        bufp->chgBit(oldp+1370,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp));
        bufp->chgBit(oldp+1371,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output));
        bufp->chgBit(oldp+1372,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1373,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1374,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1375,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1376,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
        bufp->chgBit(oldp+1377,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output));
        bufp->chgBit(oldp+1378,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp));
        bufp->chgBit(oldp+1379,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output));
        bufp->chgBit(oldp+1380,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1381,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1382,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1383,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1384,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1385,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1386,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__s_axi_wvalid_mux));
        bufp->chgBit(oldp+1387,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1388,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
        bufp->chgBit(oldp+1389,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output));
        bufp->chgBit(oldp+1390,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp));
        bufp->chgBit(oldp+1391,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output));
        bufp->chgBit(oldp+1392,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_drop_next));
        bufp->chgBit(oldp+1393,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__w_select_valid_next));
        bufp->chgBit(oldp+1394,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_drop_next));
        bufp->chgBit(oldp+1395,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__w_select_valid_next));
        bufp->chgBit(oldp+1396,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__w_drop_next));
        bufp->chgBit(oldp+1397,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__w_select_valid_next));
        bufp->chgCData(oldp+1398,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1399,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1400,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
        bufp->chgCData(oldp+1401,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1402,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1403,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
        bufp->chgCData(oldp+1404,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1405,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1406,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
        bufp->chgCData(oldp+1407,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1408,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1409,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
        bufp->chgCData(oldp+1410,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1412,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
        bufp->chgCData(oldp+1413,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1414,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1415,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
        bufp->chgCData(oldp+1416,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1417,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1418,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2eU])) {
        bufp->chgBit(oldp+1419,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ms_allowin));
        bufp->chgBit(oldp+1420,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fs_to_ds_valid));
        bufp->chgBit(oldp+1421,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ms_to_ws_valid));
        bufp->chgBit(oldp+1422,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en));
        bufp->chgBit(oldp+1423,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcacop_op_en));
        bufp->chgBit(oldp+1424,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_addr_ok));
        bufp->chgBit(oldp+1425,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_data_ok));
        bufp->chgBit(oldp+1426,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_ret_valid));
        bufp->chgBit(oldp+1427,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_valid));
        bufp->chgBit(oldp+1428,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_addr_ok));
        bufp->chgBit(oldp+1429,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_data_ok));
        bufp->chgBit(oldp+1430,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_rdy));
        bufp->chgBit(oldp+1431,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_ret_valid));
        bufp->chgBit(oldp+1432,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__preld_en));
        bufp->chgCData(oldp+1433,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][0U]),8);
        bufp->chgCData(oldp+1434,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][1U]),8);
        bufp->chgCData(oldp+1435,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][2U]),8);
        bufp->chgCData(oldp+1436,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][3U]),8);
        bufp->chgCData(oldp+1437,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][0U]),8);
        bufp->chgCData(oldp+1438,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][1U]),8);
        bufp->chgCData(oldp+1439,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][2U]),8);
        bufp->chgCData(oldp+1440,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][3U]),8);
        bufp->chgCData(oldp+1441,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][0U]),4);
        bufp->chgCData(oldp+1442,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][1U]),4);
        bufp->chgCData(oldp+1443,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][2U]),4);
        bufp->chgCData(oldp+1444,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][3U]),4);
        bufp->chgCData(oldp+1445,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][0U]),4);
        bufp->chgCData(oldp+1446,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][1U]),4);
        bufp->chgCData(oldp+1447,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][2U]),4);
        bufp->chgCData(oldp+1448,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][3U]),4);
        bufp->chgCData(oldp+1449,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_addra[0]),8);
        bufp->chgCData(oldp+1450,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_addra[1]),8);
        bufp->chgBit(oldp+1451,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_wea[0]));
        bufp->chgBit(oldp+1452,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_tagv_wea[1]));
        bufp->chgBit(oldp+1453,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_idle2lookup));
        bufp->chgBit(oldp+1454,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__main_lookup2lookup));
        bufp->chgCData(oldp+1455,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_wr_en),2);
        bufp->chgBit(oldp+1456,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__req_or_inst_valid));
        bufp->chgCData(oldp+1457,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][0U]),8);
        bufp->chgCData(oldp+1458,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][0U]),4);
        bufp->chgCData(oldp+1459,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][1U]),8);
        bufp->chgCData(oldp+1460,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][1U]),4);
        bufp->chgCData(oldp+1461,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][2U]),8);
        bufp->chgCData(oldp+1462,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][2U]),4);
        bufp->chgCData(oldp+1463,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [0U][3U]),8);
        bufp->chgCData(oldp+1464,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [0U][3U]),4);
        bufp->chgCData(oldp+1465,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][0U]),8);
        bufp->chgCData(oldp+1466,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][0U]),4);
        bufp->chgCData(oldp+1467,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][1U]),8);
        bufp->chgCData(oldp+1468,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][1U]),4);
        bufp->chgCData(oldp+1469,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][2U]),8);
        bufp->chgCData(oldp+1470,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][2U]),4);
        bufp->chgCData(oldp+1471,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_addra
                                  [1U][3U]),8);
        bufp->chgCData(oldp+1472,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT__way_bank_wea
                                  [1U][3U]),4);
        bufp->chgCData(oldp+1473,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__addra),8);
        bufp->chgBit(oldp+1474,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__wea));
        bufp->chgBit(oldp+1475,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__dcache__DOT____Vcellinp__tagv_ram_way__BRA__1__KET____DOT__u__wea));
        bufp->chgBit(oldp+1476,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__dcache_req_or_inst_en));
        bufp->chgCData(oldp+1477,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][0U]),4);
        bufp->chgCData(oldp+1478,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][1U]),4);
        bufp->chgCData(oldp+1479,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][2U]),4);
        bufp->chgCData(oldp+1480,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][3U]),4);
        bufp->chgCData(oldp+1481,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][0U]),4);
        bufp->chgCData(oldp+1482,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][1U]),4);
        bufp->chgCData(oldp+1483,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][2U]),4);
        bufp->chgCData(oldp+1484,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][3U]),4);
        bufp->chgBit(oldp+1485,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_wea[0]));
        bufp->chgBit(oldp+1486,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_wea[1]));
        bufp->chgCData(oldp+1487,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_wr_en),2);
        bufp->chgCData(oldp+1488,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][0U]),4);
        bufp->chgCData(oldp+1489,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][1U]),4);
        bufp->chgCData(oldp+1490,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][2U]),4);
        bufp->chgCData(oldp+1491,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [0U][3U]),4);
        bufp->chgCData(oldp+1492,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][0U]),4);
        bufp->chgCData(oldp+1493,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][1U]),4);
        bufp->chgCData(oldp+1494,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][2U]),4);
        bufp->chgCData(oldp+1495,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_wea
                                  [1U][3U]),4);
        bufp->chgBit(oldp+1496,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__wea));
        bufp->chgBit(oldp+1497,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____Vcellinp__tagv_ram_way__BRA__1__KET____DOT__u__wea));
        bufp->chgBit(oldp+1498,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_ready_go));
        bufp->chgBit(oldp+1499,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_delay));
        bufp->chgBit(oldp+1500,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__flush_inst_go_dirt));
        bufp->chgBit(oldp+1501,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__ms_ready_go));
        bufp->chgBit(oldp+1502,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_readArbitation_fire));
        bufp->chgBit(oldp+1505,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1506,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1507,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_readArbitation_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2fU])) {
        bufp->chgBit(oldp+1508,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_full)))));
        bufp->chgBit(oldp+1509,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushCC_full)))));
        bufp->chgBit(oldp+1510,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushCC_full)))));
        bufp->chgBit(oldp+1511,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_full)))));
        bufp->chgIData(oldp+1512,((0xffffffU & (- (IData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__monoc))))),24);
        bufp->chgBit(oldp+1513,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_vsync_d));
        bufp->chgBit(oldp+1514,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__ycbcr_hsync_d));
        bufp->chgBit(oldp+1515,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__post_de_reg));
        bufp->chgBit(oldp+1516,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_vs));
        bufp->chgBit(oldp+1517,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_hs));
        bufp->chgBit(oldp+1518,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__sobel_detector_de));
        bufp->chgBit(oldp+1519,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_binarization__DOT__monoc));
        bufp->chgSData(oldp+1520,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_vsync_r1),16);
        bufp->chgSData(oldp+1521,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_href_r1),16);
        bufp->chgSData(oldp+1522,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_img_de_r1),16);
        bufp->chgCData(oldp+1523,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtrGray),3);
        bufp->chgCData(oldp+1524,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtr),3);
        bufp->chgCData(oldp+1525,((7U & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtr)))),3);
        bufp->chgBit(oldp+1526,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushCC_full));
        bufp->chgCData(oldp+1527,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtrGray),4);
        bufp->chgCData(oldp+1528,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtr),4);
        bufp->chgCData(oldp+1529,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtr)))),4);
        bufp->chgBit(oldp+1530,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_full));
        bufp->chgCData(oldp+1531,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtrGray),3);
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtr),3);
        bufp->chgCData(oldp+1533,((7U & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtr)))),3);
        bufp->chgBit(oldp+1534,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushCC_full));
        bufp->chgCData(oldp+1535,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtrGray),4);
        bufp->chgCData(oldp+1536,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtr),4);
        bufp->chgCData(oldp+1537,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtr)))),4);
        bufp->chgBit(oldp+1538,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_full));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x30U])) {
        bufp->chgBit(oldp+1539,(vlSelf->sim_top__DOT__u_soc_top__DOT__cpu_resetn));
        bufp->chgBit(oldp+1540,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_resetn));
        bufp->chgIData(oldp+1541,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_start_pc_final),32);
        bufp->chgBit(oldp+1542,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_resetn)))));
        bufp->chgBit(oldp+1543,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_1));
        bufp->chgBit(oldp+1544,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_0));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x31U])) {
        bufp->chgBit(oldp+1545,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rValid));
        bufp->chgCData(oldp+1546,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtr),4);
        bufp->chgCData(oldp+1547,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtr)))),4);
        bufp->chgCData(oldp+1548,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtrGray),4);
        bufp->chgBit(oldp+1549,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_empty)))));
        bufp->chgCData(oldp+1550,((7U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtr))),3);
        bufp->chgBit(oldp+1551,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_empty));
        bufp->chgBit(oldp+1552,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rValid)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x32U])) {
        bufp->chgBit(oldp+1553,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_start_final));
        bufp->chgBit(oldp+1554,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_rd_en));
        bufp->chgBit(oldp+1555,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_valid));
        bufp->chgBit(oldp+1556,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_result_fifo_wr_en));
        bufp->chgSData(oldp+1557,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_ptr_next),16);
        bufp->chgSData(oldp+1558,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_descent_ptr_next),16);
        bufp->chgSData(oldp+1559,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_addr_tmp),16);
        bufp->chgSData(oldp+1560,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__wr_data_tmp),16);
        bufp->chgCData(oldp+1561,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we),8);
        bufp->chgCData(oldp+1562,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[0]),7);
        bufp->chgCData(oldp+1563,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[1]),7);
        bufp->chgCData(oldp+1564,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[2]),7);
        bufp->chgCData(oldp+1565,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[3]),7);
        bufp->chgCData(oldp+1566,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[4]),7);
        bufp->chgCData(oldp+1567,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[5]),7);
        bufp->chgCData(oldp+1568,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[6]),7);
        bufp->chgCData(oldp+1569,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr[7]),7);
        bufp->chgSData(oldp+1570,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[0]),16);
        bufp->chgSData(oldp+1571,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[1]),16);
        bufp->chgSData(oldp+1572,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[2]),16);
        bufp->chgSData(oldp+1573,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[3]),16);
        bufp->chgSData(oldp+1574,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[4]),16);
        bufp->chgSData(oldp+1575,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[5]),16);
        bufp->chgSData(oldp+1576,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[6]),16);
        bufp->chgSData(oldp+1577,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata[7]),16);
        bufp->chgBit(oldp+1578,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we))));
        bufp->chgCData(oldp+1579,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [0U]),7);
        bufp->chgSData(oldp+1580,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [0U]),16);
        bufp->chgBit(oldp+1581,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                       >> 1U))));
        bufp->chgCData(oldp+1582,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [1U]),7);
        bufp->chgSData(oldp+1583,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [1U]),16);
        bufp->chgBit(oldp+1584,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                       >> 2U))));
        bufp->chgCData(oldp+1585,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [2U]),7);
        bufp->chgSData(oldp+1586,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [2U]),16);
        bufp->chgBit(oldp+1587,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                       >> 3U))));
        bufp->chgCData(oldp+1588,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [3U]),7);
        bufp->chgSData(oldp+1589,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [3U]),16);
        bufp->chgBit(oldp+1590,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                       >> 4U))));
        bufp->chgCData(oldp+1591,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [4U]),7);
        bufp->chgSData(oldp+1592,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [4U]),16);
        bufp->chgBit(oldp+1593,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                       >> 5U))));
        bufp->chgCData(oldp+1594,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [5U]),7);
        bufp->chgSData(oldp+1595,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [5U]),16);
        bufp->chgBit(oldp+1596,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                       >> 6U))));
        bufp->chgCData(oldp+1597,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [6U]),7);
        bufp->chgSData(oldp+1598,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [6U]),16);
        bufp->chgBit(oldp+1599,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_we) 
                                       >> 7U))));
        bufp->chgCData(oldp+1600,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_waddr
                                  [7U]),7);
        bufp->chgSData(oldp+1601,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__mem_wdata
                                  [7U]),16);
        bufp->chgSData(oldp+1602,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[0]),16);
        bufp->chgSData(oldp+1603,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[1]),16);
        bufp->chgSData(oldp+1604,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[2]),16);
        bufp->chgSData(oldp+1605,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[3]),16);
        bufp->chgSData(oldp+1606,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[4]),16);
        bufp->chgSData(oldp+1607,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[5]),16);
        bufp->chgSData(oldp+1608,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[6]),16);
        bufp->chgSData(oldp+1609,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in[7]),16);
        bufp->chgBit(oldp+1610,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[0]));
        bufp->chgBit(oldp+1611,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[1]));
        bufp->chgBit(oldp+1612,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[2]));
        bufp->chgBit(oldp+1613,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[3]));
        bufp->chgBit(oldp+1614,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[4]));
        bufp->chgBit(oldp+1615,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[5]));
        bufp->chgBit(oldp+1616,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[6]));
        bufp->chgBit(oldp+1617,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in[7]));
        bufp->chgSData(oldp+1618,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[0]),16);
        bufp->chgSData(oldp+1619,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[1]),16);
        bufp->chgSData(oldp+1620,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[2]),16);
        bufp->chgSData(oldp+1621,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[3]),16);
        bufp->chgSData(oldp+1622,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[4]),16);
        bufp->chgSData(oldp+1623,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[5]),16);
        bufp->chgSData(oldp+1624,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[6]),16);
        bufp->chgSData(oldp+1625,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_data_in[7]),16);
        bufp->chgBit(oldp+1626,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[0]));
        bufp->chgBit(oldp+1627,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[1]));
        bufp->chgBit(oldp+1628,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[2]));
        bufp->chgBit(oldp+1629,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[3]));
        bufp->chgBit(oldp+1630,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[4]));
        bufp->chgBit(oldp+1631,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[5]));
        bufp->chgBit(oldp+1632,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[6]));
        bufp->chgBit(oldp+1633,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__b2lr_valid_in[7]));
        bufp->chgSData(oldp+1634,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[0]),16);
        bufp->chgSData(oldp+1635,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[1]),16);
        bufp->chgSData(oldp+1636,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[2]),16);
        bufp->chgSData(oldp+1637,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[3]),16);
        bufp->chgSData(oldp+1638,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[4]),16);
        bufp->chgSData(oldp+1639,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[5]),16);
        bufp->chgSData(oldp+1640,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[6]),16);
        bufp->chgSData(oldp+1641,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in[7]),16);
        bufp->chgBit(oldp+1642,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[0]));
        bufp->chgBit(oldp+1643,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[1]));
        bufp->chgBit(oldp+1644,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[2]));
        bufp->chgBit(oldp+1645,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[3]));
        bufp->chgBit(oldp+1646,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[4]));
        bufp->chgBit(oldp+1647,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[5]));
        bufp->chgBit(oldp+1648,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[6]));
        bufp->chgBit(oldp+1649,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in[7]));
        bufp->chgSData(oldp+1650,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[0]),16);
        bufp->chgSData(oldp+1651,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[1]),16);
        bufp->chgSData(oldp+1652,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[2]),16);
        bufp->chgSData(oldp+1653,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[3]),16);
        bufp->chgSData(oldp+1654,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[4]),16);
        bufp->chgSData(oldp+1655,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[5]),16);
        bufp->chgSData(oldp+1656,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[6]),16);
        bufp->chgSData(oldp+1657,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_data_mux[7]),16);
        bufp->chgBit(oldp+1658,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[0]));
        bufp->chgBit(oldp+1659,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[1]));
        bufp->chgBit(oldp+1660,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[2]));
        bufp->chgBit(oldp+1661,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[3]));
        bufp->chgBit(oldp+1662,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[4]));
        bufp->chgBit(oldp+1663,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[5]));
        bufp->chgBit(oldp+1664,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[6]));
        bufp->chgBit(oldp+1665,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_valid_mux[7]));
        bufp->chgSData(oldp+1666,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [0U]),16);
        bufp->chgBit(oldp+1667,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [0U]));
        bufp->chgSData(oldp+1668,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [0U]),16);
        bufp->chgBit(oldp+1669,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [0U]));
        bufp->chgSData(oldp+1670,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [1U]),16);
        bufp->chgBit(oldp+1671,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [1U]));
        bufp->chgSData(oldp+1672,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [1U]),16);
        bufp->chgBit(oldp+1673,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [1U]));
        bufp->chgSData(oldp+1674,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [2U]),16);
        bufp->chgBit(oldp+1675,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [2U]));
        bufp->chgSData(oldp+1676,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [2U]),16);
        bufp->chgBit(oldp+1677,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [2U]));
        bufp->chgSData(oldp+1678,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [3U]),16);
        bufp->chgBit(oldp+1679,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [3U]));
        bufp->chgSData(oldp+1680,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [3U]),16);
        bufp->chgBit(oldp+1681,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [3U]));
        bufp->chgSData(oldp+1682,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [4U]),16);
        bufp->chgBit(oldp+1683,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [4U]));
        bufp->chgSData(oldp+1684,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [4U]),16);
        bufp->chgBit(oldp+1685,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [4U]));
        bufp->chgSData(oldp+1686,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [5U]),16);
        bufp->chgBit(oldp+1687,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [5U]));
        bufp->chgSData(oldp+1688,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [5U]),16);
        bufp->chgBit(oldp+1689,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [5U]));
        bufp->chgSData(oldp+1690,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [6U]),16);
        bufp->chgBit(oldp+1691,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [6U]));
        bufp->chgSData(oldp+1692,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [6U]),16);
        bufp->chgBit(oldp+1693,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [6U]));
        bufp->chgSData(oldp+1694,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_data_in
                                  [7U]),16);
        bufp->chgBit(oldp+1695,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__bias_valid_in
                                [7U]));
        bufp->chgSData(oldp+1696,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_data_in
                                  [7U]),16);
        bufp->chgBit(oldp+1697,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__lr_valid_in
                                [7U]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x33U])) {
        bufp->chgIData(oldp+1698,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__rsp_data_comb),32);
        bufp->chgIData(oldp+1699,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data),32);
        bufp->chgBit(oldp+1700,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__io_push_fire));
        bufp->chgBit(oldp+1701,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__io_push_fire));
        bufp->chgBit(oldp+1702,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__io_push_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x34U])) {
        bufp->chgQData(oldp+1703,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[0]),39);
        bufp->chgQData(oldp+1705,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[1]),39);
        bufp->chgQData(oldp+1707,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[2]),39);
        bufp->chgQData(oldp+1709,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[3]),39);
        bufp->chgQData(oldp+1711,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[4]),39);
        bufp->chgQData(oldp+1713,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[5]),39);
        bufp->chgQData(oldp+1715,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[6]),39);
        bufp->chgQData(oldp+1717,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__ram[7]),39);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x35U])) {
        bufp->chgCData(oldp+1719,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next),3);
        bufp->chgBit(oldp+1720,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next));
        bufp->chgBit(oldp+1721,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next));
        bufp->chgBit(oldp+1722,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next));
        bufp->chgBit(oldp+1723,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next));
        bufp->chgBit(oldp+1724,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next));
        bufp->chgBit(oldp+1725,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match));
        bufp->chgBit(oldp+1726,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start));
        bufp->chgCData(oldp+1727,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__state_next),3);
        bufp->chgBit(oldp+1728,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__s_axi_aready_next));
        bufp->chgBit(oldp+1729,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_axi_avalid_next));
        bufp->chgBit(oldp+1730,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_decerr_next));
        bufp->chgBit(oldp+1731,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_wc_valid_next));
        bufp->chgBit(oldp+1732,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_rc_valid_next));
        bufp->chgBit(oldp+1733,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__match));
        bufp->chgBit(oldp+1734,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__trans_start));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x36U])) {
        bufp->chgCData(oldp+1735,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__state_next),3);
        bufp->chgBit(oldp+1736,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_next));
        bufp->chgBit(oldp+1737,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_axi_avalid_next));
        bufp->chgBit(oldp+1738,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_decerr_next));
        bufp->chgBit(oldp+1739,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_wc_valid_next));
        bufp->chgBit(oldp+1740,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_rc_valid_next));
        bufp->chgBit(oldp+1741,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__match));
        bufp->chgBit(oldp+1742,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__trans_start));
        bufp->chgCData(oldp+1743,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__state_next),3);
        bufp->chgBit(oldp+1744,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__s_axi_aready_next));
        bufp->chgBit(oldp+1745,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_axi_avalid_next));
        bufp->chgBit(oldp+1746,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_decerr_next));
        bufp->chgBit(oldp+1747,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_wc_valid_next));
        bufp->chgBit(oldp+1748,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_rc_valid_next));
        bufp->chgBit(oldp+1749,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__match));
        bufp->chgBit(oldp+1750,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__trans_start));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x37U])) {
        bufp->chgCData(oldp+1751,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request),3);
        bufp->chgBit(oldp+1752,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_next));
        bufp->chgBit(oldp+1753,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_next));
        bufp->chgBit(oldp+1754,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_output));
        bufp->chgBit(oldp+1755,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_input_to_temp));
        bufp->chgBit(oldp+1756,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_w_temp_to_output));
        bufp->chgCData(oldp+1757,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request),4);
        bufp->chgCData(oldp+1758,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
        bufp->chgCData(oldp+1759,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x38U])) {
        bufp->chgBit(oldp+1760,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_allowin));
        bufp->chgBit(oldp+1761,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_valid));
        bufp->chgBit(oldp+1762,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_fetch));
        bufp->chgBit(oldp+1763,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_ready_go));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x39U])) {
        bufp->chgBit(oldp+1764,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next));
        bufp->chgBit(oldp+1765,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_next));
        bufp->chgBit(oldp+1766,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_output));
        bufp->chgBit(oldp+1767,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_temp));
        bufp->chgBit(oldp+1768,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_temp_to_output));
        bufp->chgBit(oldp+1769,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next));
        bufp->chgBit(oldp+1770,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_next));
        bufp->chgBit(oldp+1771,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_output));
        bufp->chgBit(oldp+1772,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_temp));
        bufp->chgBit(oldp+1773,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_temp_to_output));
        bufp->chgBit(oldp+1774,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next));
        bufp->chgBit(oldp+1775,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next)))));
        bufp->chgBit(oldp+1776,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next));
        bufp->chgBit(oldp+1777,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next)))));
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__io_push_fire));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__io_push_fire));
        bufp->chgBit(oldp+1780,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__io_push_fire));
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__io_push_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3aU])) {
        bufp->chgIData(oldp+1782,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_data),24);
        bufp->chgBit(oldp+1783,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_vsync));
        bufp->chgBit(oldp+1784,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_href));
        bufp->chgBit(oldp+1785,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_de));
        bufp->chgIData(oldp+1786,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data),24);
        bufp->chgBit(oldp+1787,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_vsync));
        bufp->chgBit(oldp+1788,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href));
        bufp->chgBit(oldp+1789,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_de));
        bufp->chgIData(oldp+1790,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_data),24);
        bufp->chgBit(oldp+1791,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_vsync));
        bufp->chgBit(oldp+1792,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_href));
        bufp->chgBit(oldp+1793,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_de));
        bufp->chgCData(oldp+1794,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_data 
                                            >> 0x10U))),8);
        bufp->chgBit(oldp+1795,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgCData(oldp+1796,((0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_data)),8);
        bufp->chgCData(oldp+1797,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_data 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1798,((0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data)),8);
        bufp->chgBit(oldp+1799,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgCData(oldp+1800,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1801,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1802,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_data 
                                            >> 0x10U))),8);
        bufp->chgBit(oldp+1803,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgBit(oldp+1806,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgBit(oldp+1807,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
        bufp->chgBit(oldp+1809,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3bU])) {
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_ready));
        bufp->chgBit(oldp+1811,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_fire));
        bufp->chgBit(oldp+1812,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_readArbitation_fire));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3cU])) {
        bufp->chgIData(oldp+1813,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1814,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1815,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__0__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+1816,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1817,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1818,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__1__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+1819,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1820,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1821,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__2__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+1822,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1823,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1824,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__3__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+1825,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1826,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1827,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__4__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+1828,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1829,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1830,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__5__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+1831,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1832,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1833,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__6__KET____DOT__bias_unit_inst__DOT__add_overflow));
        bufp->chgIData(oldp+1834,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__sum_full),17);
        bufp->chgSData(oldp+1835,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__result),16);
        bufp->chgBit(oldp+1836,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_inst__DOT__vpu_lane__BRA__7__KET____DOT__bias_unit_inst__DOT__add_overflow));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3dU])) {
        bufp->chgBit(oldp+1837,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_valid));
        bufp->chgSData(oldp+1838,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_addr),14);
        bufp->chgIData(oldp+1839,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_data),32);
        bufp->chgIData(oldp+1840,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc),32);
        bufp->chgBit(oldp+1841,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_add_entry));
        bufp->chgBit(oldp+1842,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_pre_error));
        bufp->chgBit(oldp+1843,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_target_error));
        bufp->chgBit(oldp+1844,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_orien));
        bufp->chgIData(oldp+1845,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_right_target),32);
        bufp->chgWData(oldp+1846,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_to_es_bus),353);
        bufp->chgWData(oldp+1858,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_to_ms_bus),425);
        bufp->chgQData(oldp+1872,((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush_target)))),33);
        bufp->chgCData(oldp+1874,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc 
                                            >> 4U))),8);
        bufp->chgCData(oldp+1875,((0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc)),4);
        bufp->chgIData(oldp+1876,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc 
                                   >> 0xdU)),19);
        bufp->chgBit(oldp+1877,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_pc 
                                       >> 0xcU))));
        bufp->chgCData(oldp+1878,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][0U]),8);
        bufp->chgCData(oldp+1879,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][1U]),8);
        bufp->chgCData(oldp+1880,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][2U]),8);
        bufp->chgCData(oldp+1881,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][3U]),8);
        bufp->chgCData(oldp+1882,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][0U]),8);
        bufp->chgCData(oldp+1883,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][1U]),8);
        bufp->chgCData(oldp+1884,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][2U]),8);
        bufp->chgCData(oldp+1885,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][3U]),8);
        bufp->chgCData(oldp+1886,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_addra[0]),8);
        bufp->chgCData(oldp+1887,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_tagv_addra[1]),8);
        bufp->chgCData(oldp+1888,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_offset),4);
        bufp->chgCData(oldp+1889,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__real_index),8);
        bufp->chgCData(oldp+1890,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][0U]),8);
        bufp->chgCData(oldp+1891,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][1U]),8);
        bufp->chgCData(oldp+1892,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][2U]),8);
        bufp->chgCData(oldp+1893,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [0U][3U]),8);
        bufp->chgCData(oldp+1894,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][0U]),8);
        bufp->chgCData(oldp+1895,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][1U]),8);
        bufp->chgCData(oldp+1896,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][2U]),8);
        bufp->chgCData(oldp+1897,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__way_bank_addra
                                  [1U][3U]),8);
        bufp->chgCData(oldp+1898,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT____Vcellinp__tagv_ram_way__BRA__0__KET____DOT__u__addra),8);
        bufp->chgBit(oldp+1899,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ds_ready_go));
        bufp->chgBit(oldp+1900,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush));
        bufp->chgIData(oldp+1901,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__btb_pre_error_flush_target),32);
        bufp->chgIData(oldp+1902,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[1U]),32);
        bufp->chgIData(oldp+1903,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[1U]),32);
        bufp->chgBit(oldp+1904,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_eq_rd));
        bufp->chgBit(oldp+1905,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_sign));
        bufp->chgBit(oldp+1906,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__rj_lt_rd_unsign));
        bufp->chgBit(oldp+1907,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[2U])));
        bufp->chgBit(oldp+1908,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[2U])));
        bufp->chgIData(oldp+1909,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_h6797524a__0[0U]),32);
        bufp->chgIData(oldp+1910,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_haa014223__0[0U]),32);
        bufp->chgBit(oldp+1911,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__pfs_excp_adef));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3eU])) {
        bufp->chgBit(oldp+1912,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_vsync));
        bufp->chgBit(oldp+1913,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_href));
        bufp->chgBit(oldp+1914,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_de));
        bufp->chgIData(oldp+1915,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_data),24);
        bufp->chgBit(oldp+1916,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__frame_active_r));
        bufp->chgBit(oldp+1917,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_vsync_r) 
                                       >> 2U))));
        bufp->chgBit(oldp+1918,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_href_r) 
                                       >> 2U))));
        bufp->chgBit(oldp+1919,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_de_r) 
                                       >> 2U))));
        bufp->chgCData(oldp+1920,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_data 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1921,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_data 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1922,((0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__isp_data)),8);
        bufp->chgCData(oldp+1923,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_vsync_r),3);
        bufp->chgCData(oldp+1924,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_href_r),3);
        bufp->chgCData(oldp+1925,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_de_r),3);
        bufp->chgBit(oldp+1926,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_vs));
        bufp->chgBit(oldp+1927,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_hs));
        bufp->chgBit(oldp+1928,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__gaussian_de));
        bufp->chgBit(oldp+1929,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_R) 
                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_B) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_G)))));
        bufp->chgBit(oldp+1930,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_R) 
                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_B) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_G)))));
        bufp->chgBit(oldp+1931,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_R) 
                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_B) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_G)))));
        bufp->chgCData(oldp+1932,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_vsync_r),4);
        bufp->chgCData(oldp+1933,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_href_r),4);
        bufp->chgCData(oldp+1934,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__matrix_img_de_r),4);
        bufp->chgBit(oldp+1935,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_R));
        bufp->chgBit(oldp+1936,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_R));
        bufp->chgBit(oldp+1937,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_R));
        bufp->chgBit(oldp+1938,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_G));
        bufp->chgBit(oldp+1939,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_G));
        bufp->chgBit(oldp+1940,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_G));
        bufp->chgBit(oldp+1941,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_vsync_B));
        bufp->chgBit(oldp+1942,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_href_B));
        bufp->chgBit(oldp+1943,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__post_img_de_B));
        bufp->chgCData(oldp+1944,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_vsync_r1),4);
        bufp->chgCData(oldp+1945,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_href_r1),4);
        bufp->chgCData(oldp+1946,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__matrix_img_de_r1),4);
        bufp->chgCData(oldp+1947,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_vsync_r1),4);
        bufp->chgCData(oldp+1948,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_href_r1),4);
        bufp->chgCData(oldp+1949,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__matrix_img_de_r1),4);
        bufp->chgCData(oldp+1950,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_vsync_r1),4);
        bufp->chgCData(oldp+1951,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_href_r1),4);
        bufp->chgCData(oldp+1952,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__matrix_img_de_r1),4);
        bufp->chgBit(oldp+1953,((1U & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_vsync_r2) 
                                        & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_vsync_r2) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_vsync_r2))) 
                                       >> 1U))));
        bufp->chgBit(oldp+1954,((1U & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_href_r2) 
                                        & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_href_r2) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_href_r2))) 
                                       >> 1U))));
        bufp->chgBit(oldp+1955,((1U & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_de_r2) 
                                        & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_de_r2) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_de_r2))) 
                                       >> 1U))));
        bufp->chgBit(oldp+1956,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_R) 
                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_B) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_G)))));
        bufp->chgBit(oldp+1957,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_R) 
                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_B) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_G)))));
        bufp->chgBit(oldp+1958,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_R) 
                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_B) 
                                    & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_G)))));
        bufp->chgBit(oldp+1959,((1U & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_vsync_r2) 
                                        & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_vsync_r2) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_vsync_r2))) 
                                       >> 1U))));
        bufp->chgBit(oldp+1960,((1U & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_href_r2) 
                                        & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_href_r2) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_href_r2))) 
                                       >> 1U))));
        bufp->chgBit(oldp+1961,((1U & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_de_r2) 
                                        & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_de_r2) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_de_r2))) 
                                       >> 1U))));
        bufp->chgBit(oldp+1962,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_R));
        bufp->chgBit(oldp+1963,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_R));
        bufp->chgBit(oldp+1964,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_R));
        bufp->chgBit(oldp+1965,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_G));
        bufp->chgBit(oldp+1966,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_G));
        bufp->chgBit(oldp+1967,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_G));
        bufp->chgBit(oldp+1968,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_vsync_B));
        bufp->chgBit(oldp+1969,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_href_B));
        bufp->chgBit(oldp+1970,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__post_img_de_B));
        bufp->chgCData(oldp+1971,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_vsync_r1),4);
        bufp->chgCData(oldp+1972,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_href_r1),4);
        bufp->chgCData(oldp+1973,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_img_de_r1),4);
        bufp->chgCData(oldp+1974,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_vsync_r1),4);
        bufp->chgCData(oldp+1975,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_href_r1),4);
        bufp->chgCData(oldp+1976,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_img_de_r1),4);
        bufp->chgCData(oldp+1977,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_vsync_r1),4);
        bufp->chgCData(oldp+1978,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_href_r1),4);
        bufp->chgCData(oldp+1979,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_img_de_r1),4);
        bufp->chgBit(oldp+1980,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_vsync_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1981,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_href_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1982,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_de_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1983,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_vsync_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1984,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_href_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1985,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_de_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1986,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_vsync_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1987,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_href_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1988,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_de_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1989,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_vsync_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1990,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_href_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1991,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_de_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1992,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_vsync_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1993,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_href_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1994,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_de_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1995,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_vsync_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1996,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_href_r2) 
                                       >> 1U))));
        bufp->chgBit(oldp+1997,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_de_r2) 
                                       >> 1U))));
        bufp->chgCData(oldp+1998,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_vsync_r2),2);
        bufp->chgCData(oldp+1999,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_href_r2),2);
        bufp->chgCData(oldp+2000,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_de_r2),2);
        bufp->chgCData(oldp+2001,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_vsync_r2),2);
        bufp->chgCData(oldp+2002,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_href_r2),2);
        bufp->chgCData(oldp+2003,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_de_r2),2);
        bufp->chgCData(oldp+2004,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_vsync_r2),2);
        bufp->chgCData(oldp+2005,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_href_r2),2);
        bufp->chgCData(oldp+2006,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_de_r2),2);
        bufp->chgCData(oldp+2007,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_vsync_r2),2);
        bufp->chgCData(oldp+2008,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_href_r2),2);
        bufp->chgCData(oldp+2009,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_de_r2),2);
        bufp->chgCData(oldp+2010,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_vsync_r2),2);
        bufp->chgCData(oldp+2011,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_href_r2),2);
        bufp->chgCData(oldp+2012,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_de_r2),2);
        bufp->chgCData(oldp+2013,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_vsync_r2),2);
        bufp->chgCData(oldp+2014,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_href_r2),2);
        bufp->chgCData(oldp+2015,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_de_r2),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3fU])) {
        bufp->chgBit(oldp+2016,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2017,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2018,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2019,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2020,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2021,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2022,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2023,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2024,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2025,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2026,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2027,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2028,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2029,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x40U])) {
        bufp->chgBit(oldp+2030,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2031,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2032,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_wenb));
        bufp->chgBit(oldp+2033,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_renb));
        bufp->chgBit(oldp+2034,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo4_wenb));
        bufp->chgBit(oldp+2035,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo4_renb));
        bufp->chgBit(oldp+2036,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2037,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2038,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2039,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2040,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2041,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2042,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2043,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2044,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2045,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2046,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2047,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2048,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2049,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2050,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2051,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2052,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2053,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2054,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2055,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2056,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2057,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2058,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2059,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2060,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2061,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2062,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2063,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2064,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2065,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2066,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2067,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2068,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2069,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2070,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2071,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
        bufp->chgBit(oldp+2072,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
        bufp->chgBit(oldp+2073,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
        bufp->chgBit(oldp+2074,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x41U])) {
        bufp->chgWData(oldp+2075,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rdata),256);
        bufp->chgIData(oldp+2083,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rdata_mux),32);
        bufp->chgIData(oldp+2084,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rdata_mux),32);
        bufp->chgIData(oldp+2085,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rdata_mux),32);
        bufp->chgIData(oldp+2086,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x42U])) {
        bufp->chgBit(oldp+2087,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_allowin));
        bufp->chgBit(oldp+2088,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__fetch_en));
        bufp->chgBit(oldp+2089,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__btb_operate_en));
        bufp->chgBit(oldp+2090,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__inst_valid));
        bufp->chgBit(oldp+2091,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__req_or_inst_valid));
        bufp->chgBit(oldp+2092,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__fs_allowin));
        bufp->chgBit(oldp+2093,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__to_fs_valid));
        bufp->chgBit(oldp+2094,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__if_stage__DOT__pfs_ready_go));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x43U])) {
        bufp->chgBit(oldp+2095,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__fifo_rd_en));
        bufp->chgIData(oldp+2096,((0xffffffU & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__per_img_gray) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__per_img_gray) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__per_img_gray))))),24);
        bufp->chgIData(oldp+2097,((0xffffffU & (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__post_img_gray) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__post_img_gray) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__post_img_gray))))),24);
        bufp->chgCData(oldp+2098,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__per_img_gray),8);
        bufp->chgCData(oldp+2099,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_gamma__DOT__post_img_gray),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x44U])) {
        bufp->chgBit(oldp+2100,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2101,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2102,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2103,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2104,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u3_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2105,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2106,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2107,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2108,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2109,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2110,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2111,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2112,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2113,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2114,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2115,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2116,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2117,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2118,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2119,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2120,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2121,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2122,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2123,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2124,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2125,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2126,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2127,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2128,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2129,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2130,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2131,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2132,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2133,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2134,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2135,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2136,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2137,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2138,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2139,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2140,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2141,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2142,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2143,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid));
        bufp->chgBit(oldp+2144,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid));
        bufp->chgBit(oldp+2145,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid));
    }
    bufp->chgBit(oldp+2146,(vlSelf->sim_top__DOT__clk));
    bufp->chgBit(oldp+2147,(vlSelf->sim_top__DOT__reset));
    bufp->chgCData(oldp+2148,(vlSelf->sim_top__DOT__touch_btn),4);
    bufp->chgIData(oldp+2149,(vlSelf->sim_top__DOT__dip_sw),32);
    bufp->chgIData(oldp+2150,(vlSelf->sim_top__DOT__base_ram_data),32);
    bufp->chgIData(oldp+2151,(vlSelf->sim_top__DOT__ext_ram_data),32);
    bufp->chgBit(oldp+2152,(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__clk_sim));
    bufp->chgBit(oldp+2153,(vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn));
    bufp->chgCData(oldp+2154,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__uart0_int) 
                                << 1U) | (0U != (vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_state 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_en)))),8);
    bufp->chgBit(oldp+2155,((0U != (vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_state 
                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_en))));
    bufp->chgIData(oldp+2156,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rvalid)
                                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rdata
                                : 0U)),32);
    bufp->chgCData(oldp+2157,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_bid),4);
    bufp->chgCData(oldp+2158,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_rid),4);
    bufp->chgBit(oldp+2159,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd) 
                             & VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count))));
    bufp->chgBit(oldp+2160,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_fifo_wr_en));
    bufp->chgBit(oldp+2161,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__sim_clk__DOT__u_rst_sys__rst_n_in));
    bufp->chgCData(oldp+2162,(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_sys__DOT__delay),2);
    bufp->chgBit(oldp+2163,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__sys_resetn)))));
    bufp->chgCData(oldp+2164,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_rValid) 
                                << 2U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_awvalid_reg) 
                                           << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_rValid)))),3);
    bufp->chgCData(oldp+2165,(((4U & ((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushCC_full)) 
                                      << 2U)) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_wr_inst__DOT__m_axi_bready_reg) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushCC_full)))))),3);
    bufp->chgCData(oldp+2166,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_rValid) 
                                << 2U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_arvalid_reg) 
                                           << 1U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_rValid)))),3);
    bufp->chgCData(oldp+2167,(((4U & ((~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_full)) 
                                      << 2U)) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_dma__DOT__axi_dma_rd_inst__DOT__m_axi_rready_reg) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_full)))))),3);
    bufp->chgIData(oldp+2168,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__i),32);
    bufp->chgIData(oldp+2169,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__j),32);
    bufp->chgCData(oldp+2170,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbab125fe__0) 
                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                    [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next))) 
                                << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hdee7e73e__0) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                             [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next))))),2);
    bufp->chgCData(oldp+2171,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_start),2);
    bufp->chgSData(oldp+2172,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_next),9);
    bufp->chgCData(oldp+2173,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__grant_encoded_next),4);
    bufp->chgSData(oldp+2174,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT__mask_next),9);
    bufp->chgBit(oldp+2175,((1U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_reg) 
                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg) 
                                          & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rvalid_mux)))) 
                                   | (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_full))))));
    bufp->chgCData(oldp+2176,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_start),2);
    bufp->chgSData(oldp+2177,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_next),9);
    bufp->chgCData(oldp+2178,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__grant_encoded_next),4);
    bufp->chgSData(oldp+2179,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT__mask_next),9);
    bufp->chgIData(oldp+2180,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__i),32);
    bufp->chgIData(oldp+2181,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__j),32);
    bufp->chgCData(oldp+2182,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_hbab125fe__0) 
                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_m_reg
                                    [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_select_next))) 
                                << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_hdee7e73e__0) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_m_reg
                                             [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_select_next))))),2);
    bufp->chgCData(oldp+2183,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_trans_start),2);
    bufp->chgSData(oldp+2184,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_next),9);
    bufp->chgCData(oldp+2185,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__grant_encoded_next),4);
    bufp->chgSData(oldp+2186,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT__mask_next),9);
    bufp->chgBit(oldp+2187,((1U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_reg) 
                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_reg) 
                                          & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rvalid_mux)))) 
                                   | (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_full))))));
    bufp->chgBit(oldp+2188,((1U & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wvalid_reg) 
                                       | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wvalid_reg) 
                                          & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__s_axi_wvalid_mux)))) 
                                   | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready)))));
    bufp->chgIData(oldp+2189,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__i),32);
    bufp->chgIData(oldp+2190,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__j),32);
    bufp->chgCData(oldp+2191,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hbab125fe__0) 
                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                    [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next))) 
                                << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_hdee7e73e__0) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_m_reg
                                             [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__m_select_next))))),2);
    bufp->chgCData(oldp+2192,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_start),2);
    bufp->chgSData(oldp+2193,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_next),9);
    bufp->chgCData(oldp+2194,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__grant_encoded_next),4);
    bufp->chgSData(oldp+2195,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT__mask_next),9);
    bufp->chgCData(oldp+2196,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_start),2);
    bufp->chgSData(oldp+2197,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_next),9);
    bufp->chgCData(oldp+2198,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__grant_encoded_next),4);
    bufp->chgSData(oldp+2199,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT__mask_next),9);
    bufp->chgIData(oldp+2200,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__i),32);
    bufp->chgIData(oldp+2201,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__j),32);
    bufp->chgCData(oldp+2202,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_hbab125fe__0) 
                                 & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_m_reg
                                    [1U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_select_next))) 
                                << 1U) | ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_hdee7e73e__0) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_m_reg
                                             [0U] == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__m_select_next))))),2);
    bufp->chgCData(oldp+2203,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_trans_start),2);
    bufp->chgSData(oldp+2204,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_next),9);
    bufp->chgCData(oldp+2205,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__grant_encoded_next),4);
    bufp->chgSData(oldp+2206,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT__mask_next),9);
    bufp->chgIData(oldp+2207,(((0x400000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr)
                                ? vlSelf->sim_top__DOT__ext_ram_data
                                : vlSelf->sim_top__DOT__base_ram_data)),32);
    bufp->chgIData(oldp+2208,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__rdata_d),32);
    bufp->chgBit(oldp+2209,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hfa07d607__0)) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT____VdfgTmp_hfea85cf8__0))));
    bufp->chgQData(oldp+2210,((((QData)((IData)((1U 
                                                 & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc000400U 
                                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                                                            | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_div_enable)))))) 
                                << 0x26U) | (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_enable)) 
                                              << 0x25U) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_data)))))),39);
    bufp->chgQData(oldp+2212,((((QData)((IData)((1U 
                                                 & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ms_to_ws_valid)) 
                                                    & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                       >> 6U))))) 
                                << 0x26U) | (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_enable)) 
                                              << 0x25U) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data)))))),39);
    bufp->chgBit(oldp+2214,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_req)) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_rd_rdy))));
    bufp->chgBit(oldp+2215,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
                             & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd)) 
                                | VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)))));
    bufp->chgBit(oldp+2216,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_data_ok))));
    bufp->chgBit(oldp+2217,(((1U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icache__DOT__main_state)) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__icacop_op_en))));
    bufp->chgBit(oldp+2218,(((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
                                 & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd)) 
                                    | VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)))) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req))));
    bufp->chgBit(oldp+2219,((1U & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ms_to_ws_valid)) 
                                   & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 6U)))));
    bufp->chgIData(oldp+2220,(((1U & (IData)(((((- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_rdcntvl_w))) 
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
                                       & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__ds_timer_64 
                                                  >> 0x20U))) 
                                      | ((IData)((0x1ffffffffULL 
                                                  & (- (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__dst_is_rj))))) 
                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__csr_tid)))
                                : ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__inst_sc_w)
                                    ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_csr__DOT__llbit)
                                    : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__rd_csr_data))),32);
    bufp->chgBit(oldp+2221,((VL_LTES_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd))));
    bufp->chgIData(oldp+2222,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__error_code_reg) 
                                << 0x10U) | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_count_reg) 
                                              << 8U) 
                                             | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_overflow_reg) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__result_full_reg) 
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
                                                               >> 1U))))))))),32);
    bufp->chgIData(oldp+2223,(((0x4000U >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__read_pointer))
                                ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__mem
                               [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__read_pointer]
                                : 0U)),24);
    bufp->chgSData(oldp+2224,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__u_frame_fifo__DOT__read_pointer),15);
    bufp->chgBit(oldp+2225,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__fifo_empty)) 
                             & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_AXI2Video__DOT__fifo_rd_en))));
    bufp->chgCData(oldp+2226,(((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_de_r))
                                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__img_Cb_r1)
                                : 0U)),8);
    bufp->chgCData(oldp+2227,(((4U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__per_img_de_r))
                                ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_RGB_to_gray__DOT__u_RBG888_to_gray__DOT__img_Cr_r1)
                                : 0U)),8);
    bufp->chgBit(oldp+2228,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_valid) 
                             | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_valid_in_1))));
    bufp->chgCData(oldp+2229,(((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_valid) 
                                 | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_valid_in_1)) 
                                << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__ub_wr_host_valid_in_0))),8);
    bufp->chgCData(oldp+2230,((7U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushCC_pushPtr) 
                                     - ((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))))))),3);
    bufp->chgBit(oldp+2231,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_1));
    bufp->chgCData(oldp+2232,((0xfU & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushCC_pushPtr) 
                                       - ((8U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                          | ((4U & 
                                              (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (VL_REDXOR_4(
                                                                (0xeU 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)))))))),4);
    bufp->chgCData(oldp+2233,((7U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtr) 
                                     - ((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))))))),3);
    bufp->chgCData(oldp+2234,((7U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushCC_pushPtr) 
                                     - ((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))))))),3);
    bufp->chgCData(oldp+2235,((0xfU & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtr) 
                                       - ((8U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                          | ((4U & 
                                              (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (VL_REDXOR_4(
                                                                (0xeU 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)))))))),4);
    bufp->chgBit(oldp+2236,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_0));
    bufp->chgBit(oldp+2237,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_1));
    bufp->chgCData(oldp+2238,((7U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushCC_pushPtr) 
                                     - ((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))))))),3);
    bufp->chgBit(oldp+2239,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_1));
    bufp->chgCData(oldp+2240,((0xfU & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushCC_pushPtr) 
                                       - ((8U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                          | ((4U & 
                                              (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (VL_REDXOR_4(
                                                                (0xeU 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1)))))))),4);
    bufp->chgBit(oldp+2241,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__bufferCC_12__DOT__buffers_0));
    bufp->chgBit(oldp+2242,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__bufferCC_12__DOT__buffers_0));
    bufp->chgCData(oldp+2243,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+2244,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+2245,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+2246,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2247,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2248,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2249,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+2250,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2251,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2252,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2253,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2254,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2255,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2256,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2257,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2258,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2259,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2260,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2261,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+2262,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+2263,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+2264,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2265,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2266,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2267,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+2268,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2269,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2270,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2271,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2272,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2273,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2274,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2275,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2276,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2277,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2278,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2279,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+2280,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+2281,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+2282,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2283,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2284,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2285,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+2286,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2287,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2288,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2289,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2290,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2291,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2292,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2293,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2294,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2295,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2296,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2297,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+2298,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+2299,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+2300,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2301,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2302,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2303,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+2304,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2305,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2306,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2307,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2308,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2309,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2310,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2311,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2312,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2313,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2314,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2315,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+2316,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+2317,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+2318,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2319,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2320,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2321,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+2322,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2323,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2324,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                     [1U]))),3);
    bufp->chgCData(oldp+2325,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2326,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2327,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2328,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2329,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+2330,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2331,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+2332,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+2333,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+2334,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+2335,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+2336,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                             [1U])));
    bufp->chgCData(oldp+2337,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                              [1U]),2);
    bufp->chgCData(oldp+2338,((7U & ((IData)(1U) << 
                                     vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                     [1U]))),3);
}
