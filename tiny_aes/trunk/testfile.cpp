#include <stdlib.h>
#include <iostream>
#include "verilated.h"

int main(int argc, char **argv) {
	// Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

	// Create an instance of our module under test
	Vtest_aes_128 *test_aes_128 = new Vtest_aes_128;
	while( !Verilated::gotFinish() ) {
		rand_word_array(state, 128);
        	rand_word_array(key, bit_num);
		test_aes_128->clk = 1;
		test_aes_128->state = state;
		test_aes_128->key = key;
		tb->eval();
		tb->clk = 0;
		tb->eval();
    //std::cout << "cpu_state: "+tb->__Vdly__tb__DOT__u0__DOT__u0__DOT__cpu_state << std::endl;
	} exit(EXIT_SUCCESS);
}
word rand_word() {
    word w = 0;
    for(int i=0; i<4; i++) {
        word x = rand() & 255;
        w = (w << 8) | x;
    }
    return w;
}

void rand_word_array(word w[], int bit_num) {
    int word_num = bit_num / 32;
    for(int i=0; i<word_num; i++)
        w[i] = rand_word();
}

void print_verilog_hex(word w[], int bit_num) {
    int byte_num = bit_num / 8;
    byte *b = (byte *)w;
    printf("%d'h", bit_num);
    for(int i=0; i<byte_num; i++)
        printf("%02x", b[i]);
}
