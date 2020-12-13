`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer Matthew Coyne
//
// Create Date:   15:51:18 04/07/2019
// Design Name:   my_alu
// Module Name:   D:/UCR/2019 Spring/CS161L/testing_setup/my_alu_testbench.v
// Project Name:  testing_setup
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_alu_testbench;

	parameter NUMBITS = 8;
	// Inputs
	reg clk;
	reg reset;
	reg [NUMBITS-1:0] A;
	reg [NUMBITS-1:0] B;
	reg [2:0] opcode;

	// Outputs
	wire [NUMBITS-1:0] result;
	wire carryout;
	wire overflow;
	wire zero;
	reg [NUMBITS-1:0] fixed_result;

	// Instantiate the Unit Under Test (UUT)
	my_alu #(NUMBITS) uut (
		.clk(clk), 
		.reset(reset), 
		.A(A), 
		.B(B), 
		.opcode(opcode), 
		.result(result), 
		.carryout(carryout), 
		.overflow(overflow), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		A = 0;
		B = 0;
		opcode = 0;
		
		clk = 1 ; reset = 0 ; #50 ; 

		// Wait 100 ns for global reset to finish
		#100;

		forever begin
			clk = ~clk; 
			#50;
		end
	end
	
	initial begin
		//
		// Test: unsigned add
		//
		#100;
		// Test simple addition 
		opcode = 3'b000;
		A = 'h01;
		B = 'h01;
		fixed_result = 'h02;		
	   #100 ;
     
		$display("\nTest: Unsigned Add - One plus one.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		// Test overflow
		#100;
		opcode = 3'b000;
		A = 'hFF;
		B = 'h01;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: Unsigned Add - Overflow.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (carryout != 1'b1) $display ("Carryout is wrong");	

		// Test Zero
		#100;
		opcode = 3'b000;
		A = 'h00;
		B = 'h00;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: Unsigned Add - Zero.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (carryout != 1'b0) $display ("Carryout is wrong");			
		
		//
		// Test: signed Add
		//
		
		// Test simple add
		#100;
		opcode = 3'b001;
		A = 'h6E;
		B = 'h11;
		fixed_result = 'h7F;		
	   #100 ;
		
		$display("\nTest: Signed Add - simple.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow is wrong");			
		
		// Test overflow
		#100;
		opcode = 3'b001;
		A = 'h7F;
		B = 'h01;
		fixed_result = 'h80;		
	   #100 ;
		
		$display("\nTest: Signed Add - overflow.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b1) $display ("Overflow not detected");
				
		// Test pos+neg=zero 
		#100;
		opcode = 3'b001;
		A = -'sd1;
		B = 'sd1;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: Signed Add->  -1+1=0.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (overflow != 1'b0) $display ("Overflow detected");	
		
		// Test double neg
		#100;
		opcode = 3'b001;
		A = -'sd1;
		B = -'sd1;
		fixed_result = -'sd2;		
	   #100 ;
		
		$display("\nTest: Signed Add -> -1 + -1 = -2.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");
				
		// Test double neg overflow 
		#100;
		opcode = 3'b001;
		A = -'sd127;
		B = -'sd2;
		fixed_result = 'd127;		
	   #100 ;
		
		$display("\nTest: Signed Add->  -127 + -2 -> 127 underflow.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b1) $display ("Overflow not detected");
		
		//
		// Test: unsigned Subtract
		//
		#100;
		// Test simple subtract
		opcode = 3'b010;
		A = 'd2;
		B = 'd1;
		fixed_result = 'h01;		
	   #100 ;
     
		$display("\nTest: Unsigned subtract - Two minus one.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		// Test overflow
		#100;
		opcode = 3'b010;
		A = 'd1;
		B = 'd2;
		fixed_result = 'd255;		
	   #100 ;
		
		$display("\nTest: Unsigned Subtract - Overflow.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (carryout != 1'b1) $display ("Carryout is wrong");	

		// Test Zero
		#100;
		opcode = 3'b010;
		A = 'd1;
		B = 'd1;
		fixed_result = 'h00;		
	   #100;
		
		$display("\nTest: Unsigned Sub - Zero.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		
		//
		// Test: signed Subtract		
		//
		
		// Test simple subtract
		#100;
		opcode = 3'b011;
		A = 'sd1;
		B = 'sd1;
		fixed_result = 'sd0;		
	   #100 ;
		
		$display("\nTest: Signed Subtract - simple and zero.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");			
		
		// Test pos minus neg
		#100;
		opcode = 3'b011;
		A = 'sd1;
		B = -'sd2;
		fixed_result = 'sd3;		
	   #100 ;
		
		$display("\nTest: Signed  Subtract - pos neg.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");
				
		// Test neg minus pos 
		#100;
		opcode = 3'b011;
		A = -'sd1;
		B = 'sd2;
		fixed_result = -'sd3;		
	   #100 ;
		
		$display("\nTest: Signed  Subtract ->  neg pos.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");	
		
		// Test underflow
		#100;
		opcode = 3'b011;
		A = -'sd128;
		B = 'sd1;
		fixed_result = 'sd127;		
	   #100 ;
		
		$display("\nTest: Signed  Subtract underflow.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b1) $display ("Overflow not detected");
				
		// Test overflow 
		#100;
		opcode = 3'b011;
		A = 'sd127;
		B = -'sd1;
		fixed_result = -'sd128;		
	   #100 ;
		
		$display("\nTest: Signed  Subtract -> overflow.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b1) $display ("Overflow not detected");
		
		//
		// Test AND
		//
		
		#100;
		opcode = 3'b100;
		A = 'hFF;
		B = 'hFF;
		fixed_result = 'hFF;		
	   #100 ;
		
		$display("\nTest: AND -> 0xFF & 0xFF.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");

		#100;
		opcode = 3'b100;
		A = 'hFF;
		B = 'h0F;
		fixed_result = 'h0F;		
	   #100 ;
		
		$display("\nTest: AND -> 0xFF & 0x0F.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");	

		#100;
		opcode = 3'b100;
		A = 'hFF;
		B = 'h00;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: AND -> 0xFF & 0x00.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");			
		
		//
		// Test OR
		//
		
		#100;
		opcode = 3'b101;
		A = 'hFF;
		B = 'hFF;
		fixed_result = 'hFF;		
	   #100 ;
		
		$display("\nTest: OR -> 0xFF | 0xFF.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");

		#100;
		opcode = 3'b101;
		A = 'hFF;
		B = 'h0F;
		fixed_result = 'hFF;		
	   #100 ;
		
		$display("\nTest: OR -> 0xFF | 0x0F.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");

		#100;
		opcode = 3'b101;
		A = 'h00;
		B = 'h00;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: OR -> 0xFF | 0x0F.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");	

		//
		// Test XOR
		//
		
		#100;
		opcode = 3'b110;
		A = 'h0F;
		B = 'hF0;
		fixed_result = 'hFF;		
	   #100 ;
		
		$display("\nTest: XOR -> 0x0F ^ 0xF0.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");

		#100;
		opcode = 3'b110;
		A = 'h00;
		B = 'h00;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: XOR -> 0x00 ^ 0x00.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");

		#100;
		opcode = 3'b110;
		A = 'hFF;
		B = 'hFF;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: XOR -> 0xFF ^ 0xFF.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");	

		//
		// Test A Div 2
		//
		
		#100;
		opcode = 3'b111;
		A = 'hFF;
		B = 'hF0;
		fixed_result = 'h7F;		
	   #100 ;
		
		$display("\nTest: A div 2 -> 0xFF.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b0) $display ("Zero wrongly detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");

		#100;
		opcode = 3'b111;
		A = 'h01;
		B = 'h00;
		fixed_result = 'h00;		
	   #100 ;
		
		$display("\nTest: A div 2 -> 0x01.");
		if (fixed_result != result) $display  ("Result is wrong");
		else $display ("Result is correct");
		if (zero != 1'b1) $display ("Zero not detected");
		if (overflow != 1'b0) $display ("Overflow wrongly detected");
		
	end
endmodule

