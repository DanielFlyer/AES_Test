// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128_T.h"
#include "Vtest_aes_128__Syms.h"
#include "Vtest_aes_128_one_round.h"

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r1__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r1__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h7d21ada7__0;
    // Body
    __Vtemp_h7d21ada7__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k0b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k0b[2U])))));
    __Vtemp_h7d21ada7__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k0b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k0b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k0b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k0b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h7d21ada7__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h7d21ada7__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r2__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r2__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h785bb8b4__0;
    // Body
    __Vtemp_h785bb8b4__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k1b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k1b[2U])))));
    __Vtemp_h785bb8b4__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k1b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k1b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k1b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k1b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h785bb8b4__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h785bb8b4__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r3__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r3__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb5b3c55c__0;
    // Body
    __Vtemp_hb5b3c55c__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k2b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k2b[2U])))));
    __Vtemp_hb5b3c55c__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k2b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k2b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k2b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k2b[1U]);
    vlSelf->state_out[2U] = __Vtemp_hb5b3c55c__0[1U];
    vlSelf->state_out[3U] = __Vtemp_hb5b3c55c__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r4__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r4__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h27878b11__0;
    // Body
    __Vtemp_h27878b11__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k3b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k3b[2U])))));
    __Vtemp_h27878b11__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k3b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k3b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k3b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k3b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h27878b11__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h27878b11__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r5__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r5__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h38bcb1fb__0;
    // Body
    __Vtemp_h38bcb1fb__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k4b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k4b[2U])))));
    __Vtemp_h38bcb1fb__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k4b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k4b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k4b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k4b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h38bcb1fb__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h38bcb1fb__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r6__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r6__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hbaad6161__0;
    // Body
    __Vtemp_hbaad6161__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k5b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k5b[2U])))));
    __Vtemp_hbaad6161__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k5b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k5b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k5b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k5b[1U]);
    vlSelf->state_out[2U] = __Vtemp_hbaad6161__0[1U];
    vlSelf->state_out[3U] = __Vtemp_hbaad6161__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r7__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r7__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h46e0bdec__0;
    // Body
    __Vtemp_h46e0bdec__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k6b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k6b[2U])))));
    __Vtemp_h46e0bdec__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k6b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k6b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k6b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k6b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h46e0bdec__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h46e0bdec__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r8__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r8__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h28f5b39e__0;
    // Body
    __Vtemp_h28f5b39e__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k7b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k7b[2U])))));
    __Vtemp_h28f5b39e__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k7b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k7b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k7b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k7b[1U]);
    vlSelf->state_out[2U] = __Vtemp_h28f5b39e__0[1U];
    vlSelf->state_out[3U] = __Vtemp_h28f5b39e__0[2U];
}

VL_INLINE_OPT void Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r9__1(Vtest_aes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_aes_128_one_round___sequent__TOP__test_aes_128__DOT__uut__DOT__r9__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hb4c45255__0;
    // Body
    __Vtemp_hb4c45255__0[1U] = (IData)((((QData)((IData)(
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
                                                          vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k8b[3U]))) 
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k8b[2U])))));
    __Vtemp_hb4c45255__0[2U] = (IData)(((((QData)((IData)(
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
                                                           vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k8b[3U]))) 
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
                                                            vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k8b[2U])))) 
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k8b[0U]);
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
                             ^ vlSymsp->TOP.test_aes_128__DOT__uut__DOT__k8b[1U]);
    vlSelf->state_out[2U] = __Vtemp_hb4c45255__0[1U];
    vlSelf->state_out[3U] = __Vtemp_hb4c45255__0[2U];
}
