#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "verilated.h"
#include "./obj_dir/Vaes_128.h"
#include "./testcase_generator/gen_test_case.c"
#include "./testcase_generator/aes.c"
#define REV(n) ((n << 24) | (((n>>16)<<24)>>16) |  (((n<<16)>>24)<<16) | (n>>24))
typedef unsigned int word;
double verilatorTime;
double cTime;
double verilatorTime2;
double cTime2;

void encrypt_128_key_expand_inline_no_branch(word state[], word key[]);
void convert_verilog_hex(word w[], int bit_num);


int main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);
    verilatorTime = 0;
    cTime = 0;
	verilatorTime2 = 0;
    cTime2 = 0;

	for(int i = 0; i < atoi(argv[1]); i++){
	//Generate test case
	word state[4];
    word key[4];
	word out[4];
	clock_t start, end;
	rand_word_array(state, 128);
    rand_word_array(key, 128);
    // printf("plaintext: ");
    // print_verilog_hex(state, 128);
    // printf("\n");
    // printf("key:       ");
    // print_verilog_hex(key, 128);
	// printf("\n");

	std::copy(std::begin(state), std::end(state), std::begin(out));

	//C Implementation 
	start = clock();
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	end = clock();
    cTime += ((double) (end - start)) / CLOCKS_PER_SEC;

	// printf("ciphertext:");
    //print_verilog_hex(out, 128);
    // printf("\n");


	//Verilator simulation

	//Create an instance of our module under test
	Vaes_128 *aes_128 = new Vaes_128;

	aes_128->state = {REV(state[3]), REV(state[2]), REV(state[1]), REV(state[0])};
	aes_128->key = {REV(key[3]), REV(key[2]), REV(key[1]), REV(key[0])};
	out[3] = REV(out[3]);
	out[2] = REV(out[2]);
	out[1] = REV(out[1]);
	out[0] = REV(out[0]);
	start = clock();
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	end = clock();
    verilatorTime += ((double) (end - start)) / CLOCKS_PER_SEC;

		//C Implementation 
	start = clock();
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	encrypt_128_key_expand_inline_no_branch(out, key);
	end = clock();
    cTime2 += ((double) (end - start)) / CLOCKS_PER_SEC;

	// printf("ciphertext:");
    //print_verilog_hex(out, 128);
    // printf("\n");


	//Verilator simulation

	//Create an instance of our module under test
	start = clock();
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	for(int j = 0; j < 24; j++){
		aes_128->clk = 1;
		aes_128->eval();
		aes_128->clk = 0;
		aes_128->eval();
	}
	end = clock();
    verilatorTime2 += ((double) (end - start)) / CLOCKS_PER_SEC;
	//std::cout << aes_128->out << std::endl;
	// if(out[3] != aes_128->out){
	// 	std::cout << "E"<< std::endl;
	// }

	}
	// std::cout << "Time taken by C Implementation: "
    //       << cTime << " seconds" << std::endl;	
	// std::cout << "Time taken by Verilator Simulation: "
    //      << verilatorTime << " seconds" << std::endl;
	// std::cout << 100 * (verilatorTime - cTime) / cTime << "% time save\n";

	exit(EXIT_SUCCESS);
}
