#include <stdlib.h>
#include <iostream>
#include <chrono>
#include "verilated.h"
#include "./obj_dir/Vaes_128.h"
#include "./testcase_generator/gen_test_case.c"
#include "./testcase_generator/aes.c"
#define REV(n) ((n << 24) | (((n>>16)<<24)>>16) |  (((n<<16)>>24)<<16) | (n>>24))
typedef unsigned int word;

void encrypt_128_key_expand_inline_no_branch(word state[], word key[]);
void convert_verilog_hex(word w[], int bit_num);

int main(int argc, char **argv) {
	for(int i = 0; i < atoi(argv[1]); i++){
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
	printf("\n");
	std::copy(std::begin(state), std::end(state), std::begin(out));

	//C Implementation 
	auto start = std::chrono::steady_clock::now();
	encrypt_128_key_expand_inline_no_branch(out, key);
	auto stop = std::chrono::steady_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);

	printf("ciphertext:");
    print_verilog_hex(out, 128);
    printf("\n");

	std::cout << "Time taken by C Implementation: "
          << duration.count() << " nanoseconds" << std::endl;


	//Verilator simulation

	//Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	//Create an instance of our module under test
	Vaes_128 *aes_128 = new Vaes_128;

	aes_128->state = {REV(state[3]), REV(state[2]), REV(state[1]), REV(state[0])};
	aes_128->key = {REV(key[3]), REV(key[2]), REV(key[1]), REV(key[0])};
	out[3] = REV(out[3]);
	out[2] = REV(out[2]);
	out[1] = REV(out[1]);
	out[0] = REV(out[0]);
	auto start2 = std::chrono::steady_clock::now();
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	auto stop2 = std::chrono::steady_clock::now();
	auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(stop2 - start2);
	std::cout << "Time taken by Verilator Simulation: "
         << duration2.count() << " microseconds" << std::endl;
		printf("\n");
	}

	
	exit(EXIT_SUCCESS);
}
