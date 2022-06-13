test_aes_128:./testbench/test_aes_128.v
	verilator -O3 -cc --top-module test_aes_128 ./testbench/test_aes_128.v ./rtl/aes_128.v ./rtl/round.v ./rtl/table.v

sim:testfile.cpp
	g++ -I obj_dir -I/home/dflyer/verilator/include -L obj_dir testfile.cpp ./obj_dir/Vtest_aes_128.cpp ./obj_dir/Vtest_aes_128__Syms.cpp /home/dflyer/verilator/include/verilated.cpp -o test_aes_128
