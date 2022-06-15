// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAES_128_H_
#define VERILATED_VAES_128_H_  // guard

#include "verilated.h"

class Vaes_128__Syms;
class Vaes_128___024root;
class Vaes_128_one_round;
class Vaes_128_S;


// This class is the main interface to the Verilated model
class Vaes_128 VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaes_128__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_INW(&state,127,0,4);
    VL_INW(&key,127,0,4);
    VL_OUTW(&out,127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vaes_128_one_round* const __PVT__aes_128__DOT__r1;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r2;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r3;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r4;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r5;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r6;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r7;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r8;
    Vaes_128_one_round* const __PVT__aes_128__DOT__r9;
    Vaes_128_S* const __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_3;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_0;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_1;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_2;
    Vaes_128_S* const __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_3;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaes_128___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaes_128(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaes_128(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaes_128();
  private:
    VL_UNCOPYABLE(Vaes_128);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
