// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_BoothInterBase.h"

VL_ATTR_COLD void Vsim_top_BoothInterBase___ctor_var_reset(Vsim_top_BoothInterBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_top_BoothInterBase___ctor_var_reset\n"); );
    // Body
    vlSelf->y = 0;
    vlSelf->InX = 0;
    vlSelf->OutX = 0;
    vlSelf->Carry = 0;
    vlSelf->__PVT__negx = 0;
    vlSelf->__PVT__x = 0;
    vlSelf->__PVT__neg2x = 0;
    vlSelf->__PVT___2x = 0;
    for (int __Vi0 = 0; __Vi0 < 65; ++__Vi0) {
        vlSelf->__PVT__CarrySig[__Vi0] = 0;
    }
    vlSelf->uu__DOT____VdfgTmp_hf6cd5b06__0 = 0;
    vlSelf->uu__DOT____VdfgTmp_he6224cd4__0 = 0;
}
