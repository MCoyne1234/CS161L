`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:30:17 06/07/2019
// Design Name:   SPFPAdder
// Module Name:   D:/UCR/2019 Spring/CS161L/Lab7/float_adder/SPFPAdder_tb.v
// Project Name:  float_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPFPAdder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SPFPAdder_tb;

	// Inputs
	reg clk;
	reg rst;
	reg enable;
	reg [31:0] A;
	reg [31:0] B;

	// Outputs
	wire valid;
	wire [31:0] result;

	wire[32:0] NumA1;
	wire[32:0] NumB1;

	// Instantiate the Unit Under Test (UUT)
	SPFPAdder uut (
		.clk(clk), 
		.rst(rst), 
		.enable(enable), 
		.valid(valid), 
		.A(A), 
		.B(B), 
		.result(result),		
		.NumA1(NumA1),
		.NumB1(NumB1)
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
	enable = 'b0;
	#201
	
	// 1 + 2
	A = 'h3f800000;
	B = 'h40000000;
	enable = 'b1;
					
	#50
	enable = 'b0;#50
	// 0 + 0
	A = 'h00000000;
	B = 'h00000000;
	enable = 'b1;
	
	#50
	enable = 'b0;#50
	// 1 + 8
	A = 'h3f800000;
	B = 'h41000000;
	enable = 'b1;
		
	#50
	enable = 'b0;#50
	// 1 + -1
	A = 'h3f800000;
	B = 'hbf800000;
	enable = 'b1;
		
	#50
	enable = 'b0;#50
	// 1 + 0.125
	A = 'h3f800000;
	B = 'h3e000000;
	enable = 'b1;
		
	#50
	enable = 'b0;#50
	// 1 + 0.125
	A = 'h3f800000;
	B = 'h3e000000;
	enable = 'b1;
			
	#50
	enable = 'b0;#50
	// 0.03125 + 0.09375 =0.125 try subnormal numbers
	A = 'h00040000;
	B = 'h000c0000;
	enable = 'b1;

end
      
endmodule

