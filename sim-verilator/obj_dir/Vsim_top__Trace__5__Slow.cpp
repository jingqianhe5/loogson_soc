// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


VL_ATTR_COLD void Vsim_top___024root__trace_full_sub_3(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h3fcfa8ac__0;
    VlWide<5>/*159:0*/ __Vtemp_h000afff3__0;
    VlWide<4>/*127:0*/ __Vtemp_h68c67c78__0;
    VlWide<4>/*127:0*/ __Vtemp_h57200fef__0;
    VlWide<4>/*127:0*/ __Vtemp_h06be119f__0;
    VlWide<4>/*127:0*/ __Vtemp_h8d84ea25__0;
    VlWide<4>/*127:0*/ __Vtemp_h62a23cdf__0;
    VlWide<5>/*159:0*/ __Vtemp_h20b2666c__0;
    VlWide<5>/*159:0*/ __Vtemp_h076b7f5a__0;
    // Body
    bufp->fullCData(oldp+13221,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                [0U]),8);
    bufp->fullCData(oldp+13222,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                [1U]),8);
    bufp->fullCData(oldp+13223,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                [2U]),8);
    bufp->fullCData(oldp+13224,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__p),8);
    bufp->fullCData(oldp+13225,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__q),8);
    bufp->fullCData(oldp+13226,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__p) 
                                  > vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__p)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                 [2U])),8);
    bufp->fullCData(oldp+13227,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__q) 
                                  < vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__q)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                 [2U])),8);
    bufp->fullCData(oldp+13228,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                  [2U] > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__p)
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                      [2U] < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__u_row2_sort__DOT__q)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_B__DOT__row2
                                     [2U]))),8);
    bufp->fullCData(oldp+13229,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__line0),8);
    bufp->fullCData(oldp+13230,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__line1),8);
    bufp->fullCData(oldp+13231,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__line2),8);
    bufp->fullCData(oldp+13232,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0[0]),8);
    bufp->fullCData(oldp+13233,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0[1]),8);
    bufp->fullCData(oldp+13234,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0[2]),8);
    bufp->fullCData(oldp+13235,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1[0]),8);
    bufp->fullCData(oldp+13236,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1[1]),8);
    bufp->fullCData(oldp+13237,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1[2]),8);
    bufp->fullCData(oldp+13238,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2[0]),8);
    bufp->fullCData(oldp+13239,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2[1]),8);
    bufp->fullCData(oldp+13240,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2[2]),8);
    bufp->fullCData(oldp+13241,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[0]),8);
    bufp->fullCData(oldp+13242,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[1]),8);
    bufp->fullCData(oldp+13243,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[2]),8);
    bufp->fullCData(oldp+13244,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[3]),8);
    bufp->fullCData(oldp+13245,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[4]),8);
    bufp->fullCData(oldp+13246,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[5]),8);
    bufp->fullCData(oldp+13247,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[6]),8);
    bufp->fullCData(oldp+13248,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[7]),8);
    bufp->fullCData(oldp+13249,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__window[8]),8);
    bufp->fullCData(oldp+13250,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0_max),8);
    bufp->fullCData(oldp+13251,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0_mid),8);
    bufp->fullCData(oldp+13252,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0_min),8);
    bufp->fullCData(oldp+13253,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1_max),8);
    bufp->fullCData(oldp+13254,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1_mid),8);
    bufp->fullCData(oldp+13255,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1_min),8);
    bufp->fullCData(oldp+13256,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max),8);
    bufp->fullCData(oldp+13257,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid),8);
    bufp->fullCData(oldp+13258,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min),8);
    bufp->fullCData(oldp+13259,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__min_max),8);
    bufp->fullCData(oldp+13260,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__mid_mid),8);
    bufp->fullCData(oldp+13261,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min),8);
    bufp->fullCData(oldp+13262,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__median_value),8);
    bufp->fullCData(oldp+13263,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__vsync_delay),3);
    bufp->fullCData(oldp+13264,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__href_delay),3);
    bufp->fullCData(oldp+13265,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__de_delay),3);
    bufp->fullCData(oldp+13266,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__cb_delay_0),8);
    bufp->fullCData(oldp+13267,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__cb_delay_1),8);
    bufp->fullCData(oldp+13268,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__cb_delay_2),8);
    bufp->fullCData(oldp+13269,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__cr_delay_0),8);
    bufp->fullCData(oldp+13270,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__cr_delay_1),8);
    bufp->fullCData(oldp+13271,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__cr_delay_2),8);
    bufp->fullCData(oldp+13272,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__is_border_pixel_dly),3);
    bufp->fullSData(oldp+13273,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__col_count),11);
    bufp->fullSData(oldp+13274,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row_count),11);
    bufp->fullBit(oldp+13275,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__prev_href));
    bufp->fullBit(oldp+13276,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__prev_vsync));
    bufp->fullBit(oldp+13277,(((1U > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__col_count)) 
                               | ((0x77fU <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__col_count)) 
                                  | ((1U > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row_count)) 
                                     | (0x437U <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row_count)))))));
    bufp->fullCData(oldp+13278,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__max_data),8);
    bufp->fullCData(oldp+13279,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__min_data),8);
    bufp->fullCData(oldp+13280,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__p),8);
    bufp->fullCData(oldp+13281,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__q),8);
    bufp->fullCData(oldp+13282,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min))),8);
    bufp->fullCData(oldp+13283,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min))),8);
    bufp->fullCData(oldp+13284,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_final_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__max_min)))),8);
    bufp->fullCData(oldp+13285,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__mid_data),8);
    bufp->fullCData(oldp+13286,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__min_data),8);
    bufp->fullCData(oldp+13287,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__p),8);
    bufp->fullCData(oldp+13288,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__q),8);
    bufp->fullCData(oldp+13289,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min))),8);
    bufp->fullCData(oldp+13290,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min))),8);
    bufp->fullCData(oldp+13291,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_max_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_min)))),8);
    bufp->fullCData(oldp+13292,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__max_data),8);
    bufp->fullCData(oldp+13293,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__min_data),8);
    bufp->fullCData(oldp+13294,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__p),8);
    bufp->fullCData(oldp+13295,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__q),8);
    bufp->fullCData(oldp+13296,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid))),8);
    bufp->fullCData(oldp+13297,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid))),8);
    bufp->fullCData(oldp+13298,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_mid_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_mid)))),8);
    bufp->fullCData(oldp+13299,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__max_data),8);
    bufp->fullCData(oldp+13300,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__mid_data),8);
    bufp->fullCData(oldp+13301,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__p),8);
    bufp->fullCData(oldp+13302,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__q),8);
    bufp->fullCData(oldp+13303,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max))),8);
    bufp->fullCData(oldp+13304,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max))),8);
    bufp->fullCData(oldp+13305,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_min_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2_max)))),8);
    bufp->fullCData(oldp+13306,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                [0U]),8);
    bufp->fullCData(oldp+13307,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                [1U]),8);
    bufp->fullCData(oldp+13308,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                [2U]),8);
    bufp->fullCData(oldp+13309,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__p),8);
    bufp->fullCData(oldp+13310,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__q),8);
    bufp->fullCData(oldp+13311,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__p) 
                                  > vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__p)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                 [2U])),8);
    bufp->fullCData(oldp+13312,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__q) 
                                  < vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__q)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                 [2U])),8);
    bufp->fullCData(oldp+13313,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                  [2U] > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__p)
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                      [2U] < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row0_sort__DOT__q)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row0
                                     [2U]))),8);
    bufp->fullCData(oldp+13314,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                [0U]),8);
    bufp->fullCData(oldp+13315,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                [1U]),8);
    bufp->fullCData(oldp+13316,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                [2U]),8);
    bufp->fullCData(oldp+13317,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__p),8);
    bufp->fullCData(oldp+13318,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__q),8);
    bufp->fullCData(oldp+13319,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__p) 
                                  > vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__p)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                 [2U])),8);
    bufp->fullCData(oldp+13320,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__q) 
                                  < vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__q)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                 [2U])),8);
    bufp->fullCData(oldp+13321,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                  [2U] > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__p)
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                      [2U] < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row1_sort__DOT__q)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row1
                                     [2U]))),8);
    bufp->fullCData(oldp+13322,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                [0U]),8);
    bufp->fullCData(oldp+13323,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                [1U]),8);
    bufp->fullCData(oldp+13324,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                [2U]),8);
    bufp->fullCData(oldp+13325,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__p),8);
    bufp->fullCData(oldp+13326,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__q),8);
    bufp->fullCData(oldp+13327,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__p) 
                                  > vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__p)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                 [2U])),8);
    bufp->fullCData(oldp+13328,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__q) 
                                  < vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__q)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                 [2U])),8);
    bufp->fullCData(oldp+13329,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                  [2U] > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__p)
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                      [2U] < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__u_row2_sort__DOT__q)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_G__DOT__row2
                                     [2U]))),8);
    bufp->fullCData(oldp+13330,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__line0),8);
    bufp->fullCData(oldp+13331,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__line1),8);
    bufp->fullCData(oldp+13332,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__line2),8);
    bufp->fullCData(oldp+13333,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0[0]),8);
    bufp->fullCData(oldp+13334,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0[1]),8);
    bufp->fullCData(oldp+13335,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0[2]),8);
    bufp->fullCData(oldp+13336,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1[0]),8);
    bufp->fullCData(oldp+13337,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1[1]),8);
    bufp->fullCData(oldp+13338,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1[2]),8);
    bufp->fullCData(oldp+13339,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2[0]),8);
    bufp->fullCData(oldp+13340,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2[1]),8);
    bufp->fullCData(oldp+13341,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2[2]),8);
    bufp->fullCData(oldp+13342,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[0]),8);
    bufp->fullCData(oldp+13343,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[1]),8);
    bufp->fullCData(oldp+13344,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[2]),8);
    bufp->fullCData(oldp+13345,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[3]),8);
    bufp->fullCData(oldp+13346,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[4]),8);
    bufp->fullCData(oldp+13347,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[5]),8);
    bufp->fullCData(oldp+13348,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[6]),8);
    bufp->fullCData(oldp+13349,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[7]),8);
    bufp->fullCData(oldp+13350,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__window[8]),8);
    bufp->fullCData(oldp+13351,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0_max),8);
    bufp->fullCData(oldp+13352,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0_mid),8);
    bufp->fullCData(oldp+13353,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0_min),8);
    bufp->fullCData(oldp+13354,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1_max),8);
    bufp->fullCData(oldp+13355,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1_mid),8);
    bufp->fullCData(oldp+13356,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1_min),8);
    bufp->fullCData(oldp+13357,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max),8);
    bufp->fullCData(oldp+13358,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid),8);
    bufp->fullCData(oldp+13359,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min),8);
    bufp->fullCData(oldp+13360,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__min_max),8);
    bufp->fullCData(oldp+13361,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__mid_mid),8);
    bufp->fullCData(oldp+13362,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min),8);
    bufp->fullCData(oldp+13363,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__median_value),8);
    bufp->fullCData(oldp+13364,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__vsync_delay),3);
    bufp->fullCData(oldp+13365,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__href_delay),3);
    bufp->fullCData(oldp+13366,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__de_delay),3);
    bufp->fullCData(oldp+13367,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__cb_delay_0),8);
    bufp->fullCData(oldp+13368,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__cb_delay_1),8);
    bufp->fullCData(oldp+13369,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__cb_delay_2),8);
    bufp->fullCData(oldp+13370,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__cr_delay_0),8);
    bufp->fullCData(oldp+13371,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__cr_delay_1),8);
    bufp->fullCData(oldp+13372,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__cr_delay_2),8);
    bufp->fullCData(oldp+13373,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__is_border_pixel_dly),3);
    bufp->fullSData(oldp+13374,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__col_count),11);
    bufp->fullSData(oldp+13375,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row_count),11);
    bufp->fullBit(oldp+13376,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__prev_href));
    bufp->fullBit(oldp+13377,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__prev_vsync));
    bufp->fullBit(oldp+13378,(((1U > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__col_count)) 
                               | ((0x77fU <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__col_count)) 
                                  | ((1U > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row_count)) 
                                     | (0x437U <= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row_count)))))));
    bufp->fullCData(oldp+13379,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__max_data),8);
    bufp->fullCData(oldp+13380,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__min_data),8);
    bufp->fullCData(oldp+13381,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__p),8);
    bufp->fullCData(oldp+13382,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__q),8);
    bufp->fullCData(oldp+13383,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min))),8);
    bufp->fullCData(oldp+13384,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min))),8);
    bufp->fullCData(oldp+13385,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_final_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__max_min)))),8);
    bufp->fullCData(oldp+13386,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__mid_data),8);
    bufp->fullCData(oldp+13387,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__min_data),8);
    bufp->fullCData(oldp+13388,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__p),8);
    bufp->fullCData(oldp+13389,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__q),8);
    bufp->fullCData(oldp+13390,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min))),8);
    bufp->fullCData(oldp+13391,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min))),8);
    bufp->fullCData(oldp+13392,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_max_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_min)))),8);
    bufp->fullCData(oldp+13393,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__max_data),8);
    bufp->fullCData(oldp+13394,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__min_data),8);
    bufp->fullCData(oldp+13395,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__p),8);
    bufp->fullCData(oldp+13396,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__q),8);
    bufp->fullCData(oldp+13397,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid))),8);
    bufp->fullCData(oldp+13398,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid))),8);
    bufp->fullCData(oldp+13399,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_mid_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_mid)))),8);
    bufp->fullCData(oldp+13400,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__max_data),8);
    bufp->fullCData(oldp+13401,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__mid_data),8);
    bufp->fullCData(oldp+13402,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__p),8);
    bufp->fullCData(oldp+13403,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__q),8);
    bufp->fullCData(oldp+13404,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__p) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__p)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max))),8);
    bufp->fullCData(oldp+13405,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__q) 
                                  < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__q)
                                  : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max))),8);
    bufp->fullCData(oldp+13406,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max) 
                                  > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__p)
                                  : (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max) 
                                      < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_min_sort__DOT__q)
                                      : (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2_max)))),8);
    bufp->fullCData(oldp+13407,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                [0U]),8);
    bufp->fullCData(oldp+13408,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                [1U]),8);
    bufp->fullCData(oldp+13409,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                [2U]),8);
    bufp->fullCData(oldp+13410,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__p),8);
    bufp->fullCData(oldp+13411,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__q),8);
    bufp->fullCData(oldp+13412,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__p) 
                                  > vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__p)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                 [2U])),8);
    bufp->fullCData(oldp+13413,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__q) 
                                  < vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__q)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                 [2U])),8);
    bufp->fullCData(oldp+13414,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                  [2U] > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__p)
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                      [2U] < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row0_sort__DOT__q)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row0
                                     [2U]))),8);
    bufp->fullCData(oldp+13415,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                [0U]),8);
    bufp->fullCData(oldp+13416,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                [1U]),8);
    bufp->fullCData(oldp+13417,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                [2U]),8);
    bufp->fullCData(oldp+13418,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__p),8);
    bufp->fullCData(oldp+13419,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__q),8);
    bufp->fullCData(oldp+13420,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__p) 
                                  > vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__p)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                 [2U])),8);
    bufp->fullCData(oldp+13421,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__q) 
                                  < vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__q)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                 [2U])),8);
    bufp->fullCData(oldp+13422,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                  [2U] > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__p)
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                      [2U] < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row1_sort__DOT__q)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row1
                                     [2U]))),8);
    bufp->fullCData(oldp+13423,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                [0U]),8);
    bufp->fullCData(oldp+13424,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                [1U]),8);
    bufp->fullCData(oldp+13425,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                [2U]),8);
    bufp->fullCData(oldp+13426,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__p),8);
    bufp->fullCData(oldp+13427,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__q),8);
    bufp->fullCData(oldp+13428,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__p) 
                                  > vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__p)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                 [2U])),8);
    bufp->fullCData(oldp+13429,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__q) 
                                  < vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                  [2U]) ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__q)
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                 [2U])),8);
    bufp->fullCData(oldp+13430,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                  [2U] > (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__p))
                                  ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__p)
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                      [2U] < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__q))
                                      ? (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__u_row2_sort__DOT__q)
                                      : vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_median_filter__DOT__median_filter_single_R__DOT__row2
                                     [2U]))),8);
    bufp->fullBit(oldp+13431,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13432,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13433,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13434,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13435,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13436,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13437,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13438,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p11),8);
    bufp->fullCData(oldp+13439,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p12),8);
    bufp->fullCData(oldp+13440,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p13),8);
    bufp->fullCData(oldp+13441,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p21),8);
    bufp->fullCData(oldp+13442,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p22),8);
    bufp->fullCData(oldp+13443,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p23),8);
    bufp->fullCData(oldp+13444,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p31),8);
    bufp->fullCData(oldp+13445,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p32),8);
    bufp->fullCData(oldp+13446,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_p33),8);
    bufp->fullCData(oldp+13447,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__matrix_edge_flag_r1),4);
    bufp->fullSData(oldp+13448,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13449,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13450,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13451,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13452,((0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13453,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13454,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13455,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13456,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13457,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13458,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13459,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13460,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13461,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13462,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13463,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13464,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13465,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13466,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13467,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13468,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p11),8);
    bufp->fullCData(oldp+13469,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p12),8);
    bufp->fullCData(oldp+13470,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p13),8);
    bufp->fullCData(oldp+13471,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p21),8);
    bufp->fullCData(oldp+13472,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p22),8);
    bufp->fullCData(oldp+13473,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p23),8);
    bufp->fullCData(oldp+13474,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p31),8);
    bufp->fullCData(oldp+13475,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p32),8);
    bufp->fullCData(oldp+13476,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_p33),8);
    bufp->fullCData(oldp+13477,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__matrix_edge_flag_r1),4);
    bufp->fullSData(oldp+13478,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13479,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13480,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13481,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13482,((0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13483,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13484,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13485,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13486,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13487,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13488,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13489,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13490,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13491,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13492,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13493,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13494,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13495,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13496,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13497,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13498,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p11),8);
    bufp->fullCData(oldp+13499,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p12),8);
    bufp->fullCData(oldp+13500,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p13),8);
    bufp->fullCData(oldp+13501,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p21),8);
    bufp->fullCData(oldp+13502,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p22),8);
    bufp->fullCData(oldp+13503,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p23),8);
    bufp->fullCData(oldp+13504,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p31),8);
    bufp->fullCData(oldp+13505,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p32),8);
    bufp->fullCData(oldp+13506,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_p33),8);
    bufp->fullCData(oldp+13507,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__matrix_edge_flag_r1),4);
    bufp->fullSData(oldp+13508,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13509,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13510,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13511,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13512,((0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13513,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13514,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13515,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13516,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13517,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13518,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13519,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13520,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13521,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13522,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13523,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13524,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13525,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13526,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13527,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13528,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p11),8);
    bufp->fullCData(oldp+13529,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p12),8);
    bufp->fullCData(oldp+13530,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p13),8);
    bufp->fullCData(oldp+13531,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p21),8);
    bufp->fullCData(oldp+13532,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p22),8);
    bufp->fullCData(oldp+13533,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p23),8);
    bufp->fullCData(oldp+13534,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p31),8);
    bufp->fullCData(oldp+13535,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p32),8);
    bufp->fullCData(oldp+13536,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_p33),8);
    bufp->fullSData(oldp+13537,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__matrix_edge_flag_r1),16);
    bufp->fullSData(oldp+13538,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13539,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13540,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13541,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13542,((0xaU < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13543,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13544,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13545,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13546,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13547,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13548,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13549,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13550,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullIData(oldp+13551,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__data_r),24);
    bufp->fullBit(oldp+13552,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__de_r));
    bufp->fullBit(oldp+13553,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__href_r));
    bufp->fullBit(oldp+13554,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__vsync_r));
    bufp->fullBit(oldp+13555,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__sof_armed));
    bufp->fullIData(oldp+13556,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__data_r),32);
    bufp->fullBit(oldp+13557,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__de_r) 
                               & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__href_r) 
                                  & ((~ ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__hsync_rr) 
                                         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__vsync_rr))) 
                                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__vsync_r))))));
    bufp->fullBit(oldp+13558,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__hsync_rr) 
                               & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__href_r)) 
                                  & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__sof_armed)))));
    bufp->fullQData(oldp+13559,((((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__hsync_rr) 
                                                   & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__href_r)) 
                                                      & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__sof_armed))))) 
                                  << 0x21U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__de_r) 
                                                                 & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__href_r) 
                                                                    & ((~ 
                                                                        ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__hsync_rr) 
                                                                         | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__vsync_rr))) 
                                                                       & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__vsync_r)))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__data_r))))),34);
    bufp->fullIData(oldp+13561,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__pic_ram_addr),19);
    bufp->fullIData(oldp+13562,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__pix_data),32);
    bufp->fullBit(oldp+13563,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__pic_valid));
    bufp->fullCData(oldp+13564,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13565,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13566,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1),4);
    bufp->fullCData(oldp+13567,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0),4);
    bufp->fullCData(oldp+13568,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13569,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13570,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1),4);
    bufp->fullCData(oldp+13571,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0),4);
    bufp->fullBit(oldp+13572,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13573,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13574,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13575,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13576,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13577,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13578,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13579,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p11),8);
    bufp->fullCData(oldp+13580,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p12),8);
    bufp->fullCData(oldp+13581,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p13),8);
    bufp->fullCData(oldp+13582,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p21),8);
    bufp->fullCData(oldp+13583,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p22),8);
    bufp->fullCData(oldp+13584,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p23),8);
    bufp->fullCData(oldp+13585,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p31),8);
    bufp->fullCData(oldp+13586,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p32),8);
    bufp->fullCData(oldp+13587,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_p33),8);
    bufp->fullSData(oldp+13588,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_vsync_r1),12);
    bufp->fullSData(oldp+13589,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_href_r1),12);
    bufp->fullSData(oldp+13590,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_img_de_r1),12);
    bufp->fullSData(oldp+13591,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__matrix_edge_flag_r1),12);
    bufp->fullSData(oldp+13592,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13593,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13594,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13595,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13596,((0xaU < (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13597,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13598,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13599,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13600,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13601,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13602,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13603,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13604,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13605,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13606,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13607,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13608,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13609,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13610,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13611,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13612,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p11),8);
    bufp->fullCData(oldp+13613,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p12),8);
    bufp->fullCData(oldp+13614,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p13),8);
    bufp->fullCData(oldp+13615,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p21),8);
    bufp->fullCData(oldp+13616,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p22),8);
    bufp->fullCData(oldp+13617,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p23),8);
    bufp->fullCData(oldp+13618,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p31),8);
    bufp->fullCData(oldp+13619,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p32),8);
    bufp->fullCData(oldp+13620,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_p33),8);
    bufp->fullSData(oldp+13621,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_vsync_r1),12);
    bufp->fullSData(oldp+13622,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_href_r1),12);
    bufp->fullSData(oldp+13623,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_img_de_r1),12);
    bufp->fullSData(oldp+13624,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__matrix_edge_flag_r1),12);
    bufp->fullSData(oldp+13625,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13626,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13627,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13628,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13629,((0xaU < (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13630,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13631,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13632,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13633,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13634,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13635,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13636,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13637,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13638,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13639,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13640,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13641,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13642,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13643,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13644,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13645,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p11),8);
    bufp->fullCData(oldp+13646,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p12),8);
    bufp->fullCData(oldp+13647,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p13),8);
    bufp->fullCData(oldp+13648,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p21),8);
    bufp->fullCData(oldp+13649,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p22),8);
    bufp->fullCData(oldp+13650,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p23),8);
    bufp->fullCData(oldp+13651,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p31),8);
    bufp->fullCData(oldp+13652,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p32),8);
    bufp->fullCData(oldp+13653,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_p33),8);
    bufp->fullSData(oldp+13654,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_vsync_r1),12);
    bufp->fullSData(oldp+13655,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_href_r1),12);
    bufp->fullSData(oldp+13656,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_img_de_r1),12);
    bufp->fullSData(oldp+13657,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__matrix_edge_flag_r1),12);
    bufp->fullSData(oldp+13658,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13659,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13660,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13661,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13662,((0xaU < (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13663,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13664,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13665,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13666,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13667,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13668,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13669,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13670,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13671,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13672,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13673,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13674,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13675,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13676,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13677,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13678,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p11),8);
    bufp->fullCData(oldp+13679,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p12),8);
    bufp->fullCData(oldp+13680,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p13),8);
    bufp->fullCData(oldp+13681,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p21),8);
    bufp->fullCData(oldp+13682,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p22),8);
    bufp->fullCData(oldp+13683,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p23),8);
    bufp->fullCData(oldp+13684,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p31),8);
    bufp->fullCData(oldp+13685,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p32),8);
    bufp->fullCData(oldp+13686,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_p33),8);
    bufp->fullSData(oldp+13687,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_vsync_r1),12);
    bufp->fullSData(oldp+13688,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_href_r1),12);
    bufp->fullSData(oldp+13689,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_img_de_r1),12);
    bufp->fullSData(oldp+13690,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__matrix_edge_flag_r1),12);
    bufp->fullSData(oldp+13691,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13692,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13693,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13694,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13695,((0xaU < (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13696,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13697,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13698,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13699,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13700,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13701,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13702,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13703,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13704,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13705,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13706,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13707,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13708,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13709,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13710,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13711,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p11),8);
    bufp->fullCData(oldp+13712,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p12),8);
    bufp->fullCData(oldp+13713,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p13),8);
    bufp->fullCData(oldp+13714,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p21),8);
    bufp->fullCData(oldp+13715,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p22),8);
    bufp->fullCData(oldp+13716,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p23),8);
    bufp->fullCData(oldp+13717,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p31),8);
    bufp->fullCData(oldp+13718,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p32),8);
    bufp->fullCData(oldp+13719,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_p33),8);
    bufp->fullSData(oldp+13720,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_vsync_r1),12);
    bufp->fullSData(oldp+13721,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_href_r1),12);
    bufp->fullSData(oldp+13722,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_img_de_r1),12);
    bufp->fullSData(oldp+13723,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__matrix_edge_flag_r1),12);
    bufp->fullSData(oldp+13724,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13725,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13726,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13727,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13728,((0xaU < (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13729,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13730,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13731,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13732,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13733,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13734,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13735,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13736,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13737,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                     >> 1U))));
    bufp->fullBit(oldp+13738,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                     >> 1U))));
    bufp->fullBit(oldp+13739,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                     >> 1U))));
    bufp->fullBit(oldp+13740,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13741,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13742,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                                     >> 1U))));
    bufp->fullBit(oldp+13743,((1U & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                                     >> 1U))));
    bufp->fullCData(oldp+13744,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p11),8);
    bufp->fullCData(oldp+13745,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p12),8);
    bufp->fullCData(oldp+13746,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p13),8);
    bufp->fullCData(oldp+13747,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p21),8);
    bufp->fullCData(oldp+13748,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p22),8);
    bufp->fullCData(oldp+13749,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p23),8);
    bufp->fullCData(oldp+13750,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p31),8);
    bufp->fullCData(oldp+13751,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p32),8);
    bufp->fullCData(oldp+13752,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_p33),8);
    bufp->fullSData(oldp+13753,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_vsync_r1),12);
    bufp->fullSData(oldp+13754,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_href_r1),12);
    bufp->fullSData(oldp+13755,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_img_de_r1),12);
    bufp->fullSData(oldp+13756,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__matrix_edge_flag_r1),12);
    bufp->fullSData(oldp+13757,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt),11);
    bufp->fullBit(oldp+13758,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly));
    bufp->fullSData(oldp+13759,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt),11);
    bufp->fullSData(oldp+13760,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt),11);
    bufp->fullBit(oldp+13761,((0xaU < (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
    bufp->fullBit(oldp+13762,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly));
    bufp->fullCData(oldp+13763,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync),2);
    bufp->fullCData(oldp+13764,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href),2);
    bufp->fullCData(oldp+13765,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de),2);
    bufp->fullCData(oldp+13766,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag),2);
    bufp->fullCData(oldp+13767,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag),2);
    bufp->fullCData(oldp+13768,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag),2);
    bufp->fullCData(oldp+13769,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag),2);
    bufp->fullBit(oldp+13770,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13771,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13772,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13773,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__RGB_gray_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13774,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13775,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13776,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13777,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__sharpen_href)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13778,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13779,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13780,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13781,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13782,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullBit(oldp+13783,(((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))));
    bufp->fullWData(oldp+13784,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_data),128);
    bufp->fullCData(oldp+13788,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_infer_result_valid),8);
    bufp->fullBit(oldp+13789,(VL_GTS_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)));
    bufp->fullBit(oldp+13790,(VL_LTES_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)));
    bufp->fullBit(oldp+13791,((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)));
    bufp->fullBit(oldp+13792,((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)));
    if ((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count)) {
        __Vtemp_h3fcfa8ac__0[0U] = 0U;
        __Vtemp_h3fcfa8ac__0[1U] = 0U;
        __Vtemp_h3fcfa8ac__0[2U] = 0U;
        __Vtemp_h3fcfa8ac__0[3U] = 0U;
        __Vtemp_h3fcfa8ac__0[4U] = 0U;
    } else {
        __Vtemp_h3fcfa8ac__0[0U] = vlSelf->__VdfgTmp_h8d1be2a1__0[0U];
        __Vtemp_h3fcfa8ac__0[1U] = vlSelf->__VdfgTmp_h8d1be2a1__0[1U];
        __Vtemp_h3fcfa8ac__0[2U] = vlSelf->__VdfgTmp_h8d1be2a1__0[2U];
        __Vtemp_h3fcfa8ac__0[3U] = vlSelf->__VdfgTmp_h8d1be2a1__0[3U];
        __Vtemp_h3fcfa8ac__0[4U] = vlSelf->__VdfgTmp_h8d1be2a1__0[4U];
    }
    bufp->fullWData(oldp+13793,(__Vtemp_h3fcfa8ac__0),136);
    bufp->fullCData(oldp+13798,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_op_tpu),2);
    bufp->fullBit(oldp+13799,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_is_start));
    bufp->fullBit(oldp+13800,(((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count) 
                               & (2U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_lacc_cmd_op_tpu)))));
    bufp->fullSData(oldp+13801,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_addr),16);
    bufp->fullSData(oldp+13802,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_ub_host_wr_data),16);
    bufp->fullBit(oldp+13803,(VL_LTES_III(32, 0x40U, vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count)));
    bufp->fullBit(oldp+13804,((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count)));
    bufp->fullBit(oldp+13805,((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count)));
    if ((0U == vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count)) {
        __Vtemp_h000afff3__0[0U] = 0U;
        __Vtemp_h000afff3__0[1U] = 0U;
        __Vtemp_h000afff3__0[2U] = 0U;
        __Vtemp_h000afff3__0[3U] = 0U;
        __Vtemp_h000afff3__0[4U] = 0U;
    } else {
        __Vtemp_h000afff3__0[0U] = vlSelf->__VdfgTmp_h91872c8c__0[0U];
        __Vtemp_h000afff3__0[1U] = vlSelf->__VdfgTmp_h91872c8c__0[1U];
        __Vtemp_h000afff3__0[2U] = vlSelf->__VdfgTmp_h91872c8c__0[2U];
        __Vtemp_h000afff3__0[3U] = vlSelf->__VdfgTmp_h91872c8c__0[3U];
        __Vtemp_h000afff3__0[4U] = vlSelf->__VdfgTmp_h91872c8c__0[4U];
    }
    bufp->fullWData(oldp+13806,(__Vtemp_h000afff3__0),136);
    bufp->fullCData(oldp+13811,(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_cpu__DOT__delay),2);
    bufp->fullCData(oldp+13812,(vlSelf->sim_top__DOT__u_soc_top__DOT__sim_clk__DOT__u_rst_tpu__DOT__delay),2);
    bufp->fullCData(oldp+13813,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__wr_ptr),6);
    bufp->fullCData(oldp+13814,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__rd_ptr),6);
    bufp->fullIData(oldp+13815,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_lacc_cmd_async_fifo__DOT__u_model__DOT__count),32);
    bufp->fullCData(oldp+13816,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__wr_ptr),6);
    bufp->fullCData(oldp+13817,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__rd_ptr),6);
    bufp->fullIData(oldp+13818,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_result_async_fifo__DOT__u_model__DOT__count),32);
    bufp->fullBit(oldp+13819,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_sync_cpu) 
                                     >> 1U))));
    bufp->fullBit(oldp+13820,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_sync_cpu) 
                                     >> 1U))));
    bufp->fullBit(oldp+13821,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_sync_cpu) 
                                     >> 1U))));
    bufp->fullCData(oldp+13822,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_sync_cpu),2);
    bufp->fullCData(oldp+13823,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_sync_cpu),2);
    bufp->fullCData(oldp+13824,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_sync_cpu),2);
    bufp->fullCData(oldp+13825,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13826,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13827,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13828,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13829,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1),4);
    bufp->fullCData(oldp+13830,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0),4);
    bufp->fullBit(oldp+13831,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_rValid));
    bufp->fullBit(oldp+13832,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_rValid));
    bufp->fullBit(oldp+13833,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_rValid));
    bufp->fullCData(oldp+13834,((7U & (((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)))) 
                                       - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_ptrToOccupancy)))),3);
    bufp->fullCData(oldp+13835,((0xfU & (((8U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                          | ((4U & 
                                              (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (VL_REDXOR_4(
                                                                (0xeU 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))))) 
                                         - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_ptrToOccupancy)))),4);
    bufp->fullCData(oldp+13836,((7U & (((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)))) 
                                       - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_ptrToOccupancy)))),3);
    bufp->fullCData(oldp+13837,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13838,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_ptrToPush),3);
    bufp->fullCData(oldp+13839,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtr),3);
    bufp->fullCData(oldp+13840,((7U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtr)))),3);
    bufp->fullCData(oldp+13841,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtrGray),3);
    bufp->fullBit(oldp+13842,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13843,((3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtr))),2);
    bufp->fullBit(oldp+13844,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13845,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13846,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__popCC_ptrToOccupancy),3);
    bufp->fullCData(oldp+13847,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13848,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13849,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_ptrToPush),3);
    bufp->fullCData(oldp+13850,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtr),3);
    bufp->fullCData(oldp+13851,((7U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtr)))),3);
    bufp->fullCData(oldp+13852,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtrGray),3);
    bufp->fullBit(oldp+13853,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13854,((3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtr))),2);
    bufp->fullBit(oldp+13855,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13856,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13857,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__popCC_ptrToOccupancy),3);
    bufp->fullCData(oldp+13858,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13859,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),4);
    bufp->fullCData(oldp+13860,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_ptrToPush),4);
    bufp->fullCData(oldp+13861,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtr),4);
    bufp->fullCData(oldp+13862,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtr)))),4);
    bufp->fullCData(oldp+13863,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtrGray),4);
    bufp->fullBit(oldp+13864,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13865,((7U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtr))),3);
    bufp->fullBit(oldp+13866,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13867,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13868,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__popCC_ptrToOccupancy),4);
    bufp->fullCData(oldp+13869,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),4);
    bufp->fullBit(oldp+13870,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_rValid));
    bufp->fullBit(oldp+13871,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_rValid));
    bufp->fullBit(oldp+13872,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_rValid));
    bufp->fullCData(oldp+13873,((7U & (((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)))) 
                                       - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_ptrToOccupancy)))),3);
    bufp->fullCData(oldp+13874,((0xfU & (((8U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                          | ((4U & 
                                              (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (VL_REDXOR_4(
                                                                (0xeU 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))))) 
                                         - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_ptrToOccupancy)))),4);
    bufp->fullCData(oldp+13875,((7U & (((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)))) 
                                       - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_ptrToOccupancy)))),3);
    bufp->fullCData(oldp+13876,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13877,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_ptrToPush),3);
    bufp->fullCData(oldp+13878,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtr),3);
    bufp->fullCData(oldp+13879,((7U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtr)))),3);
    bufp->fullCData(oldp+13880,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtrGray),3);
    bufp->fullBit(oldp+13881,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13882,((3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_popPtr))),2);
    bufp->fullBit(oldp+13883,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13884,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13885,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__popCC_ptrToOccupancy),3);
    bufp->fullCData(oldp+13886,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13887,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13888,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_ptrToPush),3);
    bufp->fullCData(oldp+13889,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtr),3);
    bufp->fullCData(oldp+13890,((7U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtr)))),3);
    bufp->fullCData(oldp+13891,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtrGray),3);
    bufp->fullBit(oldp+13892,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13893,((3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_popPtr))),2);
    bufp->fullBit(oldp+13894,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13895,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13896,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__popCC_ptrToOccupancy),3);
    bufp->fullCData(oldp+13897,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13898,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),4);
    bufp->fullCData(oldp+13899,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_ptrToPush),4);
    bufp->fullCData(oldp+13900,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtr),4);
    bufp->fullCData(oldp+13901,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtr)))),4);
    bufp->fullCData(oldp+13902,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtrGray),4);
    bufp->fullBit(oldp+13903,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13904,((7U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_popPtr))),3);
    bufp->fullBit(oldp+13905,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13906,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13907,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__popCC_ptrToOccupancy),4);
    bufp->fullCData(oldp+13908,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),4);
    bufp->fullBit(oldp+13909,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rValid));
    bufp->fullBit(oldp+13910,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rValid));
    bufp->fullCData(oldp+13911,((7U & (((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)))) 
                                       - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_ptrToOccupancy)))),3);
    bufp->fullCData(oldp+13912,((0xfU & (((8U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                          | ((4U & 
                                              (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (VL_REDXOR_4(
                                                                (0xeU 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))))) 
                                         - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_ptrToOccupancy)))),4);
    bufp->fullCData(oldp+13913,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13914,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_ptrToPush),3);
    bufp->fullCData(oldp+13915,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtr),3);
    bufp->fullCData(oldp+13916,((7U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtr)))),3);
    bufp->fullCData(oldp+13917,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtrGray),3);
    bufp->fullBit(oldp+13918,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13919,((3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtr))),2);
    bufp->fullBit(oldp+13920,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13921,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13922,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__popCC_ptrToOccupancy),3);
    bufp->fullCData(oldp+13923,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13924,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),4);
    bufp->fullCData(oldp+13925,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_ptrToPush),4);
    bufp->fullCData(oldp+13926,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtr),4);
    bufp->fullCData(oldp+13927,((0xfU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtr)))),4);
    bufp->fullCData(oldp+13928,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtrGray),4);
    bufp->fullBit(oldp+13929,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_empty)))));
    bufp->fullCData(oldp+13930,((7U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_popPtr))),3);
    bufp->fullBit(oldp+13931,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13932,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13933,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__popCC_ptrToOccupancy),4);
    bufp->fullCData(oldp+13934,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),4);
    bufp->fullBit(oldp+13935,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rValid));
    bufp->fullCData(oldp+13936,((7U & (((4U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                        | ((2U & (VL_REDXOR_4(
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                  << 1U)) 
                                           | (1U & 
                                              VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)))) 
                                       - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_ptrToOccupancy)))),3);
    bufp->fullCData(oldp+13937,((0xfU & (((8U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                          | ((4U & 
                                              (VL_REDXOR_4(
                                                           (0xcU 
                                                            & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & (VL_REDXOR_4(
                                                                (0xeU 
                                                                 & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_4(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1))))) 
                                         - (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_ptrToOccupancy)))),4);
    bufp->fullCData(oldp+13938,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),3);
    bufp->fullCData(oldp+13939,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_ptrToPush),3);
    bufp->fullCData(oldp+13940,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtr),3);
    bufp->fullCData(oldp+13941,((7U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtr)))),3);
    bufp->fullCData(oldp+13942,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtrGray),3);
    bufp->fullBit(oldp+13943,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_empty)))));
    bufp->fullBit(oldp+13944,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_ready));
    bufp->fullCData(oldp+13945,((3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_popPtr))),2);
    bufp->fullBit(oldp+13946,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_empty));
    bufp->fullBit(oldp+13947,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_fire));
    bufp->fullBit(oldp+13948,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_addressGen_rValid)))));
    bufp->fullCData(oldp+13949,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__popCC_ptrToOccupancy),3);
    bufp->fullCData(oldp+13950,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),3);
    bufp->fullCData(oldp+13951,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1),4);
    bufp->fullCData(oldp+13952,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_ptrToPush),4);
    bufp->fullCData(oldp+13953,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__popCC_ptrToOccupancy),4);
    bufp->fullCData(oldp+13954,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0),4);
    bufp->fullBit(oldp+13955,(vlSelf->sim_top__DOT__u_soc_top__DOT__uart0_int));
    bufp->fullIData(oldp+13956,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awaddr_reg),32);
    bufp->fullIData(oldp+13957,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__m_axi_wdata_reg),32);
    bufp->fullIData(oldp+13958,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_araddr_reg),32);
    bufp->fullIData(oldp+13959,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_awaddr_reg),32);
    bufp->fullBit(oldp+13960,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_awvalid_reg));
    bufp->fullBit(oldp+13961,(vlSelf->sim_top__DOT__u_soc_top__DOT__s7_axil_awready));
    bufp->fullIData(oldp+13962,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_wdata_reg),32);
    bufp->fullBit(oldp+13963,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_wvalid_reg));
    bufp->fullBit(oldp+13964,(vlSelf->sim_top__DOT__u_soc_top__DOT__s7_axil_wready));
    bufp->fullBit(oldp+13965,(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cpu_frame_start_pulse));
    bufp->fullCData(oldp+13966,(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_brightness_thresh),8);
    bufp->fullCData(oldp+13967,(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_contrast_thresh),8);
    bufp->fullWData(oldp+13968,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr),96);
    bufp->fullWData(oldp+13971,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr),96);
    bufp->fullIData(oldp+13974,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__int_axi_arready),24);
    bufp->fullBit(oldp+13975,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__trans_start));
    bufp->fullCData(oldp+13976,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg),2);
    bufp->fullIData(oldp+13977,(((0x5fU >= (0x7fU & 
                                            ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                             << 5U)))
                                  ? (((0U == (0x1fU 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                 << 5U)))
                                       ? 0U : (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                     << 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                       << 5U))))) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_araddr[
                                        (3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg))] 
                                        >> (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                             << 5U))))
                                  : 0U)),32);
    bufp->fullCData(oldp+13978,(0U),4);
    bufp->fullBit(oldp+13979,(0U));
    bufp->fullBit(oldp+13980,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_arvalid_mux));
    bufp->fullBit(oldp+13981,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next));
    bufp->fullBit(oldp+13982,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_ar_input_to_output));
    bufp->fullBit(oldp+13983,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next)))));
    bufp->fullIData(oldp+13984,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__int_axi_awready),24);
    bufp->fullBit(oldp+13985,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__trans_start));
    bufp->fullCData(oldp+13986,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__w_select_next),2);
    bufp->fullCData(oldp+13987,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg),2);
    bufp->fullIData(oldp+13988,(((0x5fU >= (0x7fU & 
                                            ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                             << 5U)))
                                  ? (((0U == (0x1fU 
                                              & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                 << 5U)))
                                       ? 0U : (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                     << 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                                       << 5U))))) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__s_axi_awaddr[
                                        (3U & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg))] 
                                        >> (0x1fU & 
                                            ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_reg) 
                                             << 5U))))
                                  : 0U)),32);
    bufp->fullCData(oldp+13989,(0U),4);
    bufp->fullBit(oldp+13990,(0U));
    bufp->fullBit(oldp+13991,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_awvalid_mux));
    bufp->fullIData(oldp+13992,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__s_axi_wdata_mux),32);
    bufp->fullBit(oldp+13993,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next));
    bufp->fullBit(oldp+13994,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__store_axi_aw_input_to_output));
    bufp->fullBit(oldp+13995,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next)))));
    bufp->fullIData(oldp+13996,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__4__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_m_axi_wdata_reg),32);
    bufp->fullBit(oldp+13997,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_awready_next));
    bufp->fullBit(oldp+13998,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__s_axi_wready_next));
    bufp->fullIData(oldp+13999,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_awaddr_next),32);
    bufp->fullBit(oldp+14000,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_awvalid_next));
    bufp->fullIData(oldp+14001,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_wdata_next),32);
    bufp->fullBit(oldp+14002,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_wvalid_next));
    bufp->fullBit(oldp+14003,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_axil_adapter_s5__DOT__axi_axil_adapter_wr_inst__DOT__m_axil_bready_next));
    bufp->fullBit(oldp+14004,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__lsr_mask));
    bufp->fullBit(oldp+14005,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__tf_push));
    bufp->fullBit(oldp+14006,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__iir_read));
    bufp->fullBit(oldp+14007,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__msr_read));
    bufp->fullBit(oldp+14008,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__fifo_read));
    bufp->fullBit(oldp+14009,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+14010,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+14011,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+14012,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+14013,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_uart_controller__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
    bufp->fullIData(oldp+14014,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_en),32);
    bufp->fullIData(oldp+14015,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_cmp),32);
    bufp->fullBit(oldp+14016,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__sys_timer_en));
    bufp->fullIData(oldp+14017,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_ctrl),32);
    bufp->fullIData(oldp+14018,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__digital_data),32);
    bufp->fullBit(oldp+14019,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__ar_enter));
    bufp->fullBit(oldp+14020,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__aw_enter));
    bufp->fullBit(oldp+14021,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter));
    bufp->fullIData(oldp+14022,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr),32);
    bufp->fullBit(oldp+14023,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf104U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14024,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf108U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14025,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf300U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14026,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf200U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14027,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf204U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14028,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf000U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14029,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf004U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14030,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__w_enter) 
                               & (0xf008U == (0xffffU 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__buf_addr)))));
    bufp->fullBit(oldp+14031,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__write_confreg_int_clr));
    bufp->fullBit(oldp+14032,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__write_confreg_int_set));
    bufp->fullIData(oldp+14033,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__write_confreg_int_set)
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT____VdfgTmp_h11de1f82__0
                                  : 0U)),32);
    bufp->fullIData(oldp+14034,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__write_confreg_int_clr)
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT____VdfgTmp_h11de1f82__0
                                  : 0U)),32);
    bufp->fullIData(oldp+14035,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+14036,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__wdata_reg),32);
    bufp->fullBit(oldp+14037,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_config_axil__DOT__slv_reg_wren));
    bufp->fullCData(oldp+14038,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_Brightness_adjustment__DOT__adj_amount),8);
    bufp->fullBit(oldp+14039,((0x80U < (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__isp_cfg_brightness_thresh))));
    bufp->fullCData(oldp+14040,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14041,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo2_rdata),8);
    bufp->fullCData(oldp+14042,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__fifo3_rdata),8);
    bufp->fullCData(oldp+14043,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14044,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_gaussian_filter__DOT__u_Matrix_Generate_5X5_8Bit__DOT__u4_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14045,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14046,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14047,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14048,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14049,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14050,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14051,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14052,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14053,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_filter__DOT__u_mean_filter_proc__DOT__mean_filter_single_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14054,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14055,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14056,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_B__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14057,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14058,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14059,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_G__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14060,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14061,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14062,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_laplacian_sharpen__DOT__laplacian_sharpen_single_R__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14063,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14064,(((0x77fU >= (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14065,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_special__DOT__u_sobel_detector__DOT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullBit(oldp+14066,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__fifo_full));
    bufp->fullBit(oldp+14067,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_new_dvi__DOT__u_vga__DOT__ram_oe_n));
    bufp->fullCData(oldp+14068,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__ram[0]),6);
    bufp->fullCData(oldp+14069,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__ram[1]),6);
    bufp->fullCData(oldp+14070,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__ram[2]),6);
    bufp->fullCData(oldp+14071,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__bFifo__DOT__ram[3]),6);
    bufp->fullQData(oldp+14072,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[0]),39);
    bufp->fullQData(oldp+14074,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[1]),39);
    bufp->fullQData(oldp+14076,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[2]),39);
    bufp->fullQData(oldp+14078,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[3]),39);
    bufp->fullQData(oldp+14080,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[4]),39);
    bufp->fullQData(oldp+14082,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[5]),39);
    bufp->fullQData(oldp+14084,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[6]),39);
    bufp->fullQData(oldp+14086,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_Axi_CDC.__PVT__rFifo__DOT__ram[7]),39);
    bufp->fullCData(oldp+14088,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__ram[0]),6);
    bufp->fullCData(oldp+14089,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__ram[1]),6);
    bufp->fullCData(oldp+14090,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__ram[2]),6);
    bufp->fullCData(oldp+14091,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__bFifo__DOT__ram[3]),6);
    bufp->fullCData(oldp+14092,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14093,(((0x77fU >= (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14094,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14095,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14096,(((0x77fU >= (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14097,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14098,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14099,(((0x77fU >= (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14100,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14101,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14102,(((0x77fU >= (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14103,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14104,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14105,(((0x77fU >= (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14106,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_G.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullCData(oldp+14107,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata),8);
    bufp->fullCData(oldp+14108,(((0x77fU >= (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                  ? vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                 [vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                  : 0U)),8);
    bufp->fullSData(oldp+14109,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_B.__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer),11);
    bufp->fullSData(oldp+14110,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [0U]),16);
    bufp->fullSData(oldp+14111,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [1U]),16);
    bufp->fullSData(oldp+14112,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [0U]),16);
    bufp->fullSData(oldp+14113,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [1U]),16);
    bufp->fullSData(oldp+14114,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [0U]),16);
    bufp->fullSData(oldp+14115,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [1U]),16);
    bufp->fullSData(oldp+14116,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                [0U]),16);
    bufp->fullSData(oldp+14117,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                [1U]),16);
    bufp->fullSData(oldp+14118,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                [0U]),16);
    bufp->fullSData(oldp+14119,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                [1U]),16);
    __Vtemp_h68c67c78__0[0U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                 [1U] << 0x10U) | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [0U]);
    __Vtemp_h68c67c78__0[1U] = (((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                  [2U]) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                           [1U] >> 0x10U)) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                               [6U] 
                                                               << 0x10U) 
                                                              | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                              [5U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                [4U] 
                                                                << 0x10U) 
                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                               [3U]))))) 
                                   << 0x10U));
    __Vtemp_h68c67c78__0[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                             [6U] 
                                                             << 0x10U) 
                                                            | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                            [5U]))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                              [4U] 
                                                              << 0x10U) 
                                                             | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                             [3U]))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                           [6U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                          [5U]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                            [4U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                           [3U])))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h68c67c78__0[3U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                 [7U] << 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                                [6U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                               [5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                                | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                                                                [3U])))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U));
    bufp->fullWData(oldp+14120,(__Vtemp_h68c67c78__0),128);
    __Vtemp_h57200fef__0[0U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                 [1U] << 0x10U) | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [0U]);
    __Vtemp_h57200fef__0[1U] = (((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                  [2U]) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                           [1U] >> 0x10U)) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                               [6U] 
                                                               << 0x10U) 
                                                              | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                              [5U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                [4U] 
                                                                << 0x10U) 
                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                               [3U]))))) 
                                   << 0x10U));
    __Vtemp_h57200fef__0[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                             [6U] 
                                                             << 0x10U) 
                                                            | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                            [5U]))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                              [4U] 
                                                              << 0x10U) 
                                                             | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                             [3U]))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                           [6U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                          [5U]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                            [4U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                           [3U])))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h57200fef__0[3U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                 [7U] << 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                                [6U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                               [5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                                | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                                                                [3U])))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U));
    bufp->fullWData(oldp+14124,(__Vtemp_h57200fef__0),128);
    __Vtemp_h06be119f__0[0U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                 [1U] << 0x10U) | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [0U]);
    __Vtemp_h06be119f__0[1U] = (((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                  [2U]) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                           [1U] >> 0x10U)) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                               [6U] 
                                                               << 0x10U) 
                                                              | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                              [5U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                [4U] 
                                                                << 0x10U) 
                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                               [3U]))))) 
                                   << 0x10U));
    __Vtemp_h06be119f__0[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                             [6U] 
                                                             << 0x10U) 
                                                            | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                            [5U]))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                              [4U] 
                                                              << 0x10U) 
                                                             | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                             [3U]))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                           [6U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                          [5U]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                            [4U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                           [3U])))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h06be119f__0[3U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                 [7U] << 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                                [6U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                               [5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                                | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                                                                [3U])))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U));
    bufp->fullWData(oldp+14128,(__Vtemp_h06be119f__0),128);
    __Vtemp_h8d84ea25__0[0U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                 [1U] << 0x10U) | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                [0U]);
    __Vtemp_h8d84ea25__0[1U] = (((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                  [2U]) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                           [1U] >> 0x10U)) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                               [6U] 
                                                               << 0x10U) 
                                                              | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                              [5U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                [4U] 
                                                                << 0x10U) 
                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                               [3U]))))) 
                                   << 0x10U));
    __Vtemp_h8d84ea25__0[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                             [6U] 
                                                             << 0x10U) 
                                                            | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                            [5U]))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                              [4U] 
                                                              << 0x10U) 
                                                             | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                             [3U]))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                           [6U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                          [5U]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                            [4U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                           [3U])))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h8d84ea25__0[3U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                 [7U] << 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                                [6U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                               [5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                                | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out
                                                                                [3U])))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U));
    bufp->fullWData(oldp+14132,(__Vtemp_h8d84ea25__0),128);
    __Vtemp_h62a23cdf__0[0U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                 [1U] << 0x10U) | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                [0U]);
    __Vtemp_h62a23cdf__0[1U] = (((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                  [2U]) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                           [1U] >> 0x10U)) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                               [6U] 
                                                               << 0x10U) 
                                                              | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                              [5U]))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                [4U] 
                                                                << 0x10U) 
                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                               [3U]))))) 
                                   << 0x10U));
    __Vtemp_h62a23cdf__0[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                             [6U] 
                                                             << 0x10U) 
                                                            | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                            [5U]))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                              [4U] 
                                                              << 0x10U) 
                                                             | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                             [3U]))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                           [6U] 
                                                                           << 0x10U) 
                                                                          | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                          [5U]))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                            [4U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                           [3U])))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h62a23cdf__0[3U] = ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                 [7U] << 0x10U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                                [6U] 
                                                                                << 0x10U) 
                                                                               | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                               [5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                                [4U] 
                                                                                << 0x10U) 
                                                                                | vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out
                                                                                [3U])))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U));
    bufp->fullWData(oldp+14136,(__Vtemp_h62a23cdf__0),128);
    bufp->fullSData(oldp+14140,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [2U]),16);
    bufp->fullSData(oldp+14141,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [3U]),16);
    bufp->fullSData(oldp+14142,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [4U]),16);
    bufp->fullSData(oldp+14143,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [5U]),16);
    bufp->fullSData(oldp+14144,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [6U]),16);
    bufp->fullSData(oldp+14145,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out
                                [7U]),16);
    bufp->fullSData(oldp+14146,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [2U]),16);
    bufp->fullSData(oldp+14147,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [3U]),16);
    bufp->fullSData(oldp+14148,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [4U]),16);
    bufp->fullSData(oldp+14149,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [5U]),16);
    bufp->fullSData(oldp+14150,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [6U]),16);
    bufp->fullSData(oldp+14151,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out
                                [7U]),16);
    bufp->fullSData(oldp+14152,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[0]),16);
    bufp->fullSData(oldp+14153,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[1]),16);
    bufp->fullSData(oldp+14154,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[2]),16);
    bufp->fullSData(oldp+14155,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[3]),16);
    bufp->fullSData(oldp+14156,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[4]),16);
    bufp->fullSData(oldp+14157,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[5]),16);
    bufp->fullSData(oldp+14158,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[6]),16);
    bufp->fullSData(oldp+14159,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_input_data_out[7]),16);
    bufp->fullSData(oldp+14160,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[0]),16);
    bufp->fullSData(oldp+14161,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[1]),16);
    bufp->fullSData(oldp+14162,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[2]),16);
    bufp->fullSData(oldp+14163,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[3]),16);
    bufp->fullSData(oldp+14164,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[4]),16);
    bufp->fullSData(oldp+14165,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[5]),16);
    bufp->fullSData(oldp+14166,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[6]),16);
    bufp->fullSData(oldp+14167,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_weight_data_out[7]),16);
    bufp->fullSData(oldp+14168,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[0]),16);
    bufp->fullSData(oldp+14169,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[1]),16);
    bufp->fullSData(oldp+14170,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[2]),16);
    bufp->fullSData(oldp+14171,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[3]),16);
    bufp->fullSData(oldp+14172,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[4]),16);
    bufp->fullSData(oldp+14173,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[5]),16);
    bufp->fullSData(oldp+14174,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[6]),16);
    bufp->fullSData(oldp+14175,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out[7]),16);
    bufp->fullSData(oldp+14176,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[0]),16);
    bufp->fullSData(oldp+14177,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[1]),16);
    bufp->fullSData(oldp+14178,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[2]),16);
    bufp->fullSData(oldp+14179,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[3]),16);
    bufp->fullSData(oldp+14180,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[4]),16);
    bufp->fullSData(oldp+14181,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[5]),16);
    bufp->fullSData(oldp+14182,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[6]),16);
    bufp->fullSData(oldp+14183,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_Y_data_out[7]),16);
    bufp->fullSData(oldp+14184,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[0]),16);
    bufp->fullSData(oldp+14185,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[1]),16);
    bufp->fullSData(oldp+14186,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[2]),16);
    bufp->fullSData(oldp+14187,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[3]),16);
    bufp->fullSData(oldp+14188,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[4]),16);
    bufp->fullSData(oldp+14189,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[5]),16);
    bufp->fullSData(oldp+14190,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[6]),16);
    bufp->fullSData(oldp+14191,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_H_data_out[7]),16);
    bufp->fullSData(oldp+14192,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[0]),16);
    bufp->fullSData(oldp+14193,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[1]),16);
    bufp->fullSData(oldp+14194,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[2]),16);
    bufp->fullSData(oldp+14195,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[3]),16);
    bufp->fullSData(oldp+14196,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[4]),16);
    bufp->fullSData(oldp+14197,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[5]),16);
    bufp->fullSData(oldp+14198,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[6]),16);
    bufp->fullSData(oldp+14199,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in[7]),16);
    bufp->fullSData(oldp+14200,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[0]),16);
    bufp->fullSData(oldp+14201,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[1]),16);
    bufp->fullSData(oldp+14202,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[2]),16);
    bufp->fullSData(oldp+14203,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[3]),16);
    bufp->fullSData(oldp+14204,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[4]),16);
    bufp->fullSData(oldp+14205,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[5]),16);
    bufp->fullSData(oldp+14206,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[6]),16);
    bufp->fullSData(oldp+14207,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in[7]),16);
    bufp->fullSData(oldp+14208,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [0U]),16);
    bufp->fullSData(oldp+14209,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [0U]),16);
    bufp->fullSData(oldp+14210,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14211,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14212,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14213,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__0__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14214,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [1U]),16);
    bufp->fullSData(oldp+14215,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [1U]),16);
    bufp->fullSData(oldp+14216,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14217,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14218,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14219,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__1__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14220,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [2U]),16);
    bufp->fullSData(oldp+14221,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [2U]),16);
    bufp->fullSData(oldp+14222,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14223,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14224,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14225,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__2__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14226,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [3U]),16);
    bufp->fullSData(oldp+14227,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [3U]),16);
    bufp->fullSData(oldp+14228,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14229,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14230,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14231,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__3__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14232,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [4U]),16);
    bufp->fullSData(oldp+14233,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [4U]),16);
    bufp->fullSData(oldp+14234,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14235,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14236,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14237,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__4__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14238,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [5U]),16);
    bufp->fullSData(oldp+14239,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [5U]),16);
    bufp->fullSData(oldp+14240,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14241,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14242,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14243,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__5__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14244,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [6U]),16);
    bufp->fullSData(oldp+14245,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [6U]),16);
    bufp->fullSData(oldp+14246,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14247,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14248,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14249,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__6__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14250,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__value_old_in
                                [7U]),16);
    bufp->fullSData(oldp+14251,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__grad_value_in
                                [7U]),16);
    bufp->fullSData(oldp+14252,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_value_out),16);
    bufp->fullSData(oldp+14253,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_in_a),16);
    bufp->fullBit(oldp+14254,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_overflow));
    bufp->fullIData(oldp+14255,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__gradient_descent_gen__BRA__7__KET____DOT__gradient_descent_inst__DOT__sub_full),17);
    bufp->fullSData(oldp+14256,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [2U]),16);
    bufp->fullSData(oldp+14257,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [3U]),16);
    bufp->fullSData(oldp+14258,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [4U]),16);
    bufp->fullSData(oldp+14259,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [5U]),16);
    bufp->fullSData(oldp+14260,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [6U]),16);
    bufp->fullSData(oldp+14261,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_rd_bias_data_out
                                [7U]),16);
    bufp->fullSData(oldp+14262,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14263,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14264,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14265,((0x1ffffU & (VL_EXTENDS_II(17,16, 
                                                           (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                                             << 8U) 
                                                            | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                                             + VL_EXTENDS_II(17,16, 
                                                             (((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__inb_zoom__DOT__outf)))))),17);
    bufp->fullSData(oldp+14266,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14267,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14268,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14269,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14270,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14271,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14272,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14273,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14274,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14275,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14276,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14277,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14278,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14279,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14280,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14281,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14282,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14283,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14284,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14285,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14286,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14287,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14288,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14289,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14290,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14291,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14292,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14293,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14294,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14295,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14296,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14297,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14298,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14299,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14300,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14301,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14302,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14303,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14304,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14305,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14306,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14307,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14308,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14309,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14310,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14311,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14312,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14313,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14314,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14315,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14316,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14317,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14318,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14319,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14320,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14321,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14322,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14323,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14324,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14325,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14326,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14327,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14328,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14329,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14330,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14331,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14332,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14333,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14334,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14335,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14336,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14337,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14338,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14339,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14340,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14341,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14342,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14343,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14344,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14345,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14346,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14347,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14348,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14349,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14350,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14351,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14352,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14353,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14354,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14355,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14356,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14357,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14358,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14359,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14360,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14361,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14362,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14363,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14364,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14365,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14366,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14367,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14368,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14369,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14370,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14371,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14372,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14373,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14374,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14375,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14376,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14377,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf))),16);
    bufp->fullSData(oldp+14378,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__inr),16);
    bufp->fullCData(oldp+14379,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__ini),8);
    bufp->fullCData(oldp+14380,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14381,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__ina_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14382,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14383,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14384,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14385,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14386,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res),32);
    bufp->fullIData(oldp+14387,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__inr),24);
    bufp->fullSData(oldp+14388,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__ini),16);
    bufp->fullCData(oldp+14389,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14390,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst.__PVT__mult__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14391,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data),24);
    bufp->fullBit(oldp+14392,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_vsync));
    bufp->fullBit(oldp+14393,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_href));
    bufp->fullBit(oldp+14394,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_de));
    bufp->fullCData(oldp+14395,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data 
                                          >> 0x10U))),8);
    bufp->fullCData(oldp+14396,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data 
                                          >> 8U))),8);
    bufp->fullCData(oldp+14397,((0xffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__special_data)),8);
    bufp->fullIData(oldp+14398,((0xfffffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                             >> 2U))),20);
    bufp->fullBit(oldp+14399,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_base_sram__DOT____VdfgTmp_he15977e2__0)))));
    bufp->fullBit(oldp+14400,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we) 
                                     | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                        >> 0x16U)))));
    bufp->fullBit(oldp+14401,((1U & (~ ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                            >> 0x16U)) 
                                        & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we))))));
    bufp->fullBit(oldp+14402,(vlSelf->sim_top__DOT__ext_ram_ce_n));
    bufp->fullBit(oldp+14403,((1U & ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                         >> 0x16U)) 
                                     | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we)))));
    bufp->fullBit(oldp+14404,((1U & ((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                         >> 0x16U)) 
                                     | (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we))))));
    bufp->fullCData(oldp+14405,(vlSelf->sim_top__DOT__u_base_sram__DOT__write_enable),4);
    bufp->fullCData(oldp+14406,(vlSelf->sim_top__DOT__u_ext_sram__DOT__write_enable),4);
    bufp->fullBit(oldp+14407,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_awready));
    bufp->fullBit(oldp+14408,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_wready));
    bufp->fullBit(oldp+14409,(vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_bready));
    bufp->fullBit(oldp+14410,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_arready));
    bufp->fullBit(oldp+14411,(vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rlast));
    bufp->fullBit(oldp+14412,(vlSelf->sim_top__DOT__u_soc_top__DOT__s0_axi_rready));
    bufp->fullCData(oldp+14413,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_wready),8);
    bufp->fullQData(oldp+14414,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bid),48);
    bufp->fullCData(oldp+14416,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_bvalid),8);
    bufp->fullQData(oldp+14417,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rid),48);
    bufp->fullCData(oldp+14419,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rlast),8);
    bufp->fullCData(oldp+14420,(vlSelf->sim_top__DOT__u_soc_top__DOT____Vcellinp__u_AXI_top__m_axi_rvalid),8);
    bufp->fullBit(oldp+14421,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete));
    bufp->fullCData(oldp+14422,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request),3);
    bufp->fullBit(oldp+14423,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next));
    bufp->fullBit(oldp+14424,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_arvalid_next)))));
    bufp->fullCData(oldp+14425,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id),4);
    bufp->fullBit(oldp+14426,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid));
    bufp->fullSData(oldp+14427,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request),9);
    bufp->fullSData(oldp+14428,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_acknowledge),9);
    bufp->fullBit(oldp+14429,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rlast_mux));
    bufp->fullBit(oldp+14430,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_rvalid_mux));
    bufp->fullCData(oldp+14431,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
                                  << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0))),2);
    bufp->fullCData(oldp+14432,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_complete),2);
    bufp->fullSData(oldp+14433,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_request),16);
    bufp->fullSData(oldp+14434,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),9);
    bufp->fullSData(oldp+14435,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__0__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),16);
    bufp->fullCData(oldp+14436,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id),4);
    bufp->fullBit(oldp+14437,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid));
    bufp->fullSData(oldp+14438,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request),9);
    bufp->fullSData(oldp+14439,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_acknowledge),9);
    bufp->fullBit(oldp+14440,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rlast_mux));
    bufp->fullBit(oldp+14441,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_rvalid_mux));
    bufp->fullCData(oldp+14442,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next),3);
    bufp->fullBit(oldp+14443,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next));
    bufp->fullBit(oldp+14444,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next));
    bufp->fullBit(oldp+14445,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next));
    bufp->fullBit(oldp+14446,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next));
    bufp->fullBit(oldp+14447,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next));
    bufp->fullBit(oldp+14448,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match));
    bufp->fullBit(oldp+14449,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start));
    bufp->fullCData(oldp+14450,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
                                  << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0))),2);
    bufp->fullCData(oldp+14451,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_complete),2);
    bufp->fullSData(oldp+14452,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_request),16);
    bufp->fullSData(oldp+14453,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),9);
    bufp->fullSData(oldp+14454,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),16);
    bufp->fullBit(oldp+14455,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__s_axi_rvalid_next));
    bufp->fullBit(oldp+14456,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__temp_s_axi_rvalid_next));
    bufp->fullBit(oldp+14457,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_output));
    bufp->fullBit(oldp+14458,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_input_to_temp));
    bufp->fullBit(oldp+14459,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk2__DOT__store_axi_r_temp_to_output));
    bufp->fullCData(oldp+14460,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id),4);
    bufp->fullBit(oldp+14461,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid));
    bufp->fullSData(oldp+14462,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request),9);
    bufp->fullSData(oldp+14463,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_acknowledge),9);
    bufp->fullBit(oldp+14464,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rlast_mux));
    bufp->fullBit(oldp+14465,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_rvalid_mux));
    bufp->fullCData(oldp+14466,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
                                  << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0))),2);
    bufp->fullCData(oldp+14467,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_trans_complete),2);
    bufp->fullSData(oldp+14468,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_request),16);
    bufp->fullSData(oldp+14469,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),9);
    bufp->fullSData(oldp+14470,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__s_ifaces__BRA__2__KET____DOT__r_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),16);
    bufp->fullBit(oldp+14471,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__trans_complete));
    bufp->fullBit(oldp+14472,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next));
    bufp->fullBit(oldp+14473,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__reg_inst__DOT__genblk1__DOT__m_axi_awvalid_next)))));
    bufp->fullCData(oldp+14474,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_id),4);
    bufp->fullBit(oldp+14475,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__s_cpl_valid));
    bufp->fullSData(oldp+14476,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request),9);
    bufp->fullSData(oldp+14477,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_acknowledge),9);
    bufp->fullBit(oldp+14478,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__m_axi_bvalid_mux));
    bufp->fullCData(oldp+14479,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
                                  << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0))),2);
    bufp->fullCData(oldp+14480,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__addr_inst__DOT__thread_trans_complete),2);
    bufp->fullSData(oldp+14481,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_request),16);
    bufp->fullSData(oldp+14482,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),9);
    bufp->fullSData(oldp+14483,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__0__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),16);
    bufp->fullCData(oldp+14484,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_id),4);
    bufp->fullBit(oldp+14485,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__s_cpl_valid));
    bufp->fullSData(oldp+14486,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request),9);
    bufp->fullSData(oldp+14487,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_acknowledge),9);
    bufp->fullBit(oldp+14488,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__m_axi_bvalid_mux));
    bufp->fullCData(oldp+14489,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__state_next),3);
    bufp->fullBit(oldp+14490,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__s_axi_aready_next));
    bufp->fullBit(oldp+14491,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_axi_avalid_next));
    bufp->fullBit(oldp+14492,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_decerr_next));
    bufp->fullBit(oldp+14493,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_wc_valid_next));
    bufp->fullBit(oldp+14494,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__m_rc_valid_next));
    bufp->fullBit(oldp+14495,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__match));
    bufp->fullBit(oldp+14496,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__trans_start));
    bufp->fullCData(oldp+14497,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
                                  << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0))),2);
    bufp->fullCData(oldp+14498,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__addr_inst__DOT__thread_trans_complete),2);
    bufp->fullSData(oldp+14499,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_request),16);
    bufp->fullSData(oldp+14500,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),9);
    bufp->fullSData(oldp+14501,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),16);
    bufp->fullBit(oldp+14502,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next));
    bufp->fullBit(oldp+14503,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__1__KET____DOT__reg_inst__DOT__genblk3__DOT__s_axi_bvalid_next)))));
    bufp->fullCData(oldp+14504,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_id),4);
    bufp->fullBit(oldp+14505,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__s_cpl_valid));
    bufp->fullSData(oldp+14506,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request),9);
    bufp->fullSData(oldp+14507,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_acknowledge),9);
    bufp->fullBit(oldp+14508,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__m_axi_bvalid_mux));
    bufp->fullCData(oldp+14509,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h070dda98__0) 
                                  << 1U) | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT____VdfgTmp_h3adc5410__0))),2);
    bufp->fullCData(oldp+14510,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__addr_inst__DOT__thread_trans_complete),2);
    bufp->fullSData(oldp+14511,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_request),16);
    bufp->fullSData(oldp+14512,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),9);
    bufp->fullSData(oldp+14513,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__s_ifaces__BRA__2__KET____DOT__b_arb_inst__DOT____Vcellinp__priority_encoder_masked__input_unencoded),16);
    bufp->fullBit(oldp+14514,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__ram_rlast));
    bufp->fullIData(oldp+14515,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr),32);
    bufp->fullBit(oldp+14516,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_cs));
    bufp->fullBit(oldp+14517,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_we));
    bufp->fullBit(oldp+14518,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__soc_sram_addr 
                                     >> 0x16U))));
    bufp->fullCData(oldp+14519,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__be_out),4);
    bufp->fullCData(oldp+14520,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_id),6);
    bufp->fullIData(oldp+14521,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_addr),32);
    bufp->fullCData(oldp+14522,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_len),8);
    bufp->fullCData(oldp+14523,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_size),3);
    bufp->fullCData(oldp+14524,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__ax_req_d_burst),2);
    bufp->fullCData(oldp+14525,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__state_d),3);
    bufp->fullIData(oldp+14526,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__req_addr_d),32);
    bufp->fullCData(oldp+14527,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cnt_d),8);
    bufp->fullIData(oldp+14528,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__aligned_address),32);
    bufp->fullIData(oldp+14529,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__wrap_boundary),32);
    bufp->fullIData(oldp+14530,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__upper_wrap_boundary),32);
    bufp->fullIData(oldp+14531,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_axi_wrap_ram_sp_ext__DOT__u_axi_sram_sp__DOT__cons_addr),32);
    bufp->fullIData(oldp+14532,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_confreg__DOT__confreg_int_state),32);
    bufp->fullBit(oldp+14533,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_video_to_axis_bridge__DOT__u_sync_fifo__DOT__write_valid));
    bufp->fullCData(oldp+14534,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_request),4);
    bufp->fullCData(oldp+14535,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),3);
    bufp->fullCData(oldp+14536,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__Vcellinp__priority_encoder_masked__input_unencoded),4);
    bufp->fullIData(oldp+14537,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_araddr),32);
    bufp->fullBit(oldp+14538,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_arvalid));
    bufp->fullBit(oldp+14539,((1U & (~ (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushCC_full)))));
    bufp->fullBit(oldp+14540,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_axi_rready));
    bufp->fullBit(oldp+14541,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_busy_tpu));
    bufp->fullBit(oldp+14542,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_done_tpu));
    bufp->fullBit(oldp+14543,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_error_tpu));
    bufp->fullIData(oldp+14544,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_pc_current),32);
    bufp->fullIData(oldp+14545,(vlSelf->sim_top__DOT__u_soc_top__DOT__tpu_last_ins),32);
    bufp->fullWData(oldp+14546,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out),128);
    bufp->fullCData(oldp+14550,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out),8);
    bufp->fullCData(oldp+14551,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__state),3);
    bufp->fullIData(oldp+14552,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_reg),32);
    bufp->fullBit(oldp+14553,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_valid_reg));
    bufp->fullCData(oldp+14554,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type),4);
    bufp->fullIData(oldp+14555,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_limit),24);
    bufp->fullIData(oldp+14556,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_counter),24);
    bufp->fullBit(oldp+14557,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_seen_valid));
    bufp->fullSData(oldp+14558,((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U])),16);
    bufp->fullSData(oldp+14559,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+14560,((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U])),16);
    bufp->fullSData(oldp+14561,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+14562,((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U])),16);
    bufp->fullSData(oldp+14563,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+14564,((0xffffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U])),16);
    bufp->fullSData(oldp+14565,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U] 
                                 >> 0x10U)),16);
    bufp->fullBit(oldp+14566,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out))));
    bufp->fullBit(oldp+14567,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                                     >> 1U))));
    bufp->fullBit(oldp+14568,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                                     >> 2U))));
    bufp->fullBit(oldp+14569,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                                     >> 3U))));
    bufp->fullBit(oldp+14570,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                                     >> 4U))));
    bufp->fullBit(oldp+14571,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                                     >> 5U))));
    bufp->fullBit(oldp+14572,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                                     >> 6U))));
    bufp->fullBit(oldp+14573,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out) 
                                     >> 7U))));
    bufp->fullBit(oldp+14574,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__vpu_valid_any));
    bufp->fullBit(oldp+14575,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal));
    bufp->fullBit(oldp+14576,(((0U == (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type)) 
                               & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT____VdfgTmp_hf8428ce9__0))));
    bufp->fullBit(oldp+14577,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal_done));
    bufp->fullBit(oldp+14578,(((0U != (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_type)) 
                               & ((0U != vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_limit) 
                                  & ((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__wait_signal_done)) 
                                     & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT____VdfgTmp_hf8428ce9__0))))));
    bufp->fullCData(oldp+14579,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__ins_reg 
                                 >> 0x1cU)),4);
    bufp->fullSData(oldp+14580,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[0]),16);
    bufp->fullSData(oldp+14581,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[1]),16);
    bufp->fullSData(oldp+14582,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[2]),16);
    bufp->fullSData(oldp+14583,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[3]),16);
    bufp->fullSData(oldp+14584,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[4]),16);
    bufp->fullSData(oldp+14585,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[5]),16);
    bufp->fullSData(oldp+14586,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[6]),16);
    bufp->fullSData(oldp+14587,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_data_in[7]),16);
    bufp->fullBit(oldp+14588,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[0]));
    bufp->fullBit(oldp+14589,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[1]));
    bufp->fullBit(oldp+14590,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[2]));
    bufp->fullBit(oldp+14591,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[3]));
    bufp->fullBit(oldp+14592,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[4]));
    bufp->fullBit(oldp+14593,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[5]));
    bufp->fullBit(oldp+14594,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[6]));
    bufp->fullBit(oldp+14595,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_wr_valid_in[7]));
    bufp->fullSData(oldp+14596,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[0]),16);
    bufp->fullSData(oldp+14597,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[1]),16);
    bufp->fullSData(oldp+14598,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[2]),16);
    bufp->fullSData(oldp+14599,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[3]),16);
    bufp->fullSData(oldp+14600,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[4]),16);
    bufp->fullSData(oldp+14601,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[5]),16);
    bufp->fullSData(oldp+14602,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[6]),16);
    bufp->fullSData(oldp+14603,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_data_in[7]),16);
    bufp->fullBit(oldp+14604,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[0]));
    bufp->fullBit(oldp+14605,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[1]));
    bufp->fullBit(oldp+14606,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[2]));
    bufp->fullBit(oldp+14607,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[3]));
    bufp->fullBit(oldp+14608,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[4]));
    bufp->fullBit(oldp+14609,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[5]));
    bufp->fullBit(oldp+14610,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[6]));
    bufp->fullBit(oldp+14611,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__ub_inst__DOT__ub_wr_valid_in[7]));
    __Vtemp_h20b2666c__0[0U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[0U];
    __Vtemp_h20b2666c__0[1U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[1U];
    __Vtemp_h20b2666c__0[2U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[2U];
    __Vtemp_h20b2666c__0[3U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_data_bus_out[3U];
    __Vtemp_h20b2666c__0[4U] = vlSelf->sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__vpu_valid_bus_out;
    bufp->fullWData(oldp+14612,(__Vtemp_h20b2666c__0),136);
    bufp->fullCData(oldp+14617,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushCC_pushPtrGray),3);
    bufp->fullCData(oldp+14618,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushCC_pushPtr),3);
    bufp->fullCData(oldp+14619,((7U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushCC_pushPtr)))),3);
    bufp->fullBit(oldp+14620,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__io_push_fire));
    bufp->fullBit(oldp+14621,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__arFifo__DOT__pushCC_full));
    bufp->fullCData(oldp+14622,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__awFifo__DOT__pushCC_pushPtrGray),3);
    bufp->fullCData(oldp+14623,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__wFifo__DOT__pushCC_pushPtrGray),4);
    bufp->fullSData(oldp+14624,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14625,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14626,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14627,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14628,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14629,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14630,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14631,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14632,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14633,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14634,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14635,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14636,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14637,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14638,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14639,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14640,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14641,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14642,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14643,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14644,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14645,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14646,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14647,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14648,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14649,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14650,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14651,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14652,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14653,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullSData(oldp+14654,((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi) 
                                  << 8U) | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf))),16);
    bufp->fullIData(oldp+14655,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__inr),17);
    bufp->fullSData(oldp+14656,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__ini),9);
    bufp->fullCData(oldp+14657,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outi),8);
    bufp->fullCData(oldp+14658,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst.__PVT__adder__DOT__res_zoom__DOT__outf),8);
    bufp->fullIData(oldp+14659,((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1)),32);
    bufp->fullCData(oldp+14660,((3U & (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                               >> 0x24U)))),2);
    bufp->fullBit(oldp+14661,((1U & (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                             >> 0x26U)))));
    bufp->fullCData(oldp+14662,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd)
                                  ? 1U : 2U)),2);
    bufp->fullIData(oldp+14663,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd)
                                  ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]
                                  : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),32);
    __Vtemp_h076b7f5a__0[0U] = ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd)
                                 ? vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]
                                 : ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])));
    __Vtemp_h076b7f5a__0[1U] = 0U;
    __Vtemp_h076b7f5a__0[2U] = 0U;
    __Vtemp_h076b7f5a__0[3U] = 0U;
    __Vtemp_h076b7f5a__0[4U] = (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd)
                                  ? 1U : 2U) << 6U);
    bufp->fullWData(oldp+14664,(__Vtemp_h076b7f5a__0),136);
    bufp->fullBit(oldp+14669,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_div_enable));
    bufp->fullBit(oldp+14670,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x19U))));
    bufp->fullIData(oldp+14671,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]),32);
    bufp->fullIData(oldp+14672,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]),32);
    bufp->fullCData(oldp+14673,((3U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                       >> 3U))),2);
    bufp->fullIData(oldp+14674,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr),32);
    bufp->fullBit(oldp+14675,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_op));
    bufp->fullCData(oldp+14676,(((1U & (- (IData)((
                                                   vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x1fU)))) 
                                 | (2U & (- (IData)(
                                                    (1U 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                    >> 0x1eU)))))))))),3);
    bufp->fullCData(oldp+14677,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
                                          >> 4U))),8);
    bufp->fullCData(oldp+14678,((0xfU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr)),4);
    bufp->fullCData(oldp+14679,((0xfU & ((((- (IData)(
                                                      (1U 
                                                       & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                          >> 0x1eU)))) 
                                           >> 3U) & 
                                          ((0x1ffffff8U 
                                            & ((3U 
                                                == 
                                                (3U 
                                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                               << 3U)) 
                                           | ((0x1ffffffcU 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                  << 2U)) 
                                              | ((0x1ffffffeU 
                                                  & ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                     << 1U)) 
                                                 | (0x1fffffffU 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va))))))) 
                                         | ((((- (IData)(
                                                         (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                          >> 0x1fU))) 
                                              >> 3U) 
                                             & ((0x1ffffff8U 
                                                 & ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                    << 3U)) 
                                                | ((0x1ffffffcU 
                                                    & ((2U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (- (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (3U 
                                                                     & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))))))) 
                                            | (0xfU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                             >> 0x1eU))))))) 
                                                  >> 3U)))))),4);
    bufp->fullIData(oldp+14680,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_wdata),32);
    bufp->fullCData(oldp+14681,((0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])),5);
    bufp->fullBit(oldp+14682,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req));
    bufp->fullCData(oldp+14683,((3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                                        << 1U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                  >> 0x1fU)))),2);
    bufp->fullCData(oldp+14684,((0x7fU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U] 
                                          >> 5U))),7);
    bufp->fullIData(oldp+14685,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
                                 >> 0xdU)),19);
    bufp->fullBit(oldp+14686,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__data_vaddr 
                                     >> 0xcU))));
    bufp->fullIData(oldp+14687,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va),32);
    bufp->fullWData(oldp+14688,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r),353);
    bufp->fullSData(oldp+14700,((0x3fffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xbU))),14);
    bufp->fullBit(oldp+14701,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 9U))));
    bufp->fullBit(oldp+14702,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 8U))));
    bufp->fullBit(oldp+14703,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 7U))));
    bufp->fullBit(oldp+14704,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 6U))));
    bufp->fullBit(oldp+14705,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 5U))));
    bufp->fullIData(oldp+14706,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]),32);
    bufp->fullIData(oldp+14707,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]),32);
    bufp->fullCData(oldp+14708,((0xfU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                         >> 0x1aU))),4);
    bufp->fullCData(oldp+14709,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                 >> 0x1eU)),2);
    bufp->fullIData(oldp+14710,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                  << 0x1eU) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                               >> 2U))),32);
    bufp->fullSData(oldp+14711,((0x3fffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 3U))),14);
    bufp->fullIData(oldp+14712,(((0x40000U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                                  ? ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                      & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                     | ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                        & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            << 0x1eU) 
                                           | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                              >> 2U))))
                                  : vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])),32);
    bufp->fullIData(oldp+14713,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                 | ((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                    & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                        << 0x1eU) | 
                                       (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                        >> 2U))))),32);
    bufp->fullBit(oldp+14714,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                     >> 2U))));
    bufp->fullBit(oldp+14715,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+14716,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+14717,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U])));
    bufp->fullBit(oldp+14718,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp));
    bufp->fullSData(oldp+14719,((0x1ffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                           >> 0x13U))),9);
    bufp->fullSData(oldp+14720,((((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp_ale) 
                                  << 9U) | (0x1ffU 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                               >> 0x13U)))),10);
    bufp->fullBit(oldp+14721,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                     >> 1U))));
    bufp->fullBit(oldp+14722,((IData)((0U != (0xc000000U 
                                              & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])))));
    bufp->fullBit(oldp+14723,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+14724,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+14725,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                     >> 0x1eU))));
    bufp->fullBit(oldp+14726,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                               >> 0x1fU)));
    bufp->fullBit(oldp+14727,((1U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U])));
    bufp->fullBit(oldp+14728,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 2U))));
    bufp->fullBit(oldp+14729,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 1U))));
    bufp->fullBit(oldp+14730,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 3U))));
    bufp->fullSData(oldp+14731,((0x3ffU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])),10);
    bufp->fullIData(oldp+14732,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                 >> 0xdU)),19);
    bufp->fullBit(oldp+14733,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 5U))));
    bufp->fullBit(oldp+14734,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 6U))));
    bufp->fullBit(oldp+14735,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 7U))));
    bufp->fullBit(oldp+14736,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 8U))));
    bufp->fullBit(oldp+14737,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+14738,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+14739,((1U & (IData)(((0U != 
                                              (0xc000400U 
                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])) 
                                             | (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_div_enable))))));
    bufp->fullBit(oldp+14740,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__es_forward_enable));
    bufp->fullBit(oldp+14741,((0U == (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
    bufp->fullBit(oldp+14742,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__excp_ale));
    bufp->fullBit(oldp+14743,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__access_mem));
    bufp->fullBit(oldp+14744,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 4U))));
    bufp->fullCData(oldp+14745,((3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)),2);
    bufp->fullBit(oldp+14746,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__icacop_inst));
    bufp->fullBit(oldp+14747,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__dcacop_inst));
    bufp->fullBit(oldp+14748,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__preld_inst));
    bufp->fullBit(oldp+14749,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+14750,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                     >> 9U))));
    bufp->fullIData(oldp+14751,(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                                  << 0x14U) | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                               >> 0xcU))),32);
    bufp->fullQData(oldp+14752,((((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU])) 
                                  << 0x34U) | (((QData)((IData)(
                                                                vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[9U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[8U])) 
                                                  >> 0xcU)))),64);
    bufp->fullBit(oldp+14754,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                     >> 0xcU))));
    bufp->fullCData(oldp+14755,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                          >> 0xdU))),8);
    bufp->fullCData(oldp+14756,((0xffU & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                          >> 0x15U))),8);
    bufp->fullBit(oldp+14757,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                     >> 0x1dU))));
    bufp->fullBit(oldp+14758,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                     >> 0x1eU))));
    bufp->fullIData(oldp+14759,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1),32);
    bufp->fullIData(oldp+14760,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2),32);
    bufp->fullCData(oldp+14761,((((3U == (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                  << 3U) | (((2U == 
                                              (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                             << 2U) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))))),4);
    bufp->fullCData(oldp+14762,((((2U == (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                  << 3U) | (((2U == 
                                              (3U & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)) 
                                             << 2U) 
                                            | (3U & 
                                               (- (IData)(
                                                          (0U 
                                                           == 
                                                           (3U 
                                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))))))),4);
    bufp->fullIData(oldp+14763,(((((- (IData)((3U == 
                                               (3U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                  << 0x18U) | ((0xff0000U 
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
                                                        & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))))),32);
    bufp->fullIData(oldp+14764,(((((- (IData)((2U == 
                                               (3U 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                   & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                  << 0x10U) | (0xffffU 
                                               & ((- (IData)(
                                                             (0U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__error_va)))) 
                                                  & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),32);
    bufp->fullBit(oldp+14765,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0xbU))));
    bufp->fullBit(oldp+14766,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0xcU))));
    bufp->fullBit(oldp+14767,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0xdU))));
    bufp->fullBit(oldp+14768,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0xeU))));
    bufp->fullBit(oldp+14769,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0xfU))));
    bufp->fullBit(oldp+14770,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+14771,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x11U))));
    bufp->fullBit(oldp+14772,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+14773,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+14774,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+14775,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+14776,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+14777,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+14778,((1U & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                     >> 0x18U))));
    bufp->fullIData(oldp+14779,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result),32);
    bufp->fullIData(oldp+14780,((1U & (((~ (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2 
                                            >> 0x1fU)) 
                                        & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                           >> 0x1fU)) 
                                       | ((~ ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                               ^ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                                              >> 0x1fU)) 
                                          & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__add_sub_result 
                                             >> 0x1fU))))),32);
    bufp->fullIData(oldp+14781,((1U & (~ (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                                                      + 
                                                      ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                       + (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                                     >> 0x20U)))))),32);
    bufp->fullIData(oldp+14782,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)),32);
    bufp->fullIData(oldp+14783,((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result)),32);
    bufp->fullIData(oldp+14784,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__or_result),32);
    bufp->fullIData(oldp+14785,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                 ^ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)),32);
    bufp->fullIData(oldp+14786,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                 << (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2))),32);
    bufp->fullQData(oldp+14787,(((((QData)((IData)(
                                                   (- (IData)(
                                                              ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                >> 0x15U) 
                                                               & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                                                  >> 0x1fU)))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1))) 
                                 >> (0x1fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2))),64);
    bufp->fullIData(oldp+14789,((IData)(((((QData)((IData)(
                                                           (- (IData)(
                                                                      ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                        >> 0x15U) 
                                                                       & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1 
                                                                          >> 0x1fU)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1))) 
                                         >> (0x1fU 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2)))),32);
    bufp->fullIData(oldp+14790,(((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                                 & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)),32);
    bufp->fullIData(oldp+14791,(((~ vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src2) 
                                 | vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)),32);
    bufp->fullIData(oldp+14792,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b),32);
    bufp->fullBit(oldp+14793,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin));
    bufp->fullBit(oldp+14794,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__es_alu_src1)) 
                                               + ((QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_b)) 
                                                  + (QData)((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__u_alu__DOT__adder_cin)))) 
                                              >> 0x20U))))));
    bufp->fullIData(oldp+14795,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__id_stage__DOT__ms_forward_data),32);
    bufp->fullQData(oldp+14796,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__tmp_d),33);
    bufp->fullQData(oldp+14798,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__result_r),33);
    bufp->fullQData(oldp+14800,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
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
                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])))),33);
    bufp->fullQData(oldp+14802,((QData)((IData)(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed)
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
                                                 vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),33);
    bufp->fullBit(oldp+14804,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_div_signed));
    bufp->fullBit(oldp+14805,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_div__DOT__real_x_31));
    bufp->fullBit(oldp+14806,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__start_cmd));
    bufp->fullBit(oldp+14807,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__status_cmd));
    bufp->fullBit(oldp+14808,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_cmd));
    bufp->fullBit(oldp+14809,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__ub_write_cmd));
    bufp->fullBit(oldp+14810,(((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__es_lacc_req) 
                               & (3U == (3U & ((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xbU] 
                                                << 1U) 
                                               | (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+14811,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__fifo_cmd));
    bufp->fullCData(oldp+14812,((0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])),6);
    bufp->fullBit(oldp+14813,((0x20U <= (0x3fU & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))));
    bufp->fullBit(oldp+14814,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_lacc_core__DOT__read_pair_valid));
    bufp->fullQData(oldp+14815,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX),64);
    bufp->fullQData(oldp+14817,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY),33);
    bufp->fullIData(oldp+14819,(((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                                  << 0x10U) | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__neg2x) 
                                                 | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai.__PVT__negx)) 
                                                << 0xfU) 
                                               | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__neg2x) 
                                                    | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai.__PVT__negx)) 
                                                   << 0xeU) 
                                                  | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__neg2x) 
                                                       | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai.__PVT__negx)) 
                                                      << 0xdU) 
                                                     | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__neg2x) 
                                                          | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai.__PVT__negx)) 
                                                         << 0xcU) 
                                                        | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__neg2x) 
                                                             | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai.__PVT__negx)) 
                                                            << 0xbU) 
                                                           | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__neg2x) 
                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai.__PVT__negx)) 
                                                               << 0xaU) 
                                                              | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__neg2x) 
                                                                   | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai.__PVT__negx)) 
                                                                  << 9U) 
                                                                 | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__neg2x) 
                                                                      | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai.__PVT__negx)) 
                                                                     << 8U) 
                                                                    | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai.__PVT__neg2x) 
                                                                         | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai.__PVT__negx)) 
                                                                        << 7U) 
                                                                       | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai.__PVT__neg2x) 
                                                                            | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai.__PVT__negx)) 
                                                                           << 6U) 
                                                                          | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai.__PVT__neg2x) 
                                                                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai.__PVT__negx)) 
                                                                              << 5U) 
                                                                             | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai.__PVT__negx)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai.__PVT__negx)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0) 
                                                                                | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx))))))))))))))))))),17);
    bufp->fullQData(oldp+14820,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[0]),64);
    bufp->fullQData(oldp+14822,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[1]),64);
    bufp->fullQData(oldp+14824,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[2]),64);
    bufp->fullQData(oldp+14826,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[3]),64);
    bufp->fullQData(oldp+14828,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[4]),64);
    bufp->fullQData(oldp+14830,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[5]),64);
    bufp->fullQData(oldp+14832,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[6]),64);
    bufp->fullQData(oldp+14834,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[7]),64);
    bufp->fullQData(oldp+14836,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[8]),64);
    bufp->fullQData(oldp+14838,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[9]),64);
    bufp->fullQData(oldp+14840,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[10]),64);
    bufp->fullQData(oldp+14842,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[11]),64);
    bufp->fullQData(oldp+14844,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[12]),64);
    bufp->fullQData(oldp+14846,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[13]),64);
    bufp->fullQData(oldp+14848,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[14]),64);
    bufp->fullQData(oldp+14850,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[15]),64);
    bufp->fullQData(oldp+14852,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__BoothRes[16]),64);
    bufp->fullCData(oldp+14854,((0xfU & (IData)((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_Axi_CDC.__PVT__rFifo__DOT___zz_ram_port1 
                                                 >> 0x20U)))),4);
    bufp->fullCData(oldp+14855,((6U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY) 
                                       << 1U))),3);
    bufp->fullQData(oldp+14856,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.OutX),64);
    bufp->fullBit(oldp+14858,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx))));
    bufp->fullBit(oldp+14859,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx));
    bufp->fullBit(oldp+14860,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0));
    bufp->fullBit(oldp+14861,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0));
    bufp->fullBit(oldp+14862,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))));
    bufp->fullBit(oldp+14863,((1U & (~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+14864,((((~ (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0)))));
    bufp->fullBit(oldp+14865,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xaU)))));
    bufp->fullBit(oldp+14866,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+14867,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+14868,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+14869,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xaU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xaU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xaU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14870,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xbU)))));
    bufp->fullBit(oldp+14871,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+14872,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+14873,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+14874,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xbU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xbU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xbU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14875,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+14876,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+14877,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+14878,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+14879,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xcU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xcU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xcU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14880,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+14881,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+14882,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+14883,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+14884,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xdU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xdU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xdU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14885,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+14886,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+14887,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+14888,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+14889,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xeU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xeU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xeU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14890,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+14891,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+14892,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+14893,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+14894,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xfU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0xfU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0xfU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14895,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+14896,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+14897,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+14898,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+14899,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x10U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x10U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x10U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14900,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x11U)))));
    bufp->fullBit(oldp+14901,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+14902,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+14903,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+14904,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x11U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x11U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x11U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14905,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+14906,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+14907,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+14908,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+14909,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x12U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x12U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x12U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14910,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+14911,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+14912,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+14913,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+14914,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x13U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x13U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x13U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14915,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 1U)))));
    bufp->fullBit(oldp+14916,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+14917,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+14918,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+14919,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 1U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 1U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [1U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14920,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+14921,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+14922,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+14923,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+14924,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x14U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x14U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x14U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14925,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+14926,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+14927,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+14928,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+14929,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x15U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x15U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x15U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14930,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+14931,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+14932,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+14933,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+14934,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x16U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x16U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x16U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14935,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x17U)))));
    bufp->fullBit(oldp+14936,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+14937,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+14938,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+14939,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x17U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x17U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x17U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14940,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x18U)))));
    bufp->fullBit(oldp+14941,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+14942,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+14943,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+14944,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x18U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x18U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x18U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14945,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+14946,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+14947,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+14948,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+14949,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x19U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x19U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x19U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14950,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1aU)))));
    bufp->fullBit(oldp+14951,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+14952,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+14953,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+14954,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1aU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1aU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14955,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1bU)))));
    bufp->fullBit(oldp+14956,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+14957,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+14958,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+14959,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1bU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1bU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14960,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1cU)))));
    bufp->fullBit(oldp+14961,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+14962,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+14963,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+14964,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1cU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1cU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14965,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))));
    bufp->fullBit(oldp+14966,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+14967,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+14968,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+14969,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1dU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1dU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14970,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 2U)))));
    bufp->fullBit(oldp+14971,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+14972,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+14973,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+14974,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 2U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 2U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [2U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14975,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))));
    bufp->fullBit(oldp+14976,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+14977,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+14978,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+14979,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1eU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1eU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14980,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))));
    bufp->fullBit(oldp+14981,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+14982,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+14983,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+14984,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1fU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1fU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x1fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14985,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x20U)))));
    bufp->fullBit(oldp+14986,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+14987,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+14988,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+14989,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x20U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x20U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x20U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14990,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x21U)))));
    bufp->fullBit(oldp+14991,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+14992,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+14993,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
    bufp->fullBit(oldp+14994,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x21U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x21U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x21U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+14995,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x22U)))));
    bufp->fullBit(oldp+14996,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+14997,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+14998,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
    bufp->fullBit(oldp+14999,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x22U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x22U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x22U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15000,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x23U)))));
    bufp->fullBit(oldp+15001,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+15002,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+15003,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))))));
    bufp->fullBit(oldp+15004,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x23U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x23U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x23U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15005,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x24U)))));
    bufp->fullBit(oldp+15006,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+15007,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+15008,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))))));
    bufp->fullBit(oldp+15009,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x24U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x24U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x24U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15010,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x25U)))));
    bufp->fullBit(oldp+15011,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+15012,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+15013,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x25U))))));
    bufp->fullBit(oldp+15014,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x25U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x25U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x25U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15015,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x26U)))));
    bufp->fullBit(oldp+15016,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+15017,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+15018,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x26U))))));
    bufp->fullBit(oldp+15019,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x26U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x26U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x26U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15020,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x27U)))));
    bufp->fullBit(oldp+15021,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+15022,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+15023,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x27U))))));
    bufp->fullBit(oldp+15024,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x27U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x27U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x27U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15025,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 3U)))));
    bufp->fullBit(oldp+15026,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+15027,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+15028,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+15029,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 3U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 3U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [3U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15030,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x28U)))));
    bufp->fullBit(oldp+15031,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+15032,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+15033,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x28U))))));
    bufp->fullBit(oldp+15034,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x28U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x28U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x28U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15035,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x29U)))));
    bufp->fullBit(oldp+15036,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+15037,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+15038,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x29U))))));
    bufp->fullBit(oldp+15039,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x29U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x29U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x29U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15040,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2aU)))));
    bufp->fullBit(oldp+15041,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+15042,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+15043,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2aU))))));
    bufp->fullBit(oldp+15044,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2aU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2aU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15045,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2bU)))));
    bufp->fullBit(oldp+15046,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+15047,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+15048,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2bU))))));
    bufp->fullBit(oldp+15049,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2bU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2bU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15050,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2cU)))));
    bufp->fullBit(oldp+15051,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+15052,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+15053,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2cU))))));
    bufp->fullBit(oldp+15054,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2cU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2cU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15055,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2dU)))));
    bufp->fullBit(oldp+15056,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+15057,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+15058,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2dU))))));
    bufp->fullBit(oldp+15059,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2dU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2dU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15060,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2eU)))));
    bufp->fullBit(oldp+15061,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+15062,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+15063,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2eU))))));
    bufp->fullBit(oldp+15064,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2eU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2eU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15065,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x2fU)))));
    bufp->fullBit(oldp+15066,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+15067,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+15068,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2fU))))));
    bufp->fullBit(oldp+15069,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2fU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x2fU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x2fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15070,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x30U)))));
    bufp->fullBit(oldp+15071,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+15072,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+15073,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x30U))))));
    bufp->fullBit(oldp+15074,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x30U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x30U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x30U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15075,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x31U)))));
    bufp->fullBit(oldp+15076,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+15077,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+15078,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x31U))))));
    bufp->fullBit(oldp+15079,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x31U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x31U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x31U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15080,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 4U)))));
    bufp->fullBit(oldp+15081,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+15082,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+15083,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+15084,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 4U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 4U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [4U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15085,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x32U)))));
    bufp->fullBit(oldp+15086,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+15087,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+15088,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x32U))))));
    bufp->fullBit(oldp+15089,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x32U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x32U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x32U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15090,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x33U)))));
    bufp->fullBit(oldp+15091,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+15092,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+15093,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x33U))))));
    bufp->fullBit(oldp+15094,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x33U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x33U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x33U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15095,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x34U)))));
    bufp->fullBit(oldp+15096,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+15097,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+15098,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x34U))))));
    bufp->fullBit(oldp+15099,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x34U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x34U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x34U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15100,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x35U)))));
    bufp->fullBit(oldp+15101,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+15102,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+15103,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x35U))))));
    bufp->fullBit(oldp+15104,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x35U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x35U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x35U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15105,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x36U)))));
    bufp->fullBit(oldp+15106,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+15107,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+15108,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x36U))))));
    bufp->fullBit(oldp+15109,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x36U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x36U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x36U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15110,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x37U)))));
    bufp->fullBit(oldp+15111,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+15112,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+15113,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x37U))))));
    bufp->fullBit(oldp+15114,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x37U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x37U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x37U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15115,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x38U)))));
    bufp->fullBit(oldp+15116,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+15117,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+15118,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x38U))))));
    bufp->fullBit(oldp+15119,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x38U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x38U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x38U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15120,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x39U)))));
    bufp->fullBit(oldp+15121,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+15122,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+15123,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x39U))))));
    bufp->fullBit(oldp+15124,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x39U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x39U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x39U] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15125,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3aU)))));
    bufp->fullBit(oldp+15126,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+15127,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+15128,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x3aU))))));
    bufp->fullBit(oldp+15129,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3aU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3aU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3aU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15130,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU)))));
    bufp->fullBit(oldp+15131,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+15132,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+15133,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x3bU))))));
    bufp->fullBit(oldp+15134,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3bU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3bU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3bU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15135,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 5U)))));
    bufp->fullBit(oldp+15136,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+15137,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+15138,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+15139,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 5U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 5U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [5U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15140,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU)))));
    bufp->fullBit(oldp+15141,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+15142,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+15143,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x3cU))))));
    bufp->fullBit(oldp+15144,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3cU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3cU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3cU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15145,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU)))));
    bufp->fullBit(oldp+15146,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+15147,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+15148,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x3dU))))));
    bufp->fullBit(oldp+15149,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3dU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3dU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3dU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15150,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3eU)))));
    bufp->fullBit(oldp+15151,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+15152,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+15153,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x3eU))))));
    bufp->fullBit(oldp+15154,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3eU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3eU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3eU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15155,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3fU)))));
    bufp->fullBit(oldp+15156,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+15157,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+15158,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x3fU))))));
    bufp->fullBit(oldp+15159,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3fU))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3fU)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [0x3fU] >> 1U) 
                                     & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15160,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 6U)))));
    bufp->fullBit(oldp+15161,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+15162,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+15163,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+15164,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 6U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 6U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [6U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15165,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 7U)))));
    bufp->fullBit(oldp+15166,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+15167,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+15168,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+15169,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 7U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 7U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [7U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15170,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 8U)))));
    bufp->fullBit(oldp+15171,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+15172,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+15173,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+15174,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 8U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 8U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [8U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15175,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 9U)))));
    bufp->fullBit(oldp+15176,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+15177,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+15178,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+15179,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 9U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 9U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_he6224cd4__0)) 
                                  | ((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.__PVT__CarrySig
                                      [9U] >> 1U) & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__fir.uu__DOT____VdfgTmp_hf6cd5b06__0))))));
    bufp->fullBit(oldp+15180,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 1U)))));
    bufp->fullBit(oldp+15181,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY))));
    bufp->fullCData(oldp+15182,(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y),3);
    bufp->fullQData(oldp+15183,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 0x20U)),64);
    bufp->fullQData(oldp+15185,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.OutX),64);
    bufp->fullBit(oldp+15187,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx))));
    bufp->fullBit(oldp+15188,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx));
    bufp->fullBit(oldp+15189,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x));
    bufp->fullBit(oldp+15190,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x));
    bufp->fullBit(oldp+15191,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 0x20U)))));
    bufp->fullBit(oldp+15192,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x20U))))));
    bufp->fullBit(oldp+15193,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x20U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 0x20U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)))));
    bufp->fullBit(oldp+15194,((1U & (IData)((0x3fffffffc00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x16U))))));
    bufp->fullBit(oldp+15195,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+15196,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+15197,((1U & (~ (IData)((0x3fffffffc00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x16U)))))));
    bufp->fullBit(oldp+15198,((((~ (IData)((0x3fffffffc00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffc00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15199,((1U & (IData)((0x1fffffffe00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x15U))))));
    bufp->fullBit(oldp+15200,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+15201,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+15202,((1U & (~ (IData)((0x1fffffffe00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x15U)))))));
    bufp->fullBit(oldp+15203,((((~ (IData)((0x1fffffffe00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffe00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15204,((1U & (IData)((0xffffffff00000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x14U))))));
    bufp->fullBit(oldp+15205,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+15206,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+15207,((1U & (~ (IData)((0xffffffff00000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x14U)))))));
    bufp->fullBit(oldp+15208,((((~ (IData)((0xffffffff00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffff00000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15209,((1U & (IData)((0x7fffffff80000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x13U))))));
    bufp->fullBit(oldp+15210,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+15211,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+15212,((1U & (~ (IData)((0x7fffffff80000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x13U)))))));
    bufp->fullBit(oldp+15213,((((~ (IData)((0x7fffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff80000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15214,((1U & (IData)((0x3fffffffc0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x12U))))));
    bufp->fullBit(oldp+15215,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+15216,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+15217,((1U & (~ (IData)((0x3fffffffc0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x12U)))))));
    bufp->fullBit(oldp+15218,((((~ (IData)((0x3fffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffc0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15219,((1U & (IData)((0x1fffffffe0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x11U))))));
    bufp->fullBit(oldp+15220,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+15221,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+15222,((1U & (~ (IData)((0x1fffffffe0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x11U)))))));
    bufp->fullBit(oldp+15223,((((~ (IData)((0x1fffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffe0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15224,((1U & (IData)((0xffffffff0000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x10U))))));
    bufp->fullBit(oldp+15225,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+15226,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+15227,((1U & (~ (IData)((0xffffffff0000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x10U)))))));
    bufp->fullBit(oldp+15228,((((~ (IData)((0xffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffff0000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15229,((1U & (IData)((0x7fffffff8000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xfU))))));
    bufp->fullBit(oldp+15230,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+15231,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+15232,((1U & (~ (IData)((0x7fffffff8000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xfU)))))));
    bufp->fullBit(oldp+15233,((((~ (IData)((0x7fffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff8000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15234,((1U & (IData)((0x3fffffffc000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xeU))))));
    bufp->fullBit(oldp+15235,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+15236,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+15237,((1U & (~ (IData)((0x3fffffffc000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xeU)))))));
    bufp->fullBit(oldp+15238,((((~ (IData)((0x3fffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffc000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15239,((1U & (IData)((0x1fffffffe000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xdU))))));
    bufp->fullBit(oldp+15240,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+15241,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+15242,((1U & (~ (IData)((0x1fffffffe000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xdU)))))));
    bufp->fullBit(oldp+15243,((((~ (IData)((0x1fffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffe000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15244,((1U & (IData)((0x7fffffff80000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1fU))))));
    bufp->fullBit(oldp+15245,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+15246,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+15247,((1U & (~ (IData)((0x7fffffff80000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1fU)))))));
    bufp->fullBit(oldp+15248,((((~ (IData)((0x7fffffff80000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff80000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1fU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15249,((1U & (IData)((0xffffffff000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xcU))))));
    bufp->fullBit(oldp+15250,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+15251,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+15252,((1U & (~ (IData)((0xffffffff000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xcU)))))));
    bufp->fullBit(oldp+15253,((((~ (IData)((0xffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffff000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15254,((1U & (IData)((0x7fffffff800ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xbU))))));
    bufp->fullBit(oldp+15255,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+15256,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+15257,((1U & (~ (IData)((0x7fffffff800ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xbU)))))));
    bufp->fullBit(oldp+15258,((((~ (IData)((0x7fffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff800ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15259,((1U & (IData)((0x3fffffffc00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0xaU))))));
    bufp->fullBit(oldp+15260,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+15261,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+15262,((1U & (~ (IData)((0x3fffffffc00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0xaU)))))));
    bufp->fullBit(oldp+15263,((((~ (IData)((0x3fffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffc00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15264,((1U & (IData)((0x1fffffffe00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 9U))))));
    bufp->fullBit(oldp+15265,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+15266,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+15267,((1U & (~ (IData)((0x1fffffffe00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 9U)))))));
    bufp->fullBit(oldp+15268,((((~ (IData)((0x1fffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffe00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15269,((1U & (IData)((0xffffffff00ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 8U))))));
    bufp->fullBit(oldp+15270,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+15271,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+15272,((1U & (~ (IData)((0xffffffff00ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 8U)))))));
    bufp->fullBit(oldp+15273,((((~ (IData)((0xffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffff00ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15274,((1U & (IData)((0x7fffffff80ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 7U))))));
    bufp->fullBit(oldp+15275,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+15276,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+15277,((1U & (~ (IData)((0x7fffffff80ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 7U)))))));
    bufp->fullBit(oldp+15278,((((~ (IData)((0x7fffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff80ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15279,((1U & (IData)((0x3fffffffc0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 6U))))));
    bufp->fullBit(oldp+15280,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+15281,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+15282,((1U & (~ (IData)((0x3fffffffc0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 6U)))))));
    bufp->fullBit(oldp+15283,((((~ (IData)((0x3fffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffc0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15284,((1U & (IData)((0x1fffffffe0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 5U))))));
    bufp->fullBit(oldp+15285,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+15286,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+15287,((1U & (~ (IData)((0x1fffffffe0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 5U)))))));
    bufp->fullBit(oldp+15288,((((~ (IData)((0x1fffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffe0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15289,((1U & (IData)((0xffffffff0ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
    bufp->fullBit(oldp+15290,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+15291,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+15292,((1U & (~ (IData)((0xffffffff0ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 4U)))))));
    bufp->fullBit(oldp+15293,((((~ (IData)((0xffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffff0ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15294,((1U & (IData)((0x7fffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
    bufp->fullBit(oldp+15295,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+15296,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+15297,((1U & (~ (IData)((0x7fffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+15298,((((~ (IData)((0x7fffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15299,((1U & (IData)((0x3fffffffc0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1eU))))));
    bufp->fullBit(oldp+15300,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+15301,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+15302,((1U & (~ (IData)((0x3fffffffc0000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1eU)))))));
    bufp->fullBit(oldp+15303,((((~ (IData)((0x3fffffffc0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffc0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15304,((1U & (IData)((0x3fffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+15305,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+15306,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+15307,((1U & (~ (IData)((0x3fffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+15308,((((~ (IData)((0x3fffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15309,((1U & (IData)((0x1fffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+15310,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+15311,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+15312,((1U & (~ (IData)((0x1fffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+15313,((((~ (IData)((0x1fffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15314,((1U & (IData)((0xffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+15315,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+15316,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+15317,((1U & (~ (IData)((0xffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+15318,((((~ (IData)((0xffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15319,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+15320,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+15321,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+15322,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+15323,((((~ (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15324,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+15325,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+15326,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+15327,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+15328,((((~ (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15329,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+15330,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+15331,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+15332,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+15333,((((~ (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15334,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+15335,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+15336,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+15337,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+15338,((((~ (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15339,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+15340,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+15341,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+15342,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+15343,((((~ (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15344,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+15345,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+15346,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+15347,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+15348,((((~ (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15349,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+15350,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+15351,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+15352,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+15353,((((~ (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15354,((1U & (IData)((0x1fffffffe0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1dU))))));
    bufp->fullBit(oldp+15355,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+15356,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+15357,((1U & (~ (IData)((0x1fffffffe0000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1dU)))))));
    bufp->fullBit(oldp+15358,((((~ (IData)((0x1fffffffe0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffe0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15359,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+15360,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+15361,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+15362,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+15363,((((~ (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15364,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+15365,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+15366,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+15367,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+15368,((((~ (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15369,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+15370,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+15371,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+15372,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+15373,((((~ (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15374,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+15375,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+15376,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+15377,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+15378,((((~ (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15379,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+15380,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+15381,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+15382,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+15383,((((~ (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15384,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+15385,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+15386,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+15387,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+15388,((((~ (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15389,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+15390,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+15391,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+15392,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+15393,((((~ (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15394,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+15395,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+15396,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+15397,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+15398,((((~ (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15399,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+15400,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+15401,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+15402,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+15403,((((~ (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15404,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+15405,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+15406,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+15407,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+15408,((((~ (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x31U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15409,((1U & (IData)((0xffffffff0000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1cU))))));
    bufp->fullBit(oldp+15410,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+15411,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+15412,((1U & (~ (IData)((0xffffffff0000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1cU)))))));
    bufp->fullBit(oldp+15413,((((~ (IData)((0xffffffff0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffff0000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [4U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15414,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+15415,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+15416,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+15417,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+15418,((((~ (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x32U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15419,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+15420,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+15421,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+15422,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+15423,((((~ (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x33U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15424,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+15425,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+15426,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+15427,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+15428,((((~ (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x34U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15429,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+15430,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+15431,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+15432,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+15433,((((~ (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x35U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15434,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+15435,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+15436,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+15437,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+15438,((((~ (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x36U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15439,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+15440,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+15441,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+15442,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+15443,((((~ (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x37U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15444,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+15445,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+15446,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+15447,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+15448,((((~ (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x38U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15449,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+15450,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+15451,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+15452,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+15453,((((~ (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x39U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15454,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+15455,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+15456,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+15457,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+15458,((((~ (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15459,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+15460,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+15461,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+15462,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+15463,((((~ (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15464,((1U & (IData)((0x7fffffff8000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1bU))))));
    bufp->fullBit(oldp+15465,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+15466,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+15467,((1U & (~ (IData)((0x7fffffff8000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1bU)))))));
    bufp->fullBit(oldp+15468,((((~ (IData)((0x7fffffff8000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff8000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [5U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15469,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+15470,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+15471,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+15472,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+15473,((((~ (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15474,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1dU))))));
    bufp->fullBit(oldp+15475,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+15476,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+15477,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+15478,((((~ (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15479,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1eU))))));
    bufp->fullBit(oldp+15480,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+15481,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+15482,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+15483,((((~ (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15484,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x1fU))))));
    bufp->fullBit(oldp+15485,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+15486,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+15487,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+15488,((((~ (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x1fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x1fU) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x))) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [0x3fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15489,((1U & (IData)((0x3fffffffc000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x1aU))))));
    bufp->fullBit(oldp+15490,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+15491,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+15492,((1U & (~ (IData)((0x3fffffffc000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x1aU)))))));
    bufp->fullBit(oldp+15493,((((~ (IData)((0x3fffffffc000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x3fffffffc000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x1aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [6U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15494,((1U & (IData)((0x1fffffffe000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x19U))))));
    bufp->fullBit(oldp+15495,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+15496,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+15497,((1U & (~ (IData)((0x1fffffffe000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x19U)))))));
    bufp->fullBit(oldp+15498,((((~ (IData)((0x1fffffffe000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x1fffffffe000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [7U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15499,((1U & (IData)((0xffffffff000000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x18U))))));
    bufp->fullBit(oldp+15500,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+15501,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+15502,((1U & (~ (IData)((0xffffffff000000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x18U)))))));
    bufp->fullBit(oldp+15503,((((~ (IData)((0xffffffff000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x18U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0xffffffff000000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x18U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [8U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15504,((1U & (IData)((0x7fffffff800000ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 0x17U))))));
    bufp->fullBit(oldp+15505,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+15506,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+15507,((1U & (~ (IData)((0x7fffffff800000ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 0x17U)))))));
    bufp->fullBit(oldp+15508,((((~ (IData)((0x7fffffff800000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__negx)) 
                               | (((IData)((0x7fffffff800000ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                       [9U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT__CarrySig
                                        [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__las.__PVT___2x)))))));
    bufp->fullBit(oldp+15509,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                     >> 2U))));
    bufp->fullBit(oldp+15510,((1U & ((IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y) 
                                     >> 1U))));
    bufp->fullBit(oldp+15511,((1U & (IData)(vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT____Vcellinp__las__y))));
    bufp->fullCData(oldp+15512,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 1U)))),3);
    bufp->fullQData(oldp+15513,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 2U)),64);
    bufp->fullQData(oldp+15515,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+15517,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+15518,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+15519,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+15520,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+15521,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 2U)))));
    bufp->fullBit(oldp+15522,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+15523,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 2U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 2U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+15524,((1U & (IData)((0x3fffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+15525,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+15526,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+15527,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+15528,((((~ (IData)((0x3fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15529,((1U & (IData)((0x1fffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+15530,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+15531,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+15532,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+15533,((((~ (IData)((0x1fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15534,((1U & (IData)((0xfffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+15535,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+15536,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+15537,((1U & (~ (IData)((0xfffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+15538,((((~ (IData)((0xfffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15539,((1U & (IData)((0x7ffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+15540,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+15541,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+15542,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+15543,((((~ (IData)((0x7ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15544,((1U & (IData)((0x3ffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+15545,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+15546,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+15547,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+15548,((((~ (IData)((0x3ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15549,((1U & (IData)((0x1ffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+15550,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+15551,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+15552,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+15553,((((~ (IData)((0x1ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15554,((1U & (IData)((0xffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+15555,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+15556,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+15557,((1U & (~ (IData)((0xffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+15558,((((~ (IData)((0xffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15559,((1U & (IData)((0x7fffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+15560,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+15561,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+15562,((1U & (~ (IData)((0x7fffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+15563,((((~ (IData)((0x7fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15564,((1U & (IData)((0x3fffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+15565,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+15566,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+15567,((1U & (~ (IData)((0x3fffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+15568,((((~ (IData)((0x3fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15569,((1U & (IData)((0x1fffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+15570,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+15571,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+15572,((1U & (~ (IData)((0x1fffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+15573,((((~ (IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15574,((1U & (IData)((0x7ffffffffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+15575,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+15576,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+15577,((1U & (~ (IData)((0x7ffffffffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+15578,((((~ (IData)((0x7ffffffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15579,((1U & (IData)((0xfffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+15580,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+15581,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+15582,((1U & (~ (IData)((0xfffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+15583,((((~ (IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15584,((1U & (IData)((0x7ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+15585,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+15586,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+15587,((1U & (~ (IData)((0x7ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+15588,((((~ (IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15589,((1U & (IData)((0x3ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+15590,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+15591,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+15592,((1U & (~ (IData)((0x3ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+15593,((((~ (IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15594,((1U & (IData)((0x1ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+15595,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+15596,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+15597,((1U & (~ (IData)((0x1ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+15598,((((~ (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15599,((1U & (IData)((0xffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+15600,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+15601,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+15602,((1U & (~ (IData)((0xffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+15603,((((~ (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15604,((1U & (IData)((0x7fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+15605,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+15606,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+15607,((1U & (~ (IData)((0x7fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+15608,((((~ (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15609,((1U & (IData)((0x3fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+15610,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+15611,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+15612,((1U & (~ (IData)((0x3fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+15613,((((~ (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15614,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+15615,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+15616,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+15617,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+15618,((((~ (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15619,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+15620,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+15621,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+15622,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+15623,((((~ (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15624,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+15625,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+15626,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+15627,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+15628,((((~ (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15629,((1U & (IData)((0x3fffffffffffffffULL 
                                             & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)))));
    bufp->fullBit(oldp+15630,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+15631,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+15632,((1U & (~ (IData)((0x3fffffffffffffffULL 
                                                & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))))));
    bufp->fullBit(oldp+15633,((((~ (IData)((0x3fffffffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffffffffULL 
                                            & vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15634,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+15635,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+15636,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+15637,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+15638,((((~ (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15639,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+15640,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+15641,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+15642,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+15643,((((~ (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15644,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+15645,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+15646,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+15647,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+15648,((((~ (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15649,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+15650,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+15651,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+15652,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+15653,((((~ (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15654,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+15655,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+15656,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+15657,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+15658,((((~ (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15659,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
    bufp->fullBit(oldp+15660,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+15661,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+15662,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+15663,((((~ (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15664,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
    bufp->fullBit(oldp+15665,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+15666,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+15667,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+15668,((((~ (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15669,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))))));
    bufp->fullBit(oldp+15670,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+15671,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+15672,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+15673,((((~ (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15674,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))))));
    bufp->fullBit(oldp+15675,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+15676,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+15677,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+15678,((((~ (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15679,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x25U))))));
    bufp->fullBit(oldp+15680,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+15681,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+15682,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+15683,((((~ (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15684,((1U & (IData)((0x1fffffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 1U))))));
    bufp->fullBit(oldp+15685,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+15686,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+15687,((1U & (~ (IData)((0x1fffffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 1U)))))));
    bufp->fullBit(oldp+15688,((((~ (IData)((0x1fffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15689,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x26U))))));
    bufp->fullBit(oldp+15690,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+15691,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+15692,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+15693,((((~ (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15694,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x27U))))));
    bufp->fullBit(oldp+15695,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+15696,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+15697,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+15698,((((~ (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15699,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x28U))))));
    bufp->fullBit(oldp+15700,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+15701,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+15702,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+15703,((((~ (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15704,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x29U))))));
    bufp->fullBit(oldp+15705,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+15706,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+15707,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+15708,((((~ (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15709,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2aU))))));
    bufp->fullBit(oldp+15710,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+15711,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+15712,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+15713,((((~ (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15714,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2bU))))));
    bufp->fullBit(oldp+15715,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+15716,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+15717,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+15718,((((~ (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15719,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2cU))))));
    bufp->fullBit(oldp+15720,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+15721,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+15722,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))))));
    bufp->fullBit(oldp+15723,((((~ (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15724,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2dU))))));
    bufp->fullBit(oldp+15725,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+15726,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+15727,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2dU)))))));
    bufp->fullBit(oldp+15728,((((~ (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15729,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2eU))))));
    bufp->fullBit(oldp+15730,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+15731,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+15732,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2eU)))))));
    bufp->fullBit(oldp+15733,((((~ (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15734,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2fU))))));
    bufp->fullBit(oldp+15735,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+15736,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
    bufp->fullBit(oldp+15737,((1U & (~ (IData)((0x7fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2fU)))))));
    bufp->fullBit(oldp+15738,((((~ (IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2fU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x31U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x31U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15739,((1U & (IData)((0xfffffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 2U))))));
    bufp->fullBit(oldp+15740,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [4U])));
    bufp->fullBit(oldp+15741,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [4U] >> 1U))));
    bufp->fullBit(oldp+15742,((1U & (~ (IData)((0xfffffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 2U)))))));
    bufp->fullBit(oldp+15743,((((~ (IData)((0xfffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [4U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [4U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15744,((1U & (IData)((0x3fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x30U))))));
    bufp->fullBit(oldp+15745,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x32U])));
    bufp->fullBit(oldp+15746,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x32U] >> 1U))));
    bufp->fullBit(oldp+15747,((1U & (~ (IData)((0x3fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x30U)))))));
    bufp->fullBit(oldp+15748,((((~ (IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x30U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x30U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x32U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x32U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15749,((1U & (IData)((0x1fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x31U))))));
    bufp->fullBit(oldp+15750,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x33U])));
    bufp->fullBit(oldp+15751,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x33U] >> 1U))));
    bufp->fullBit(oldp+15752,((1U & (~ (IData)((0x1fffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x31U)))))));
    bufp->fullBit(oldp+15753,((((~ (IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x31U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x31U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x33U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x33U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15754,((1U & (IData)((0xfffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x32U))))));
    bufp->fullBit(oldp+15755,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x34U])));
    bufp->fullBit(oldp+15756,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x34U] >> 1U))));
    bufp->fullBit(oldp+15757,((1U & (~ (IData)((0xfffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x32U)))))));
    bufp->fullBit(oldp+15758,((((~ (IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x32U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x32U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x34U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x34U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15759,((1U & (IData)((0x7ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x33U))))));
    bufp->fullBit(oldp+15760,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x35U])));
    bufp->fullBit(oldp+15761,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x35U] >> 1U))));
    bufp->fullBit(oldp+15762,((1U & (~ (IData)((0x7ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x33U)))))));
    bufp->fullBit(oldp+15763,((((~ (IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x33U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x33U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x35U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x35U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15764,((1U & (IData)((0x3ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x34U))))));
    bufp->fullBit(oldp+15765,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x36U])));
    bufp->fullBit(oldp+15766,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x36U] >> 1U))));
    bufp->fullBit(oldp+15767,((1U & (~ (IData)((0x3ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x34U)))))));
    bufp->fullBit(oldp+15768,((((~ (IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x34U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x34U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x36U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x36U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15769,((1U & (IData)((0x1ffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x35U))))));
    bufp->fullBit(oldp+15770,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x37U])));
    bufp->fullBit(oldp+15771,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x37U] >> 1U))));
    bufp->fullBit(oldp+15772,((1U & (~ (IData)((0x1ffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x35U)))))));
    bufp->fullBit(oldp+15773,((((~ (IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x35U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x35U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x37U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x37U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15774,((1U & (IData)((0xffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x36U))))));
    bufp->fullBit(oldp+15775,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x38U])));
    bufp->fullBit(oldp+15776,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x38U] >> 1U))));
    bufp->fullBit(oldp+15777,((1U & (~ (IData)((0xffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x36U)))))));
    bufp->fullBit(oldp+15778,((((~ (IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x36U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x36U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x38U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x38U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15779,((1U & (IData)((0x7fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x37U))))));
    bufp->fullBit(oldp+15780,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x39U])));
    bufp->fullBit(oldp+15781,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x39U] >> 1U))));
    bufp->fullBit(oldp+15782,((1U & (~ (IData)((0x7fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x37U)))))));
    bufp->fullBit(oldp+15783,((((~ (IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x37U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x37U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x39U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x39U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15784,((1U & (IData)((0x3fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x38U))))));
    bufp->fullBit(oldp+15785,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x3aU])));
    bufp->fullBit(oldp+15786,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x3aU] >> 1U))));
    bufp->fullBit(oldp+15787,((1U & (~ (IData)((0x3fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x38U)))))));
    bufp->fullBit(oldp+15788,((((~ (IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x38U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x38U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x3aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15789,((1U & (IData)((0x1fULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x39U))))));
    bufp->fullBit(oldp+15790,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x3bU])));
    bufp->fullBit(oldp+15791,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x3bU] >> 1U))));
    bufp->fullBit(oldp+15792,((1U & (~ (IData)((0x1fULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x39U)))))));
    bufp->fullBit(oldp+15793,((((~ (IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x39U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x39U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x3bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15794,((1U & (IData)((0x7ffffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 3U))))));
    bufp->fullBit(oldp+15795,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [5U])));
    bufp->fullBit(oldp+15796,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [5U] >> 1U))));
    bufp->fullBit(oldp+15797,((1U & (~ (IData)((0x7ffffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 3U)))))));
    bufp->fullBit(oldp+15798,((((~ (IData)((0x7ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [5U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [5U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15799,((1U & (IData)((0xfULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x3aU))))));
    bufp->fullBit(oldp+15800,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x3cU])));
    bufp->fullBit(oldp+15801,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x3cU] >> 1U))));
    bufp->fullBit(oldp+15802,((1U & (~ (IData)((0xfULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3aU)))))));
    bufp->fullBit(oldp+15803,((((~ (IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x3aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x3cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15804,((1U & (IData)((7ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3bU))))));
    bufp->fullBit(oldp+15805,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x3dU])));
    bufp->fullBit(oldp+15806,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x3dU] >> 1U))));
    bufp->fullBit(oldp+15807,((1U & (~ (IData)((7ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3bU)))))));
    bufp->fullBit(oldp+15808,((((~ (IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((7ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x3dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15809,((1U & (IData)((3ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3cU))))));
    bufp->fullBit(oldp+15810,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x3eU])));
    bufp->fullBit(oldp+15811,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x3eU] >> 1U))));
    bufp->fullBit(oldp+15812,((1U & (~ (IData)((3ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3cU)))))));
    bufp->fullBit(oldp+15813,((((~ (IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((3ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x3eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15814,((1U & (IData)((1ULL & 
                                             (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                              >> 0x3dU))))));
    bufp->fullBit(oldp+15815,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [0x3fU])));
    bufp->fullBit(oldp+15816,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [0x3fU] >> 1U))));
    bufp->fullBit(oldp+15817,((1U & (~ (IData)((1ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x3dU)))))));
    bufp->fullBit(oldp+15818,((((~ (IData)((1ULL & 
                                            (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             >> 0x3dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | ((IData)(((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            >> 0x3dU) 
                                           & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x))) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [0x3fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [0x3fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15819,((1U & (IData)((0x3ffffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 4U))))));
    bufp->fullBit(oldp+15820,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [6U])));
    bufp->fullBit(oldp+15821,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [6U] >> 1U))));
    bufp->fullBit(oldp+15822,((1U & (~ (IData)((0x3ffffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+15823,((((~ (IData)((0x3ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 4U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [6U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [6U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15824,((1U & (IData)((0x1ffffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 5U))))));
    bufp->fullBit(oldp+15825,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [7U])));
    bufp->fullBit(oldp+15826,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [7U] >> 1U))));
    bufp->fullBit(oldp+15827,((1U & (~ (IData)((0x1ffffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+15828,((((~ (IData)((0x1ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 5U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [7U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [7U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15829,((1U & (IData)((0xffffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+15830,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [8U])));
    bufp->fullBit(oldp+15831,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [8U] >> 1U))));
    bufp->fullBit(oldp+15832,((1U & (~ (IData)((0xffffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+15833,((((~ (IData)((0xffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [8U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [8U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15834,((1U & (IData)((0x7fffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+15835,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                               [9U])));
    bufp->fullBit(oldp+15836,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                     [9U] >> 1U))));
    bufp->fullBit(oldp+15837,((1U & (~ (IData)((0x7fffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+15838,((((~ (IData)((0x7fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                       [9U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT__CarrySig
                                        [9U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15839,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 3U)))));
    bufp->fullBit(oldp+15840,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                             >> 2U)))));
    bufp->fullCData(oldp+15841,((7U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalY 
                                               >> 3U)))),3);
    bufp->fullQData(oldp+15842,((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                 << 4U)),64);
    bufp->fullQData(oldp+15844,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.OutX),64);
    bufp->fullBit(oldp+15846,(((IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x) 
                               | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx))));
    bufp->fullBit(oldp+15847,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx));
    bufp->fullBit(oldp+15848,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x));
    bufp->fullBit(oldp+15849,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x));
    bufp->fullBit(oldp+15850,((1U & (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                             << 4U)))));
    bufp->fullBit(oldp+15851,((1U & (~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 4U))))));
    bufp->fullBit(oldp+15852,((((~ (IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 4U))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                            << 4U)) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)))));
    bufp->fullBit(oldp+15853,((1U & (IData)((0x3fffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 6U))))));
    bufp->fullBit(oldp+15854,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0xaU])));
    bufp->fullBit(oldp+15855,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0xaU] >> 1U))));
    bufp->fullBit(oldp+15856,((1U & (~ (IData)((0x3fffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+15857,((((~ (IData)((0x3fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 6U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xaU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0xaU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15858,((1U & (IData)((0x1fffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 7U))))));
    bufp->fullBit(oldp+15859,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0xbU])));
    bufp->fullBit(oldp+15860,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0xbU] >> 1U))));
    bufp->fullBit(oldp+15861,((1U & (~ (IData)((0x1fffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+15862,((((~ (IData)((0x1fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 7U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xbU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0xbU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15863,((1U & (IData)((0xfffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 8U))))));
    bufp->fullBit(oldp+15864,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0xcU])));
    bufp->fullBit(oldp+15865,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0xcU] >> 1U))));
    bufp->fullBit(oldp+15866,((1U & (~ (IData)((0xfffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 8U)))))));
    bufp->fullBit(oldp+15867,((((~ (IData)((0xfffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 8U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xcU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0xcU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15868,((1U & (IData)((0x7ffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 9U))))));
    bufp->fullBit(oldp+15869,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0xdU])));
    bufp->fullBit(oldp+15870,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0xdU] >> 1U))));
    bufp->fullBit(oldp+15871,((1U & (~ (IData)((0x7ffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 9U)))))));
    bufp->fullBit(oldp+15872,((((~ (IData)((0x7ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 9U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xdU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0xdU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15873,((1U & (IData)((0x3ffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xaU))))));
    bufp->fullBit(oldp+15874,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0xeU])));
    bufp->fullBit(oldp+15875,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0xeU] >> 1U))));
    bufp->fullBit(oldp+15876,((1U & (~ (IData)((0x3ffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xaU)))))));
    bufp->fullBit(oldp+15877,((((~ (IData)((0x3ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xaU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xeU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0xeU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15878,((1U & (IData)((0x1ffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xbU))))));
    bufp->fullBit(oldp+15879,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0xfU])));
    bufp->fullBit(oldp+15880,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0xfU] >> 1U))));
    bufp->fullBit(oldp+15881,((1U & (~ (IData)((0x1ffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xbU)))))));
    bufp->fullBit(oldp+15882,((((~ (IData)((0x1ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xbU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0xfU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0xfU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15883,((1U & (IData)((0xffffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xcU))))));
    bufp->fullBit(oldp+15884,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x10U])));
    bufp->fullBit(oldp+15885,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x10U] >> 1U))));
    bufp->fullBit(oldp+15886,((1U & (~ (IData)((0xffffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xcU)))))));
    bufp->fullBit(oldp+15887,((((~ (IData)((0xffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xcU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x10U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x10U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15888,((1U & (IData)((0x7fffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xdU))))));
    bufp->fullBit(oldp+15889,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x11U])));
    bufp->fullBit(oldp+15890,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x11U] >> 1U))));
    bufp->fullBit(oldp+15891,((1U & (~ (IData)((0x7fffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xdU)))))));
    bufp->fullBit(oldp+15892,((((~ (IData)((0x7fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xdU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x11U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x11U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15893,((1U & (IData)((0x3fffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xeU))))));
    bufp->fullBit(oldp+15894,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x12U])));
    bufp->fullBit(oldp+15895,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x12U] >> 1U))));
    bufp->fullBit(oldp+15896,((1U & (~ (IData)((0x3fffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xeU)))))));
    bufp->fullBit(oldp+15897,((((~ (IData)((0x3fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xeU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x12U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x12U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15898,((1U & (IData)((0x1fffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+15899,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x13U])));
    bufp->fullBit(oldp+15900,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x13U] >> 1U))));
    bufp->fullBit(oldp+15901,((1U & (~ (IData)((0x1fffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0xfU)))))));
    bufp->fullBit(oldp+15902,((((~ (IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0xfU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x13U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x13U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15903,((1U & (IData)((0x7ffffffffffffff8ULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 3U))))));
    bufp->fullBit(oldp+15904,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [1U])));
    bufp->fullBit(oldp+15905,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [1U] >> 1U))));
    bufp->fullBit(oldp+15906,((1U & (~ (IData)((0x7ffffffffffffff8ULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 3U)))))));
    bufp->fullBit(oldp+15907,((((~ (IData)((0x7ffffffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffffff8ULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 3U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [1U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [1U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15908,((1U & (IData)((0xfffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x10U))))));
    bufp->fullBit(oldp+15909,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x14U])));
    bufp->fullBit(oldp+15910,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x14U] >> 1U))));
    bufp->fullBit(oldp+15911,((1U & (~ (IData)((0xfffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x10U)))))));
    bufp->fullBit(oldp+15912,((((~ (IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x10U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x14U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x14U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15913,((1U & (IData)((0x7ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x11U))))));
    bufp->fullBit(oldp+15914,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x15U])));
    bufp->fullBit(oldp+15915,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x15U] >> 1U))));
    bufp->fullBit(oldp+15916,((1U & (~ (IData)((0x7ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x11U)))))));
    bufp->fullBit(oldp+15917,((((~ (IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x11U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x15U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x15U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15918,((1U & (IData)((0x3ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x12U))))));
    bufp->fullBit(oldp+15919,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x16U])));
    bufp->fullBit(oldp+15920,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x16U] >> 1U))));
    bufp->fullBit(oldp+15921,((1U & (~ (IData)((0x3ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x12U)))))));
    bufp->fullBit(oldp+15922,((((~ (IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x12U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x16U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x16U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15923,((1U & (IData)((0x1ffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x13U))))));
    bufp->fullBit(oldp+15924,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x17U])));
    bufp->fullBit(oldp+15925,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x17U] >> 1U))));
    bufp->fullBit(oldp+15926,((1U & (~ (IData)((0x1ffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x13U)))))));
    bufp->fullBit(oldp+15927,((((~ (IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x13U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x17U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x17U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15928,((1U & (IData)((0xffffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x14U))))));
    bufp->fullBit(oldp+15929,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x18U])));
    bufp->fullBit(oldp+15930,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x18U] >> 1U))));
    bufp->fullBit(oldp+15931,((1U & (~ (IData)((0xffffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x14U)))))));
    bufp->fullBit(oldp+15932,((((~ (IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x14U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x18U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x18U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15933,((1U & (IData)((0x7fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x15U))))));
    bufp->fullBit(oldp+15934,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x19U])));
    bufp->fullBit(oldp+15935,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x19U] >> 1U))));
    bufp->fullBit(oldp+15936,((1U & (~ (IData)((0x7fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x15U)))))));
    bufp->fullBit(oldp+15937,((((~ (IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x15U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x19U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x19U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15938,((1U & (IData)((0x3fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x16U))))));
    bufp->fullBit(oldp+15939,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x1aU])));
    bufp->fullBit(oldp+15940,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x1aU] >> 1U))));
    bufp->fullBit(oldp+15941,((1U & (~ (IData)((0x3fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x16U)))))));
    bufp->fullBit(oldp+15942,((((~ (IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x16U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x1aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15943,((1U & (IData)((0x1fffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x17U))))));
    bufp->fullBit(oldp+15944,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x1bU])));
    bufp->fullBit(oldp+15945,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x1bU] >> 1U))));
    bufp->fullBit(oldp+15946,((1U & (~ (IData)((0x1fffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x17U)))))));
    bufp->fullBit(oldp+15947,((((~ (IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x17U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x1bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15948,((1U & (IData)((0xfffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x18U))))));
    bufp->fullBit(oldp+15949,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x1cU])));
    bufp->fullBit(oldp+15950,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x1cU] >> 1U))));
    bufp->fullBit(oldp+15951,((1U & (~ (IData)((0xfffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x18U)))))));
    bufp->fullBit(oldp+15952,((((~ (IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x18U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x1cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15953,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x19U))))));
    bufp->fullBit(oldp+15954,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x1dU])));
    bufp->fullBit(oldp+15955,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x1dU] >> 1U))));
    bufp->fullBit(oldp+15956,((1U & (~ (IData)((0x7ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x19U)))))));
    bufp->fullBit(oldp+15957,((((~ (IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x19U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x1dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15958,((1U & (IData)((0x3ffffffffffffffcULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 2U))))));
    bufp->fullBit(oldp+15959,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [2U])));
    bufp->fullBit(oldp+15960,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [2U] >> 1U))));
    bufp->fullBit(oldp+15961,((1U & (~ (IData)((0x3ffffffffffffffcULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 2U)))))));
    bufp->fullBit(oldp+15962,((((~ (IData)((0x3ffffffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffffffffcULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 2U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [2U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [2U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15963,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1aU))))));
    bufp->fullBit(oldp+15964,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x1eU])));
    bufp->fullBit(oldp+15965,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x1eU] >> 1U))));
    bufp->fullBit(oldp+15966,((1U & (~ (IData)((0x3ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1aU)))))));
    bufp->fullBit(oldp+15967,((((~ (IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x1eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15968,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1bU))))));
    bufp->fullBit(oldp+15969,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x1fU])));
    bufp->fullBit(oldp+15970,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x1fU] >> 1U))));
    bufp->fullBit(oldp+15971,((1U & (~ (IData)((0x1ffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1bU)))))));
    bufp->fullBit(oldp+15972,((((~ (IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x1fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x1fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15973,((1U & (IData)((0xffffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1cU))))));
    bufp->fullBit(oldp+15974,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x20U])));
    bufp->fullBit(oldp+15975,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x20U] >> 1U))));
    bufp->fullBit(oldp+15976,((1U & (~ (IData)((0xffffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1cU)))))));
    bufp->fullBit(oldp+15977,((((~ (IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x20U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x20U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15978,((1U & (IData)((0x7fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1dU))))));
    bufp->fullBit(oldp+15979,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x21U])));
    bufp->fullBit(oldp+15980,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x21U] >> 1U))));
    bufp->fullBit(oldp+15981,((1U & (~ (IData)((0x7fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1dU)))))));
    bufp->fullBit(oldp+15982,((((~ (IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1dU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x21U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x21U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15983,((1U & (IData)((0x3fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1eU))))));
    bufp->fullBit(oldp+15984,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x22U])));
    bufp->fullBit(oldp+15985,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x22U] >> 1U))));
    bufp->fullBit(oldp+15986,((1U & (~ (IData)((0x3fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1eU)))))));
    bufp->fullBit(oldp+15987,((((~ (IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1eU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x22U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x22U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15988,((1U & (IData)((0x1fffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x1fU))))));
    bufp->fullBit(oldp+15989,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x23U])));
    bufp->fullBit(oldp+15990,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x23U] >> 1U))));
    bufp->fullBit(oldp+15991,((1U & (~ (IData)((0x1fffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x1fU)))))));
    bufp->fullBit(oldp+15992,((((~ (IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x1fU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x23U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x23U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15993,((1U & (IData)((0xfffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x20U))))));
    bufp->fullBit(oldp+15994,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x24U])));
    bufp->fullBit(oldp+15995,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x24U] >> 1U))));
    bufp->fullBit(oldp+15996,((1U & (~ (IData)((0xfffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x20U)))))));
    bufp->fullBit(oldp+15997,((((~ (IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x20U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x24U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x24U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+15998,((1U & (IData)((0x7ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x21U))))));
    bufp->fullBit(oldp+15999,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x25U])));
    bufp->fullBit(oldp+16000,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x25U] >> 1U))));
    bufp->fullBit(oldp+16001,((1U & (~ (IData)((0x7ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x21U)))))));
    bufp->fullBit(oldp+16002,((((~ (IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x21U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x25U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x25U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16003,((1U & (IData)((0x3ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x22U))))));
    bufp->fullBit(oldp+16004,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x26U])));
    bufp->fullBit(oldp+16005,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x26U] >> 1U))));
    bufp->fullBit(oldp+16006,((1U & (~ (IData)((0x3ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x22U)))))));
    bufp->fullBit(oldp+16007,((((~ (IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x22U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x26U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x26U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16008,((1U & (IData)((0x1ffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x23U))))));
    bufp->fullBit(oldp+16009,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x27U])));
    bufp->fullBit(oldp+16010,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x27U] >> 1U))));
    bufp->fullBit(oldp+16011,((1U & (~ (IData)((0x1ffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x23U)))))));
    bufp->fullBit(oldp+16012,((((~ (IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x23U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x27U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x27U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16013,((1U & (IData)((0x1ffffffffffffffeULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                << 1U))))));
    bufp->fullBit(oldp+16014,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [3U])));
    bufp->fullBit(oldp+16015,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [3U] >> 1U))));
    bufp->fullBit(oldp+16016,((1U & (~ (IData)((0x1ffffffffffffffeULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   << 1U)))))));
    bufp->fullBit(oldp+16017,((((~ (IData)((0x1ffffffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffffffffffffeULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               << 1U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [3U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [3U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16018,((1U & (IData)((0xffffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x24U))))));
    bufp->fullBit(oldp+16019,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x28U])));
    bufp->fullBit(oldp+16020,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x28U] >> 1U))));
    bufp->fullBit(oldp+16021,((1U & (~ (IData)((0xffffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x24U)))))));
    bufp->fullBit(oldp+16022,((((~ (IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x24U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x28U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x28U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16023,((1U & (IData)((0x7fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x25U))))));
    bufp->fullBit(oldp+16024,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x29U])));
    bufp->fullBit(oldp+16025,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x29U] >> 1U))));
    bufp->fullBit(oldp+16026,((1U & (~ (IData)((0x7fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x25U)))))));
    bufp->fullBit(oldp+16027,((((~ (IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x25U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x29U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x29U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16028,((1U & (IData)((0x3fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x26U))))));
    bufp->fullBit(oldp+16029,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x2aU])));
    bufp->fullBit(oldp+16030,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x2aU] >> 1U))));
    bufp->fullBit(oldp+16031,((1U & (~ (IData)((0x3fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x26U)))))));
    bufp->fullBit(oldp+16032,((((~ (IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x26U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2aU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x2aU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16033,((1U & (IData)((0x1fffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x27U))))));
    bufp->fullBit(oldp+16034,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x2bU])));
    bufp->fullBit(oldp+16035,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x2bU] >> 1U))));
    bufp->fullBit(oldp+16036,((1U & (~ (IData)((0x1fffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x27U)))))));
    bufp->fullBit(oldp+16037,((((~ (IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1fffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x27U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2bU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x2bU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16038,((1U & (IData)((0xfffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x28U))))));
    bufp->fullBit(oldp+16039,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x2cU])));
    bufp->fullBit(oldp+16040,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x2cU] >> 1U))));
    bufp->fullBit(oldp+16041,((1U & (~ (IData)((0xfffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x28U)))))));
    bufp->fullBit(oldp+16042,((((~ (IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xfffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x28U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2cU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x2cU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16043,((1U & (IData)((0x7ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x29U))))));
    bufp->fullBit(oldp+16044,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x2dU])));
    bufp->fullBit(oldp+16045,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x2dU] >> 1U))));
    bufp->fullBit(oldp+16046,((1U & (~ (IData)((0x7ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x29U)))))));
    bufp->fullBit(oldp+16047,((((~ (IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x7ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x29U))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2dU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x2dU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16048,((1U & (IData)((0x3ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2aU))))));
    bufp->fullBit(oldp+16049,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x2eU])));
    bufp->fullBit(oldp+16050,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x2eU] >> 1U))));
    bufp->fullBit(oldp+16051,((1U & (~ (IData)((0x3ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2aU)))))));
    bufp->fullBit(oldp+16052,((((~ (IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x3ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2aU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2eU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x2eU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16053,((1U & (IData)((0x1ffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2bU))))));
    bufp->fullBit(oldp+16054,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x2fU])));
    bufp->fullBit(oldp+16055,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x2fU] >> 1U))));
    bufp->fullBit(oldp+16056,((1U & (~ (IData)((0x1ffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2bU)))))));
    bufp->fullBit(oldp+16057,((((~ (IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0x1ffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2bU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x2fU] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x2fU] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16058,((1U & (IData)((0xffffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2cU))))));
    bufp->fullBit(oldp+16059,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x30U])));
    bufp->fullBit(oldp+16060,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x30U] >> 1U))));
    bufp->fullBit(oldp+16061,((1U & (~ (IData)((0xffffULL 
                                                & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                   >> 0x2cU)))))));
    bufp->fullBit(oldp+16062,((((~ (IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU)))) 
                                & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__negx)) 
                               | (((IData)((0xffffULL 
                                            & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                               >> 0x2cU))) 
                                   & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__x)) 
                                  | (((vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                       [0x30U] >> 1U) 
                                      & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__neg2x)) 
                                     | (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                        [0x30U] & (IData)(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT___2x)))))));
    bufp->fullBit(oldp+16063,((1U & (IData)((0x7fffULL 
                                             & (vlSelf->sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__CalX 
                                                >> 0x2dU))))));
    bufp->fullBit(oldp+16064,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                               [0x31U])));
    bufp->fullBit(oldp+16065,((1U & (vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_core_top__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai.__PVT__CarrySig
                                     [0x31U] >> 1U))));
}
