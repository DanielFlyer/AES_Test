#include <stdlib.h>
#include <iostream>
#include <chrono>
#include "verilated.h"
#include "./obj_dir/Vtest_aes_128.h"
#include "./testcase_generator/gen_test_case.c"
#include "./testcase_generator/aes.c"

typedef unsigned int word;

void encrypt_128_key_expand_inline_no_branch(word state[], word key[]);

int main(int argc, char **argv) {

	//Generate test case
	word state[4];
    word key[4];
	word out[4];
	rand_word_array(state, 128);
    rand_word_array(key, 128);
    printf("plaintext: ");
    print_verilog_hex(state, 128);
    printf("\n");
    printf("key:       ");
    print_verilog_hex(key, 128);
	std::copy(std::begin(state), std::end(state), std::begin(out));

	//C Implementation 
	auto start = std::chrono::high_resolution_clock::now();
	encrypt_128_key_expand_inline_no_branch(out, key);
	auto stop = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
	std::cout << "Time taken by C Implementation: "
         << duration.count() << " nanoseconds" << std::endl;

	printf("ciphertext:");
    print_verilog_hex(out, 128);
    printf("\n\n");

	//Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	//Create an instance of our module under test
	Vtest_aes_128 *test_aes_128 = new Vtest_aes_128;

	//Verilator simulation
	start = std::chrono::high_resolution_clock::now();
	test_aes_128->state = {state[3], state[2], state[1], state[0]};
	test_aes_128->key = {key[3], key[2], key[1], key[0]};
	test_aes_128->verify = {out[3], out[2], out[1], out[0]};
	while(!Verilated::gotFinish()){
		test_aes_128->clk = 1;
		test_aes_128->eval();
		test_aes_128->clk = 0;
		test_aes_128->eval();
	}
	stop = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	std::cout << "Time taken by Verilator Simulation: "
         << duration.count() << " microseconds" << std::endl;

	exit(EXIT_SUCCESS);
}
