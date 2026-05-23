// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_WallaceTreeBase.h"
#include "Vsim_top__Syms.h"

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs__0\n"); );
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)));
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                              | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                              | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
          >> 1U));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
          >> 0xaU));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->COut = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                       << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                    << 0xdU) | (0xffffe000U 
                                                & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                   << 2U)))) 
                     | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                        << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                        << 0xcU) & 
                                       (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                         << 0xcU) | 
                                        (0xfffff000U 
                                         & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                            << 2U)))) 
                                      | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                         << 0xcU)) 
                                     | ((0x800U & (
                                                   (0xfffff800U 
                                                    & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                        << 2U) 
                                                       & ((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x180U 
                                                                    & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry))) 
                                                          << 0xbU))) 
                                                   | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                      << 0xbU))) 
                                        | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                              & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                 | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                             | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                            << 0xaU) 
                                           | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                 & (IData)(
                                                           (0U 
                                                            != 
                                                            (0x60U 
                                                             & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                                | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                               << 9U) 
                                              | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                    & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                       | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                   | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                  << 8U) 
                                                 | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                       << 7U) 
                                                      & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                          << 7U) 
                                                         | (0xffffff80U 
                                                            & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                               << 6U)))) 
                                                     | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                        << 7U)) 
                                                    | ((0x40U 
                                                        & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                             & (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x18U 
                                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry)))) 
                                                            | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                           << 6U)) 
                                                       | ((0x20U 
                                                           & ((0xffffffe0U 
                                                               & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                                   << 3U) 
                                                                  & ((0xffffffe0U 
                                                                      & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                                         << 4U)) 
                                                                     | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__SecStageCarry 
                                                                        << 5U)))) 
                                                              | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                 << 5U))) 
                                                          | ((0x10U 
                                                              & ((0xffff0U 
                                                                  & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                                      >> 0xcU) 
                                                                     & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                                        << 4U))) 
                                                                 | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                    << 4U))) 
                                                             | ((8U 
                                                                 & ((0x3ffff8U 
                                                                     & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                                         >> 0xaU) 
                                                                        & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                                           << 3U))) 
                                                                    | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                       << 3U))) 
                                                                | ((4U 
                                                                    & ((0xfffffcU 
                                                                        & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                                            >> 8U) 
                                                                           & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                                              << 2U))) 
                                                                       | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                          << 2U))) 
                                                                   | ((2U 
                                                                       & ((0x3fffffeU 
                                                                           & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                                               >> 6U) 
                                                                              & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData))) 
                                                                                << 1U))) 
                                                                          | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                             << 1U))) 
                                                                      | (1U 
                                                                         & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                                              >> 4U) 
                                                                             & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__firs__InData)))) 
                                                                            | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__0\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h208fca7d__0;
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)));
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
          >> 0xaU));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h208fca7d__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__firs.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h208fca7d__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h780b2c61__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h780b2c61__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h780b2c61__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h4f9be9f8__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h4f9be9f8__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h4f9be9f8__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h51b35ef0__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h51b35ef0__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h51b35ef0__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h4733398a__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h4733398a__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h4733398a__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_hfa28dd9d__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_hfa28dd9d__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_hfa28dd9d__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h99f44f41__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h99f44f41__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h99f44f41__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h53bef93b__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h53bef93b__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h53bef93b__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_ha19af374__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_ha19af374__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_ha19af374__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_hf1cb8e50__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_hf1cb8e50__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_hf1cb8e50__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_hda1081ae__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_hda1081ae__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_hda1081ae__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h9b845e52__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h9b845e52__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h9b845e52__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_heddd4ed2__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_heddd4ed2__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_heddd4ed2__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h8d6752f7__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h8d6752f7__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h8d6752f7__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_hf4e957e9__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_hf4e957e9__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_hf4e957e9__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h1bd25191__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h1bd25191__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h1bd25191__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_hc5628e6d__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_hc5628e6d__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_hc5628e6d__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_ha451a6eb__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_ha451a6eb__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_ha451a6eb__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h612eb847__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h612eb847__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h612eb847__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_h6499959f__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_h6499959f__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_h6499959f__0;
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__0(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__0\n"); );
    // Body
    vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData)));
    vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData)));
    vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData)));
    vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData)));
    vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData)));
    vlSelf->__Vcellinp__second4__A = (1U & ((IData)(
                                                    (0x4000U 
                                                     == 
                                                     (0x1c000U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x8000U 
                                                        == 
                                                        (0x1c000U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 0x10U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__A = (1U & ((IData)(
                                                    (0x20U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x40U 
                                                        == 
                                                        (0xe0U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 7U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__C = (1U & ((IData)(
                                                    (0x100U 
                                                     == 
                                                     (0x700U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x200U 
                                                        == 
                                                        (0x700U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 0xaU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second4__B = (1U & ((IData)(
                                                    (0x800U 
                                                     == 
                                                     (0x3800U 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (0x1000U 
                                                        == 
                                                        (0x3800U 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 0xdU) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__second3__B = (1U & ((IData)(
                                                    (4U 
                                                     == 
                                                     (0x1cU 
                                                      & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                            | ((IData)(
                                                       (8U 
                                                        == 
                                                        (0x1cU 
                                                         & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                               | ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 4U) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                     | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second4__B) & (IData)(vlSelf->__Vcellinp__second4__C));
    vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__second3__B) & 
         (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
          >> 1U));
    vlSelf->__Vcellinp__third2__A = (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                      & ((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                         & (IData)(vlSelf->__Vcellinp__second4__C))) 
                                     | (((~ (IData)(vlSelf->__Vcellinp__second4__A)) 
                                         & ((~ (IData)(vlSelf->__Vcellinp__second4__C)) 
                                            & (IData)(vlSelf->__Vcellinp__second4__B))) 
                                        | ((IData)(vlSelf->__Vcellinp__second4__A) 
                                           & (((~ (IData)(vlSelf->__Vcellinp__second4__B)) 
                                               & (~ (IData)(vlSelf->__Vcellinp__second4__C))) 
                                              | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__third2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                               & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__second3__A)) 
                                               & ((~ 
                                                   (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                    >> 1U)) 
                                                  & (IData)(vlSelf->__Vcellinp__second3__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__second3__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__second3__B)) 
                                                     & (~ 
                                                        (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                         >> 1U))) 
                                                    | (IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0))))));
}

VL_INLINE_OPT void Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__1(Vsim_top_WallaceTreeBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_WallaceTreeBase___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__1\n"); );
    // Init
    SData/*31:0*/ __Vtemp_hb292318e__0;
    // Body
    vlSelf->sixth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))));
    vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))));
    vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))));
    vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))));
    vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0 = (IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))));
    vlSelf->__Vcellinp__fifth1__B = (1U & ((IData)(
                                                   (0x80U 
                                                    == 
                                                    (0x380U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (0x100U 
                                                       == 
                                                       (0x380U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                  >> 9U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x180U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third1__A = (1U & ((IData)(
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                           | ((IData)(
                                                      (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                              | (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                  >> 2U) 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__Vcellinp__third2__C = (1U & (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData) 
                                            & (IData)(
                                                      (8U 
                                                       == 
                                                       (0x18U 
                                                        & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                           | (((~ vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData) 
                                               & (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                              | (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                 & ((IData)(
                                                            (0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                                   & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                      >> 0xbU));
    vlSelf->__Vcellinp__fourth2__B = (1U & (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                             & (IData)(
                                                       (0x20U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                            | (((~ (IData)(vlSelf->__Vcellinp__third1__A)) 
                                                & (IData)(
                                                          (0x40U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                               | ((IData)(vlSelf->__Vcellinp__third1__A) 
                                                  & ((IData)(
                                                             (0U 
                                                              == 
                                                              (0x60U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                                     | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0 = ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                   & (IData)(vlSelf->__Vcellinp__third2__C));
    vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0 = 
        ((IData)(vlSelf->__Vcellinp__fourth2__B) & 
         ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
          >> 0xaU));
    vlSelf->__Vcellinp__fourth2__A = (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                       & ((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                          & (IData)(vlSelf->__Vcellinp__third2__C))) 
                                      | (((~ (IData)(vlSelf->__Vcellinp__third2__A)) 
                                          & ((~ (IData)(vlSelf->__Vcellinp__third2__C)) 
                                             & (IData)(vlSelf->__Vcellinp__third2__B))) 
                                         | ((IData)(vlSelf->__Vcellinp__third2__A) 
                                            & (((~ (IData)(vlSelf->__Vcellinp__third2__B)) 
                                                & (~ (IData)(vlSelf->__Vcellinp__third2__C))) 
                                               | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)))));
    vlSelf->__Vcellinp__fifth1__A = (1U & (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                            & ((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                               & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                  >> 0xaU))) 
                                           | (((~ (IData)(vlSelf->__Vcellinp__fourth2__A)) 
                                               & ((~ 
                                                   ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSelf->__Vcellinp__fourth2__B))) 
                                              | ((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                 & (((~ (IData)(vlSelf->__Vcellinp__fourth2__B)) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                         >> 0xaU))) 
                                                    | (IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0))))));
    vlSelf->__PVT__FifSig = (1U & (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                    & ((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                       & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                          >> 0xbU))) 
                                   | (((~ (IData)(vlSelf->__Vcellinp__fifth1__A)) 
                                       & ((~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                              >> 0xbU)) 
                                          & (IData)(vlSelf->__Vcellinp__fifth1__B))) 
                                      | ((IData)(vlSelf->__Vcellinp__fifth1__A) 
                                         & (((~ (IData)(vlSelf->__Vcellinp__fifth1__B)) 
                                             & (~ ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                   >> 0xbU))) 
                                            | (IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0))))));
    __Vtemp_hb292318e__0 = (((((IData)(vlSelf->__Vcellinp__fifth1__A) 
                               << 0xdU) & (((IData)(vlSelf->__Vcellinp__fifth1__B) 
                                            << 0xdU) 
                                           | (0xffffe000U 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                 << 2U)))) 
                             | ((IData)(vlSelf->fifth1__DOT____VdfgTmp_h99ddda1a__0) 
                                << 0xdU)) | (((((IData)(vlSelf->__Vcellinp__fourth2__A) 
                                                << 0xcU) 
                                               & (((IData)(vlSelf->__Vcellinp__fourth2__B) 
                                                   << 0xcU) 
                                                  | (0xfffff000U 
                                                     & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                        << 2U)))) 
                                              | ((IData)(vlSelf->fourth2__DOT____VdfgTmp_h99ddda1a__0) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((0xfffff800U 
                                                     & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                         << 2U) 
                                                        & ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x180U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut)))) 
                                                           << 0xbU))) 
                                                    | ((IData)(vlSelf->fourth1__DOT____VdfgTmp_h99ddda1a__0) 
                                                       << 0xbU))) 
                                                | (((((IData)(vlSelf->__Vcellinp__third2__A) 
                                                      & ((IData)(vlSelf->__Vcellinp__third2__B) 
                                                         | (IData)(vlSelf->__Vcellinp__third2__C))) 
                                                     | (IData)(vlSelf->third2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                    << 0xaU) 
                                                   | (((((IData)(vlSelf->__Vcellinp__third1__A) 
                                                         & (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x60U 
                                                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                                        | (IData)(vlSelf->third1__DOT____VdfgTmp_h99ddda1a__0)) 
                                                       << 9U) 
                                                      | (((((IData)(vlSelf->__Vcellinp__second4__A) 
                                                            & ((IData)(vlSelf->__Vcellinp__second4__B) 
                                                               | (IData)(vlSelf->__Vcellinp__second4__C))) 
                                                           | (IData)(vlSelf->second4__DOT____VdfgTmp_h99ddda1a__0)) 
                                                          << 8U) 
                                                         | (((((IData)(vlSelf->__Vcellinp__second3__A) 
                                                               << 7U) 
                                                              & (((IData)(vlSelf->__Vcellinp__second3__B) 
                                                                  << 7U) 
                                                                 | (0xffffff80U 
                                                                    & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                                       << 6U)))) 
                                                             | ((IData)(vlSelf->second3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                                     & (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut))))) 
                                                                    | (IData)(vlSelf->second2__DOT____VdfgTmp_h99ddda1a__0)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((0xffffffe0U 
                                                                       & (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                                           << 3U) 
                                                                          & ((0xffffffe0U 
                                                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                                                << 4U)) 
                                                                             | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi.COut) 
                                                                                << 5U)))) 
                                                                      | ((IData)(vlSelf->second1__DOT____VdfgTmp_h99ddda1a__0) 
                                                                         << 5U))) 
                                                                  | ((0x10U 
                                                                      & ((0xffff0U 
                                                                          & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                                              >> 0xcU) 
                                                                             & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                                                << 4U))) 
                                                                         | ((IData)(vlSelf->first5__DOT____VdfgTmp_h99ddda1a__0) 
                                                                            << 4U))) 
                                                                     | ((8U 
                                                                         & ((0x3ffff8U 
                                                                             & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                                                << 3U))) 
                                                                            | ((IData)(vlSelf->first4__DOT____VdfgTmp_h99ddda1a__0) 
                                                                               << 3U))) 
                                                                        | ((4U 
                                                                            & ((0xfffffcU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                                                << 2U))) 
                                                                               | ((IData)(vlSelf->first3__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 2U))) 
                                                                           | ((2U 
                                                                               & ((0x3fffffeU 
                                                                                & ((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                                                >> 6U) 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData))) 
                                                                                << 1U))) 
                                                                                | ((IData)(vlSelf->first2__DOT____VdfgTmp_h99ddda1a__0) 
                                                                                << 1U))) 
                                                                              | (1U 
                                                                                & (((vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData)))) 
                                                                                | (IData)(vlSelf->first1__DOT____VdfgTmp_h99ddda1a__0))))))))))))))));
    vlSelf->COut = __Vtemp_hb292318e__0;
}
