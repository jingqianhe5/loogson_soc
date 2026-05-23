// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top__Syms.h"
#include "Vsim_top_sobel_sharpen_single.h"

VL_ATTR_COLD void Vsim_top_sobel_sharpen_single___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R__0(Vsim_top_sobel_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_sobel_sharpen_single___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_sobel_sharpen__DOT__sobel_sharpen_single_R__0\n"); );
    // Body
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0 = (0x200U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c2) 
                                                       << 0xbU) 
                                                      | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c2) 
                                                         << 0xaU)));
    vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0 = (0x100U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c3) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c3) 
                                                          << 0xaU) 
                                                         | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c3) 
                                                            << 9U))));
    vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0 = (0x80U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c4) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c4) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c4) 
                                                             << 9U) 
                                                            | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c4) 
                                                               << 8U)))));
    vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0 = (0x40U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c5) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c5) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c5) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c5) 
                                                                << 8U) 
                                                               | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c5) 
                                                                  << 7U))))));
    vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0 = (0x20U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c6) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c6) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c6) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c6) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c6) 
                                                                   << 7U) 
                                                                  | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c6) 
                                                                     << 6U)))))));
    vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0 = (0x10U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c7) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c7) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c7) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c7) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c7) 
                                                                      << 6U) 
                                                                     | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c7) 
                                                                        << 5U))))))));
    vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0 = (8U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c8) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c8) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c8) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c8) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c8) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c8) 
                                                                         << 5U) 
                                                                        | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c8) 
                                                                           << 4U)))))))));
    vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0 = (4U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c9) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c9) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c9) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c9) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c9) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c9) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c9) 
                                                                            << 4U) 
                                                                           | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c9) 
                                                                              << 3U))))))))));
    vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0 = (2U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c10) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c10) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c10) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c10) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c10) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c10) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c10) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c10) 
                                                                               << 3U) 
                                                                              | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c10) 
                                                                                << 2U)))))))))));
    vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0 = (1U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11) 
                                                                                << 1U))))))))))));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_de) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
}
