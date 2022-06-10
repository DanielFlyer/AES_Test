#include <stdlib.h>
#include <iostream>
#include "verilated.h"

int main(int argc, char **argv) {
	// Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	// Create an instance of our module under test
	Vtest_aes_128 *test_aes_128 = new Vtest_aes_128;
	state = 128'h3243f6a8_885a308d_313198a2_e0370734;
        key   = 128'h2b7e1516_28aed2a6_abf71588_09cf4f3c;
	test_aes_128->state = state;
	test_aes_128->key = key;
	test_aes_128->clk = 1;
	tb->eval();
	tb->clk = 0;
	tb->eval();
	state = 128'h00112233_44556677_8899aabb_ccddeeff;
        key   = 128'h00010203_04050607_08090a0b_0c0d0e0f;
}
