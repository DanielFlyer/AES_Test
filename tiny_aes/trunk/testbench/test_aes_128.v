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


module test_aes_128(clk);

	// Inputs
	input clk;
	reg [127:0] state;
	reg [127:0] key;

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
		out = 0;
		state = 0;
		key = 0;
		@ (negedge clk);
 		state = 128'h3243f6a8_885a308d_313198a2_e0370734;
        	key   = 128'h2b7e1516_28aed2a6_abf71588_09cf4f3c;
		if (out !== 128'h3925841d02dc09fbdc118597196a0b32)
          		begin $display("E"); $finish; end
		$display("Good.");
		$finish;
 	end
       
endmodule

