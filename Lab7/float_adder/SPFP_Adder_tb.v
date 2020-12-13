`timescale 1ns / 1ps

module lab07_tb;

	//inputs 
	reg clk;
	reg rst;
	reg enable;
	reg valid ;
	reg[31:0] A, B;
	reg result;

	SPFPAdder uut(      
		.clk(clk),
        .rst(rst),
        .enable(enable),
        .valid(valid),
        .A(A),
        .B(B),
        .result(result)
    );
	
  	initial begin 
	
		clk = 0 ; rst = 1 ; #50 ; 
		clk = 1 ; rst = 1 ; #50 ; 
		clk = 0 ; rst = 0 ; #50 ; 
		clk = 1 ; rst = 0 ; #50 ; 
		  
		forever begin 
			clk = ~clk; 
			#50 ; 
		end  
	end 

	initial begin
	#100
	
	A = 'd1;
	B = 'd2;
	enable = 'b1;
	
	#50
	// 1 + 2
	A = 'h3f800000;
	B = 'h40000000;
	enable = 'b1;
	
	#50
	// 1 + -1
	A = 'h3f800000;
	B = 'hbf800000;
	enable = 'b1;

	#50
	// 1 + 8
	A = 'h3f800000;
	B = 'h41000000;
	enable = 'b1;
	
	#50
	// 1 + 8
	A = 'h3f800000;
	B = 'h3e000000;
	enable = 'b1;
end