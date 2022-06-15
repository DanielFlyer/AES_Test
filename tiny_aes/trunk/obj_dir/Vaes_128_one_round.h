// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_128.h for the primary calling header

#ifndef VERILATED_VAES_128_ONE_ROUND_H_
#define VERILATED_VAES_128_ONE_ROUND_H_  // guard

#include "verilated.h"

class Vaes_128__Syms;
class Vaes_128_T;

VL_MODULE(Vaes_128_one_round) {
  public:
    // CELLS
    Vaes_128_T* __PVT__t0__DOT__t0;
    Vaes_128_T* __PVT__t0__DOT__t1;
    Vaes_128_T* __PVT__t0__DOT__t2;
    Vaes_128_T* __PVT__t0__DOT__t3;
    Vaes_128_T* __PVT__t1__DOT__t0;
    Vaes_128_T* __PVT__t1__DOT__t1;
    Vaes_128_T* __PVT__t1__DOT__t2;
    Vaes_128_T* __PVT__t1__DOT__t3;
    Vaes_128_T* __PVT__t2__DOT__t0;
    Vaes_128_T* __PVT__t2__DOT__t1;
    Vaes_128_T* __PVT__t2__DOT__t2;
    Vaes_128_T* __PVT__t2__DOT__t3;
    Vaes_128_T* __PVT__t3__DOT__t0;
    Vaes_128_T* __PVT__t3__DOT__t1;
    Vaes_128_T* __PVT__t3__DOT__t2;
    Vaes_128_T* __PVT__t3__DOT__t3;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_INW(state_in,127,0,4);
    VL_INW(key,127,0,4);
    VL_OUTW(state_out,127,0,4);

    // INTERNAL VARIABLES
    Vaes_128__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaes_128_one_round(Vaes_128__Syms* symsp, const char* name);
    ~Vaes_128_one_round();
    VL_UNCOPYABLE(Vaes_128_one_round);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
