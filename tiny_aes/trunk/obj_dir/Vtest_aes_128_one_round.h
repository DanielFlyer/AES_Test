// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_aes_128.h for the primary calling header

#ifndef VERILATED_VTEST_AES_128_ONE_ROUND_H_
#define VERILATED_VTEST_AES_128_ONE_ROUND_H_  // guard

#include "verilated.h"

class Vtest_aes_128__Syms;
class Vtest_aes_128_T;

VL_MODULE(Vtest_aes_128_one_round) {
  public:
    // CELLS
    Vtest_aes_128_T* __PVT__t0__DOT__t0;
    Vtest_aes_128_T* __PVT__t0__DOT__t1;
    Vtest_aes_128_T* __PVT__t0__DOT__t2;
    Vtest_aes_128_T* __PVT__t0__DOT__t3;
    Vtest_aes_128_T* __PVT__t1__DOT__t0;
    Vtest_aes_128_T* __PVT__t1__DOT__t1;
    Vtest_aes_128_T* __PVT__t1__DOT__t2;
    Vtest_aes_128_T* __PVT__t1__DOT__t3;
    Vtest_aes_128_T* __PVT__t2__DOT__t0;
    Vtest_aes_128_T* __PVT__t2__DOT__t1;
    Vtest_aes_128_T* __PVT__t2__DOT__t2;
    Vtest_aes_128_T* __PVT__t2__DOT__t3;
    Vtest_aes_128_T* __PVT__t3__DOT__t0;
    Vtest_aes_128_T* __PVT__t3__DOT__t1;
    Vtest_aes_128_T* __PVT__t3__DOT__t2;
    Vtest_aes_128_T* __PVT__t3__DOT__t3;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_INW(state_in,127,0,4);
    VL_INW(key,127,0,4);
    VL_OUTW(state_out,127,0,4);

    // INTERNAL VARIABLES
    Vtest_aes_128__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_aes_128_one_round(Vtest_aes_128__Syms* symsp, const char* name);
    ~Vtest_aes_128_one_round();
    VL_UNCOPYABLE(Vtest_aes_128_one_round);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
