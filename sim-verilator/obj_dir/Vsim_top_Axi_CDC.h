// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP_AXI_CDC_H_
#define VERILATED_VSIM_TOP_AXI_CDC_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vsim_top__Syms;

class Vsim_top_Axi_CDC final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(axiInClk,0,0);
        VL_IN8(axiInRst,0,0);
        VL_IN8(axiOutClk,0,0);
        VL_IN8(axiOutRst,0,0);
        CData/*0:0*/ __PVT__awFifo__DOT__bufferCC_12__DOT__buffers_1;
        CData/*0:0*/ __PVT__bFifo__DOT__bufferCC_12__DOT__buffers_1;
        VL_IN8(axiIn_awvalid,0,0);
        VL_OUT8(axiIn_awready,0,0);
        VL_IN8(axiIn_awid,3,0);
        VL_IN8(axiIn_awlen,7,0);
        VL_IN8(axiIn_awsize,2,0);
        VL_IN8(axiIn_awburst,1,0);
        VL_IN8(axiIn_awlock,0,0);
        VL_IN8(axiIn_awcache,3,0);
        VL_IN8(axiIn_awprot,2,0);
        VL_IN8(axiIn_wvalid,0,0);
        VL_OUT8(axiIn_wready,0,0);
        VL_IN8(axiIn_wstrb,3,0);
        VL_IN8(axiIn_wlast,0,0);
        VL_OUT8(axiIn_bvalid,0,0);
        VL_IN8(axiIn_bready,0,0);
        VL_OUT8(axiIn_bid,3,0);
        VL_OUT8(axiIn_bresp,1,0);
        VL_IN8(axiIn_arvalid,0,0);
        VL_OUT8(axiIn_arready,0,0);
        VL_IN8(axiIn_arid,3,0);
        VL_IN8(axiIn_arlen,7,0);
        VL_IN8(axiIn_arsize,2,0);
        VL_IN8(axiIn_arburst,1,0);
        VL_IN8(axiIn_arlock,0,0);
        VL_IN8(axiIn_arcache,3,0);
        VL_IN8(axiIn_arprot,2,0);
        VL_OUT8(axiIn_rvalid,0,0);
        VL_IN8(axiIn_rready,0,0);
        VL_OUT8(axiIn_rid,3,0);
        VL_OUT8(axiIn_rresp,1,0);
        VL_OUT8(axiIn_rlast,0,0);
        VL_OUT8(axiOut_awvalid,0,0);
        VL_IN8(axiOut_awready,0,0);
        VL_OUT8(axiOut_awid,3,0);
        VL_OUT8(axiOut_awlen,7,0);
        VL_OUT8(axiOut_awsize,2,0);
        VL_OUT8(axiOut_awburst,1,0);
        VL_OUT8(axiOut_awlock,0,0);
        VL_OUT8(axiOut_awcache,3,0);
        VL_OUT8(axiOut_awprot,2,0);
        VL_OUT8(axiOut_wvalid,0,0);
        VL_IN8(axiOut_wready,0,0);
        VL_OUT8(axiOut_wstrb,3,0);
        VL_OUT8(axiOut_wlast,0,0);
        VL_IN8(axiOut_bvalid,0,0);
        VL_OUT8(axiOut_bready,0,0);
        VL_IN8(axiOut_bid,3,0);
        VL_IN8(axiOut_bresp,1,0);
        VL_OUT8(axiOut_arvalid,0,0);
        VL_IN8(axiOut_arready,0,0);
        VL_OUT8(axiOut_arid,3,0);
        VL_OUT8(axiOut_arlen,7,0);
        VL_OUT8(axiOut_arsize,2,0);
        VL_OUT8(axiOut_arburst,1,0);
        VL_OUT8(axiOut_arlock,0,0);
        VL_OUT8(axiOut_arcache,3,0);
        VL_OUT8(axiOut_arprot,2,0);
        VL_IN8(axiOut_rvalid,0,0);
    };
    struct {
        VL_OUT8(axiOut_rready,0,0);
        VL_IN8(axiOut_rid,3,0);
        VL_IN8(axiOut_rresp,1,0);
        VL_IN8(axiOut_rlast,0,0);
        CData/*0:0*/ __PVT__awFifo__DOT___zz_1;
        CData/*2:0*/ __PVT__awFifo__DOT__pushCC_pushPtr;
        CData/*2:0*/ __PVT__awFifo__DOT__pushCC_pushPtrPlus;
        CData/*0:0*/ __PVT__awFifo__DOT__io_push_fire;
        CData/*2:0*/ __PVT__awFifo__DOT__pushCC_pushPtrGray;
        CData/*0:0*/ __PVT__awFifo__DOT__pushCC_full;
        CData/*2:0*/ __PVT__awFifo__DOT__popCC_popPtr;
        CData/*2:0*/ __PVT__awFifo__DOT__popCC_popPtrPlus;
        CData/*2:0*/ __PVT__awFifo__DOT__popCC_popPtrGray;
        CData/*0:0*/ __PVT__awFifo__DOT__popCC_addressGen_ready;
        CData/*0:0*/ __PVT__awFifo__DOT__popCC_empty;
        CData/*0:0*/ __PVT__awFifo__DOT__popCC_addressGen_fire;
        CData/*0:0*/ __PVT__awFifo__DOT__popCC_addressGen_rValid;
        CData/*1:0*/ __PVT__awFifo__DOT__popCC_addressGen_rData;
        CData/*0:0*/ __PVT__awFifo__DOT__popCC_readArbitation_fire;
        CData/*2:0*/ __PVT__awFifo__DOT__popCC_ptrToPush;
        CData/*2:0*/ __PVT__awFifo__DOT__popCC_ptrToOccupancy;
        CData/*2:0*/ __PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        CData/*2:0*/ __PVT__awFifo__DOT__popToPushGray_buffercc__DOT__buffers_1;
        CData/*0:0*/ __PVT__awFifo__DOT__bufferCC_12__DOT__buffers_0;
        CData/*2:0*/ __PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        CData/*2:0*/ __PVT__awFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1;
        CData/*0:0*/ __PVT__wFifo__DOT___zz_1;
        CData/*3:0*/ __PVT__wFifo__DOT__pushCC_pushPtr;
        CData/*3:0*/ __PVT__wFifo__DOT__pushCC_pushPtrPlus;
        CData/*0:0*/ __PVT__wFifo__DOT__io_push_fire;
        CData/*3:0*/ __PVT__wFifo__DOT__pushCC_pushPtrGray;
        CData/*0:0*/ __PVT__wFifo__DOT__pushCC_full;
        CData/*3:0*/ __PVT__wFifo__DOT__popCC_popPtr;
        CData/*3:0*/ __PVT__wFifo__DOT__popCC_popPtrPlus;
        CData/*3:0*/ __PVT__wFifo__DOT__popCC_popPtrGray;
        CData/*0:0*/ __PVT__wFifo__DOT__popCC_addressGen_ready;
        CData/*0:0*/ __PVT__wFifo__DOT__popCC_empty;
        CData/*0:0*/ __PVT__wFifo__DOT__popCC_addressGen_fire;
        CData/*0:0*/ __PVT__wFifo__DOT__popCC_addressGen_rValid;
        CData/*2:0*/ __PVT__wFifo__DOT__popCC_addressGen_rData;
        CData/*0:0*/ __PVT__wFifo__DOT__popCC_readArbitation_fire;
        CData/*3:0*/ __PVT__wFifo__DOT__popCC_ptrToPush;
        CData/*3:0*/ __PVT__wFifo__DOT__popCC_ptrToOccupancy;
        CData/*3:0*/ __PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        CData/*3:0*/ __PVT__wFifo__DOT__popToPushGray_buffercc__DOT__buffers_1;
        CData/*3:0*/ __PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        CData/*3:0*/ __PVT__wFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1;
        CData/*5:0*/ __PVT__bFifo__DOT___zz_ram_port1;
        CData/*0:0*/ __PVT__bFifo__DOT___zz_1;
        CData/*2:0*/ __PVT__bFifo__DOT__pushCC_pushPtr;
        CData/*2:0*/ __PVT__bFifo__DOT__pushCC_pushPtrPlus;
        CData/*0:0*/ __PVT__bFifo__DOT__io_push_fire;
        CData/*2:0*/ __PVT__bFifo__DOT__pushCC_pushPtrGray;
        CData/*0:0*/ __PVT__bFifo__DOT__pushCC_full;
        CData/*2:0*/ __PVT__bFifo__DOT__popCC_popPtr;
        CData/*2:0*/ __PVT__bFifo__DOT__popCC_popPtrPlus;
        CData/*2:0*/ __PVT__bFifo__DOT__popCC_popPtrGray;
        CData/*0:0*/ __PVT__bFifo__DOT__popCC_addressGen_ready;
        CData/*0:0*/ __PVT__bFifo__DOT__popCC_empty;
        CData/*0:0*/ __PVT__bFifo__DOT__popCC_addressGen_fire;
        CData/*0:0*/ __PVT__bFifo__DOT__popCC_addressGen_rValid;
        CData/*1:0*/ __PVT__bFifo__DOT__popCC_addressGen_rData;
        CData/*0:0*/ __PVT__bFifo__DOT__popCC_readArbitation_fire;
        CData/*2:0*/ __PVT__bFifo__DOT__popCC_ptrToPush;
    };
    struct {
        CData/*2:0*/ __PVT__bFifo__DOT__popCC_ptrToOccupancy;
        CData/*2:0*/ __PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        CData/*2:0*/ __PVT__bFifo__DOT__popToPushGray_buffercc__DOT__buffers_1;
        CData/*0:0*/ __PVT__bFifo__DOT__bufferCC_12__DOT__buffers_0;
        CData/*2:0*/ __PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        CData/*2:0*/ __PVT__bFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1;
        CData/*0:0*/ __PVT__arFifo__DOT___zz_1;
        CData/*2:0*/ __PVT__arFifo__DOT__pushCC_pushPtr;
        CData/*2:0*/ __PVT__arFifo__DOT__pushCC_pushPtrPlus;
        CData/*0:0*/ __PVT__arFifo__DOT__io_push_fire;
        CData/*2:0*/ __PVT__arFifo__DOT__pushCC_pushPtrGray;
        CData/*0:0*/ __PVT__arFifo__DOT__pushCC_full;
        CData/*2:0*/ __PVT__arFifo__DOT__popCC_popPtr;
        CData/*2:0*/ __PVT__arFifo__DOT__popCC_popPtrPlus;
        CData/*2:0*/ __PVT__arFifo__DOT__popCC_popPtrGray;
        CData/*0:0*/ __PVT__arFifo__DOT__popCC_addressGen_ready;
        CData/*0:0*/ __PVT__arFifo__DOT__popCC_empty;
        CData/*0:0*/ __PVT__arFifo__DOT__popCC_addressGen_fire;
        CData/*0:0*/ __PVT__arFifo__DOT__popCC_addressGen_rValid;
        CData/*1:0*/ __PVT__arFifo__DOT__popCC_addressGen_rData;
        CData/*0:0*/ __PVT__arFifo__DOT__popCC_readArbitation_fire;
        CData/*2:0*/ __PVT__arFifo__DOT__popCC_ptrToPush;
        CData/*2:0*/ __PVT__arFifo__DOT__popCC_ptrToOccupancy;
        CData/*2:0*/ __PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        CData/*2:0*/ __PVT__arFifo__DOT__popToPushGray_buffercc__DOT__buffers_1;
        CData/*2:0*/ __PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        CData/*2:0*/ __PVT__arFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1;
        CData/*0:0*/ __PVT__rFifo__DOT___zz_1;
        CData/*3:0*/ __PVT__rFifo__DOT__pushCC_pushPtr;
        CData/*3:0*/ __PVT__rFifo__DOT__pushCC_pushPtrPlus;
        CData/*0:0*/ __PVT__rFifo__DOT__io_push_fire;
        CData/*3:0*/ __PVT__rFifo__DOT__pushCC_pushPtrGray;
        CData/*0:0*/ __PVT__rFifo__DOT__pushCC_full;
        CData/*3:0*/ __PVT__rFifo__DOT__popCC_popPtr;
        CData/*3:0*/ __PVT__rFifo__DOT__popCC_popPtrPlus;
        CData/*3:0*/ __PVT__rFifo__DOT__popCC_popPtrGray;
        CData/*0:0*/ __PVT__rFifo__DOT__popCC_addressGen_ready;
        CData/*0:0*/ __PVT__rFifo__DOT__popCC_empty;
        CData/*0:0*/ __PVT__rFifo__DOT__popCC_addressGen_fire;
        CData/*0:0*/ __PVT__rFifo__DOT__popCC_addressGen_rValid;
        CData/*2:0*/ __PVT__rFifo__DOT__popCC_addressGen_rData;
        CData/*0:0*/ __PVT__rFifo__DOT__popCC_readArbitation_fire;
        CData/*3:0*/ __PVT__rFifo__DOT__popCC_ptrToPush;
        CData/*3:0*/ __PVT__rFifo__DOT__popCC_ptrToOccupancy;
        CData/*3:0*/ __PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_0;
        CData/*3:0*/ __PVT__rFifo__DOT__popToPushGray_buffercc__DOT__buffers_1;
        CData/*3:0*/ __PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        CData/*3:0*/ __PVT__rFifo__DOT__pushToPopGray_buffercc__DOT__buffers_1;
        CData/*1:0*/ __Vdlyvdim0__bFifo__DOT__ram__v0;
        CData/*5:0*/ __Vdlyvval__bFifo__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__bFifo__DOT__ram__v0;
        CData/*2:0*/ __Vdlyvdim0__rFifo__DOT__ram__v0;
        CData/*0:0*/ __Vdlyvset__rFifo__DOT__ram__v0;
        VL_IN(axiIn_awaddr,31,0);
        VL_IN(axiIn_wdata,31,0);
        VL_IN(axiIn_araddr,31,0);
        VL_OUT(axiIn_rdata,31,0);
        VL_OUT(axiOut_awaddr,31,0);
        VL_OUT(axiOut_wdata,31,0);
        VL_OUT(axiOut_araddr,31,0);
        VL_IN(axiOut_rdata,31,0);
        QData/*56:0*/ __PVT__awFifo__DOT___zz_ram_port1;
        QData/*36:0*/ __PVT__wFifo__DOT___zz_ram_port1;
        QData/*56:0*/ __PVT__arFifo__DOT___zz_ram_port1;
    };
    struct {
        QData/*38:0*/ __PVT__rFifo__DOT___zz_ram_port1;
        QData/*38:0*/ __Vdlyvval__rFifo__DOT__ram__v0;
        VlUnpacked<QData/*56:0*/, 4> __PVT__awFifo__DOT__ram;
        VlUnpacked<QData/*36:0*/, 8> __PVT__wFifo__DOT__ram;
        VlUnpacked<CData/*5:0*/, 4> __PVT__bFifo__DOT__ram;
        VlUnpacked<QData/*56:0*/, 4> __PVT__arFifo__DOT__ram;
        VlUnpacked<QData/*38:0*/, 8> __PVT__rFifo__DOT__ram;
    };

    // INTERNAL VARIABLES
    Vsim_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_top_Axi_CDC(Vsim_top__Syms* symsp, const char* v__name);
    ~Vsim_top_Axi_CDC();
    VL_UNCOPYABLE(Vsim_top_Axi_CDC);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
