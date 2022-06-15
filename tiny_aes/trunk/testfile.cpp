#include <stdlib.h>
#include <iostream>
#include <chrono>
#include "verilated.h"
#include "./obj_dir/Vtest_aes_128.h"

int main(int argc, char **argv) {
	//Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	//Create an instance of our module under test
	Vtest_aes_128 *test_aes_128 = new Vtest_aes_128;

	auto start = std::chrono::high_resolution_clock::now();
	while(!Verilated::gotFinish()){
		test_aes_128->clk = 1;
		test_aes_128->eval();
		test_aes_128->clk = 0;
		test_aes_128->eval();
	}
	auto stop = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	std::cout << "Time taken by Verilator Simulation: "
         << duration.count() << " microseconds" << std::endl;
	exit(EXIT_SUCCESS);
}
