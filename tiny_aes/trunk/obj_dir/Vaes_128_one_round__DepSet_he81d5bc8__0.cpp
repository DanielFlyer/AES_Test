// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_128.h for the primary calling header

#include "verilated.h"

#include "Vaes_128_T.h"
#include "Vaes_128__Syms.h"
#include "Vaes_128_one_round.h"

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r1__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r1__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc22bdf01__0;
    // Body
    __Vtemp_hc22bdf01__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k0b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k0b[2U])))));
    __Vtemp_hc22bdf01__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k0b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k0b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k0b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k0b[1U]);
    vlSelf->state_out[2U] = __Vtemp_hc22bdf01__0[1U];
    vlSelf->state_out[3U] = __Vtemp_hc22bdf01__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r2__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r2__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3693e31f__0;
    // Body
    __Vtemp_h3693e31f__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k1b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k1b[2U])))));
    __Vtemp_h3693e31f__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k1b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k1b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k1b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k1b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h3693e31f__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h3693e31f__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r3__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r3__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h036aa84a__0;
    // Body
    __Vtemp_h036aa84a__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k2b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k2b[2U])))));
    __Vtemp_h036aa84a__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k2b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k2b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k2b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k2b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h036aa84a__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h036aa84a__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r4__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r4__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb3ffcdc8__0;
    // Body
    __Vtemp_hb3ffcdc8__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k3b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k3b[2U])))));
    __Vtemp_hb3ffcdc8__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k3b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k3b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k3b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k3b[1U]);
    vlSelf->state_out[2U] = __Vtemp_hb3ffcdc8__0[1U];
    vlSelf->state_out[3U] = __Vtemp_hb3ffcdc8__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r5__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r5__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h84ddf5dc__0;
    // Body
    __Vtemp_h84ddf5dc__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k4b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k4b[2U])))));
    __Vtemp_h84ddf5dc__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k4b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k4b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k4b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k4b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h84ddf5dc__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h84ddf5dc__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r6__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r6__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha075fb1f__0;
    // Body
    __Vtemp_ha075fb1f__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k5b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k5b[2U])))));
    __Vtemp_ha075fb1f__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k5b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k5b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k5b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k5b[1U]);
    vlSelf->state_out[2U] = __Vtemp_ha075fb1f__0[1U];
    vlSelf->state_out[3U] = __Vtemp_ha075fb1f__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r7__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r7__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2ce3f000__0;
    // Body
    __Vtemp_h2ce3f000__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k6b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k6b[2U])))));
    __Vtemp_h2ce3f000__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k6b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k6b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k6b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k6b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h2ce3f000__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h2ce3f000__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r8__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r8__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h18cb3a23__0;
    // Body
    __Vtemp_h18cb3a23__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k7b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k7b[2U])))));
    __Vtemp_h18cb3a23__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k7b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k7b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k7b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k7b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h18cb3a23__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h18cb3a23__0[2U];
}

VL_INLINE_OPT void Vaes_128_one_round___sequent__TOP__aes_128__DOT__r9__1(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___sequent__TOP__aes_128__DOT__r9__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6e31acce__0;
    // Body
    __Vtemp_h6e31acce__0[1U] = (IData)((((QData)((IData)(
                                                         ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                 >> 8U)) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                          ^ 
                                                          vlSymsp->TOP.aes_128__DOT__k8b[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                  >> 8U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                               << 0x10U) 
                                                              | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                 >> 0x10U))) 
                                                            ^ 
                                                            ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                              << 8U) 
                                                             | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                >> 0x18U))) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k8b[2U])))));
    __Vtemp_h6e31acce__0[2U] = (IData)(((((QData)((IData)(
                                                          ((((((vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                << 0x18U) 
                                                               | (vlSelf->__PVT__t0__DOT__t0->__PVT__out 
                                                                  >> 8U)) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t1__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t2__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ vlSelf->__PVT__t3__DOT__t3->__PVT__out) 
                                                           ^ 
                                                           vlSymsp->TOP.aes_128__DOT__k8b[3U]))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((vlSelf->__PVT__t0__DOT__t3->__PVT__out 
                                                               ^ 
                                                               ((vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                 << 0x18U) 
                                                                | (vlSelf->__PVT__t1__DOT__t0->__PVT__out 
                                                                   >> 8U))) 
                                                              ^ 
                                                              ((vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                << 0x10U) 
                                                               | (vlSelf->__PVT__t2__DOT__t1->__PVT__out 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             ((vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__t3__DOT__t2->__PVT__out 
                                                                 >> 0x18U))) 
                                                            ^ 
                                                            vlSymsp->TOP.aes_128__DOT__k8b[2U])))) 
                                        >> 0x20U));
    vlSelf->state_out[0U] = ((((((vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t0__DOT__t1->__PVT__out 
                                               >> 0x10U)) 
                                ^ ((vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                    << 8U) | (vlSelf->__PVT__t1__DOT__t2->__PVT__out 
                                              >> 0x18U))) 
                               ^ vlSelf->__PVT__t2__DOT__t3->__PVT__out) 
                              ^ ((vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                  << 0x18U) | (vlSelf->__PVT__t3__DOT__t0->__PVT__out 
                                               >> 8U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k8b[0U]);
    vlSelf->state_out[1U] = ((((((vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                  << 8U) | (vlSelf->__PVT__t0__DOT__t2->__PVT__out 
                                            >> 0x18U)) 
                                ^ vlSelf->__PVT__t1__DOT__t3->__PVT__out) 
                               ^ ((vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                   << 0x18U) | (vlSelf->__PVT__t2__DOT__t0->__PVT__out 
                                                >> 8U))) 
                              ^ ((vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                  << 0x10U) | (vlSelf->__PVT__t3__DOT__t1->__PVT__out 
                                               >> 0x10U))) 
                             ^ vlSymsp->TOP.aes_128__DOT__k8b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h6e31acce__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h6e31acce__0[2U];
}
