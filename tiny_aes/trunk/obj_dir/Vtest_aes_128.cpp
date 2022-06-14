// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_aes_128.h"
#include "Vtest_aes_128__Syms.h"

//============================================================
// Constructors

Vtest_aes_128::Vtest_aes_128(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtest_aes_128__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtest_aes_128::Vtest_aes_128(const char* _vcname__)
    : Vtest_aes_128(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtest_aes_128::~Vtest_aes_128() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtest_aes_128___024root___eval_initial(Vtest_aes_128___024root* vlSelf);
void Vtest_aes_128___024root___eval_settle(Vtest_aes_128___024root* vlSelf);
void Vtest_aes_128___024root___eval(Vtest_aes_128___024root* vlSelf);
#ifdef VL_DEBUG
void Vtest_aes_128___024root___eval_debug_assertions(Vtest_aes_128___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_aes_128___024root___final(Vtest_aes_128___024root* vlSelf);

static void _eval_initial_loop(Vtest_aes_128__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtest_aes_128___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtest_aes_128___024root___eval_settle(&(vlSymsp->TOP));
        Vtest_aes_128___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtest_aes_128::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_aes_128::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_aes_128___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtest_aes_128___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vtest_aes_128::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtest_aes_128::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtest_aes_128::final() {
    Vtest_aes_128___024root___final(&(vlSymsp->TOP));
}
