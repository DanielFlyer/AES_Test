// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes_128.h"
#include "Vaes_128__Syms.h"

//============================================================
// Constructors

Vaes_128::Vaes_128(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vaes_128__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , state{vlSymsp->TOP.state}
    , key{vlSymsp->TOP.key}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vaes_128::Vaes_128(const char* _vcname__)
    : Vaes_128(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vaes_128::~Vaes_128() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vaes_128___024root___eval_initial(Vaes_128___024root* vlSelf);
void Vaes_128___024root___eval_settle(Vaes_128___024root* vlSelf);
void Vaes_128___024root___eval(Vaes_128___024root* vlSelf);
#ifdef VL_DEBUG
void Vaes_128___024root___eval_debug_assertions(Vaes_128___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes_128___024root___final(Vaes_128___024root* vlSelf);

static void _eval_initial_loop(Vaes_128__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vaes_128___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vaes_128___024root___eval_settle(&(vlSymsp->TOP));
        Vaes_128___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vaes_128::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes_128::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes_128___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vaes_128___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vaes_128::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vaes_128::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vaes_128::final() {
    Vaes_128___024root___final(&(vlSymsp->TOP));
}
