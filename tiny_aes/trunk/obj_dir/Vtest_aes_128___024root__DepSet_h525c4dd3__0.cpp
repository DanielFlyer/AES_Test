// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128___024root.h"

VL_INLINE_OPT void Vtest_aes_128___024root___sequent__TOP__0(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->test_aes_128__DOT__out[0U] = (((0xff000000U 
                                            & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_4____pinNumber3) 
                                           | ((0xff0000U 
                                               & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_1____pinNumber3) 
                                              | ((0xff00U 
                                                  & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_2____pinNumber3) 
                                                 | (0xffU 
                                                    & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_3____pinNumber3)))) 
                                          ^ vlSelf->test_aes_128__DOT__uut__DOT__k9b[0U]);
    vlSelf->test_aes_128__DOT__out[1U] = (((0xff000000U 
                                            & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_3____pinNumber3) 
                                           | ((0xff0000U 
                                               & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_4____pinNumber3) 
                                              | ((0xff00U 
                                                  & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_1____pinNumber3) 
                                                 | (0xffU 
                                                    & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_2____pinNumber3)))) 
                                          ^ vlSelf->test_aes_128__DOT__uut__DOT__k9b[1U]);
    vlSelf->test_aes_128__DOT__out[2U] = (IData)((((QData)((IData)(
                                                                   (((0xff000000U 
                                                                      & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_1____pinNumber3) 
                                                                     | ((0xff0000U 
                                                                         & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_2____pinNumber3) 
                                                                        | ((0xff00U 
                                                                            & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_3____pinNumber3) 
                                                                           | (0xffU 
                                                                              & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_4____pinNumber3)))) 
                                                                    ^ 
                                                                    vlSelf->test_aes_128__DOT__uut__DOT__k9b[3U]))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((0xff000000U 
                                                                       & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_2____pinNumber3) 
                                                                      | ((0xff0000U 
                                                                          & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_3____pinNumber3) 
                                                                         | ((0xff00U 
                                                                             & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_4____pinNumber3) 
                                                                            | (0xffU 
                                                                               & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_1____pinNumber3)))) 
                                                                     ^ 
                                                                     vlSelf->test_aes_128__DOT__uut__DOT__k9b[2U])))));
    vlSelf->test_aes_128__DOT__out[3U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    (((0xff000000U 
                                                                       & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_1____pinNumber3) 
                                                                      | ((0xff0000U 
                                                                          & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_2____pinNumber3) 
                                                                         | ((0xff00U 
                                                                             & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_3____pinNumber3) 
                                                                            | (0xffU 
                                                                               & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_4____pinNumber3)))) 
                                                                     ^ 
                                                                     vlSelf->test_aes_128__DOT__uut__DOT__k9b[3U]))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((0xff000000U 
                                                                        & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_2____pinNumber3) 
                                                                       | ((0xff0000U 
                                                                           & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_3____pinNumber3) 
                                                                          | ((0xff00U 
                                                                              & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_4____pinNumber3) 
                                                                             | (0xffU 
                                                                                & vlSelf->test_aes_128__DOT__uut__DOT__rf__DOT____Vcellout__S4_1____pinNumber3)))) 
                                                                      ^ 
                                                                      vlSelf->test_aes_128__DOT__uut__DOT__k9b[2U])))) 
                                                  >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k2a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v2;
    vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k1a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v1;
    vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k0a 
        = vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v0;
    vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k0[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k9[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k8[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k7[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k6[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k5[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k4[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k3[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k2[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k3a 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v2 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k1[0U]);
    vlSelf->test_aes_128__DOT__uut__DOT__k0[0U] = vlSelf->key[0U];
    vlSelf->test_aes_128__DOT__uut__DOT__k0[1U] = vlSelf->key[1U];
    vlSelf->test_aes_128__DOT__uut__DOT__k0[2U] = vlSelf->key[2U];
    vlSelf->test_aes_128__DOT__uut__DOT__k0[3U] = vlSelf->key[3U];
    vlSelf->test_aes_128__DOT__uut__DOT__k9[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k9[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k9[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k9[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k8[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k8[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k8[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k8[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k7[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k7[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k7[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k7[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k6[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k6[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k6[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k6[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k5[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k5[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k5[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k5[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k4[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k4[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k4[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k4[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k3[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k3[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k3[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k3[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k2[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k2[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k2[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k2[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k1[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k1[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k1[2U] = (IData)(
                                                          (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k0b)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k1[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k1b))) 
                                                           >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v0 
        = ((0xff000000U & (0x1000000U ^ (0xff000000U 
                                         & vlSelf->test_aes_128__DOT__uut__DOT__k0[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k0[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v0 
        = ((0xff000000U & (0x36000000U ^ (0xff000000U 
                                          & vlSelf->test_aes_128__DOT__uut__DOT__k9[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k9[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v0 
        = ((0xff000000U & (0x1b000000U ^ (0xff000000U 
                                          & vlSelf->test_aes_128__DOT__uut__DOT__k8[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k8[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v0 
        = ((0xff000000U & (0x80000000U ^ (0xff000000U 
                                          & vlSelf->test_aes_128__DOT__uut__DOT__k7[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k7[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v0 
        = ((0xff000000U & (0x40000000U ^ (0xff000000U 
                                          & vlSelf->test_aes_128__DOT__uut__DOT__k6[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k6[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v0 
        = ((0xff000000U & (0x20000000U ^ (0xff000000U 
                                          & vlSelf->test_aes_128__DOT__uut__DOT__k5[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k5[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v0 
        = ((0xff000000U & (0x10000000U ^ (0xff000000U 
                                          & vlSelf->test_aes_128__DOT__uut__DOT__k4[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k4[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v0 
        = ((0xff000000U & (0x8000000U ^ (0xff000000U 
                                         & vlSelf->test_aes_128__DOT__uut__DOT__k3[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k3[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v0 
        = ((0xff000000U & (0x4000000U ^ (0xff000000U 
                                         & vlSelf->test_aes_128__DOT__uut__DOT__k2[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k2[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v0 
        = ((0xff000000U & (0x2000000U ^ (0xff000000U 
                                         & vlSelf->test_aes_128__DOT__uut__DOT__k1[3U]))) 
           | (0xffffffU & vlSelf->test_aes_128__DOT__uut__DOT__k1[3U]));
    vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k0[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k9[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k8[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k7[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k6[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k5[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k4[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k3[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k2[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v1 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v0 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k1[2U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k0[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a10__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k9[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k8[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k7[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k6[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k5[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k4[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k3[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k2[1U]);
    vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v2 
        = (vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__v1 
           ^ vlSelf->test_aes_128__DOT__uut__DOT__k1[1U]);
}

VL_INLINE_OPT void Vtest_aes_128___024root___sequent__TOP__2(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->test_aes_128__DOT__uut__DOT__k8b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k8b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k8b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k8b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a9__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k0b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k0b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k0b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k0b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a1__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k1b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k1b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k1b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k1b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a2__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k2b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k2b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k2b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k2b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a3__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k3b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k3b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k3b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k3b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a4__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k4b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k4b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k4b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k4b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a5__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k5b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k5b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k5b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k5b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a6__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k6b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k6b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k6b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k6b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a7__DOT__k1b))) 
                                                            >> 0x20U));
    vlSelf->test_aes_128__DOT__uut__DOT__k7b[0U] = vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k3b;
    vlSelf->test_aes_128__DOT__uut__DOT__k7b[1U] = vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k2b;
    vlSelf->test_aes_128__DOT__uut__DOT__k7b[2U] = (IData)(
                                                           (((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k0b)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k1b))));
    vlSelf->test_aes_128__DOT__uut__DOT__k7b[3U] = (IData)(
                                                           ((((QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k0b)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->test_aes_128__DOT__uut__DOT__a8__DOT__k1b))) 
                                                            >> 0x20U));
}

VL_INLINE_OPT void Vtest_aes_128___024root___sequent__TOP__3(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___sequent__TOP__3\n"); );
    // Body
    if (VL_UNLIKELY((0U == ((((vlSelf->test_aes_128__DOT__out[0U] 
                               ^ vlSelf->verify[0U]) 
                              | (vlSelf->test_aes_128__DOT__out[1U] 
                                 ^ vlSelf->verify[1U])) 
                             | (vlSelf->test_aes_128__DOT__out[2U] 
                                ^ vlSelf->verify[2U])) 
                            | (vlSelf->test_aes_128__DOT__out[3U] 
                               ^ vlSelf->verify[3U]))))) {
        VL_WRITEF("Good.\n");
        VL_FINISH_MT("testbench/test_aes_128.v", 42, "");
    }
}

QData Vtest_aes_128___024root___change_request_1(Vtest_aes_128___024root* vlSelf);

VL_INLINE_OPT QData Vtest_aes_128___024root___change_request(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___change_request\n"); );
    // Body
    return (Vtest_aes_128___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vtest_aes_128___024root___eval_debug_assertions(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
