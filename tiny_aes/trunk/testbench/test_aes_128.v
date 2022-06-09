/*
 * Copyright 2012, Homer Hsing <homer.hsing@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

`timescale 1ns / 1ps

module test_aes_128(clk, state, key);

	// Inputs
	input clk;
	input [127:0] state;
	input [127:0] key;

	// Outputs
	wire [127:0] out;

	// Instantiate the Unit Under Test (UUT)
	aes_128 uut (
		.clk(clk), 
		.state(state), 
		.key(key), 
		.out(out)
	);

	initial begin
		clk = 0;
		state = 0;
		key = 0;

        /*
         * TIMEGRP "key" OFFSET = IN 6.4 ns VALID 6 ns AFTER "clk" HIGH;
         * TIMEGRP "state" OFFSET = IN 6.4 ns VALID 6 ns AFTER "clk" HIGH;
         * TIMEGRP "out" OFFSET = OUT 2.2 ns BEFORE "clk" HIGH;
         */
      
endmodule

