#include <stdlib.h>
#include <iostream>
#include "verilated.h"

int main(int argc, char **argv) {
	// Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	// Create an instance of our module under test
	Vtest_aes_128 *test_aes_128 = new Vtest_aes_128;

	while(!Verilated::gotFinish()){
		test_aes_128->clk = 1;
		test_aes_128->eval();
		test_aes_128->clk = 0;
		test_aes_128->eval();
	} exit(EXIT_SUCCESS);
}
