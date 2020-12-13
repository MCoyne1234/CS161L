`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:41:22 04/21/2019
// Design Name:   control_unit
// Module Name:   D:/UCR/2019 Spring/CS161L/Lab3/datapath/lab03_tb.v
// Project Name:  datapath
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control_unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab03_tb;

	// Inputs
	reg [5:0] instr_op;
   reg clk ; 
   reg reset ; 
	
	// Outputs
	wire reg_dst;
	wire branch;
	wire mem_read;
	wire mem_to_reg;
	wire [1:0] alu_op;
	wire mem_write;
	wire alu_src;
	wire reg_write;
	   
		
	wire [3:0] alu_out ; 
   reg [5:0] instruction_5_0 ; 

	// Instantiate the Unit Under Test (UUT)
	control_unit uut (
		.instr_op(instr_op), 
		.reg_dst(reg_dst), 
		.branch(branch), 
		.mem_read(mem_read), 
		.mem_to_reg(mem_to_reg), 
		.alu_op(alu_op), 
		.mem_write(mem_write), 
		.alu_src(alu_src), 
		.reg_write(reg_write)
	);

	alu_control aluct (
		.alu_op (alu_op) ,
		.instruction_5_0(instruction_5_0) , 
		.alu_out(alu_out)
	);

	initial begin
		// Initialize Inputs
		instr_op = 0;

		clk = 0 ; reset = 1 ; #50 ; 
		clk = 1 ; reset = 1 ; #50 ; 
		clk = 0 ; reset = 0 ; #50 ; 
		clk = 1 ; reset = 0 ; #50 ; 
		 
		forever begin 
			clk = ~clk; #50 ; 
		end 
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
		initial begin
	
		#100 ; // Wait 
		
		//lw
		
	   instruction_5_0 = 6'b000000;
      instr_op = 6'b100011;
		  
		#100;
        
		$display("TC1 Load Word  ");
		
		if (reg_dst != 1'b0) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b1) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b1) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b1) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_out != 4'b0010) $display ("Alu out is wrong");
		
		if (alu_out != 4'b0010) $display ("Alu out is wrong");
		
		#100
		
		instruction_5_0 = 6'b101010;
      instr_op = 6'b100011;
		  
		#100;
        
		$display("TC2 Load Word 2 ");
		
		if (reg_dst != 1'b0) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b1) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b1) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b1) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b00) $display ("Alu OP is wrong");

		if (alu_out != 4'b0010) $display ("Alu out is wrong");
		
		#100
		
		//Store Word
		
		instruction_5_0 = 6'b101010;
      instr_op = 6'b101011;
		  
		#100;
        
		$display("TC3 Store Word  ");
		
		if (alu_src    != 1'b1) $display   ("Alu Src is wrong");		if (reg_write  != 1'b0) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b1) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b00) $display ("Alu OP is wrong");
		
		#100 ; // Wait 
	
	   instruction_5_0 = 6'b111111;
      instr_op = 6'b101011;
		  
		#100;
        
		$display("TC4 Store Word  ");
		
		
		if (alu_src    != 1'b1) $display   ("Alu Src is wrong");
		
		if (reg_write  != 1'b0) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		if (mem_write  != 1'b1) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b00) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0010) $display ("Alu out is wrong");

		#100
		
		//branch equal beq
		
		instruction_5_0 = 6'b101010;
      instr_op = 6'b000100;
		  
		#100;
        
		$display("TC5 Branch Equal ");
		

		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (reg_write  != 1'b0) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b1) $display ("Branch is wrong");
		if (alu_op != 2'b01) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0110) $display ("Alu out is wrong");
		
		#100
		
		//R-type
		
		instruction_5_0 = 6'b100000;
      instr_op = 6'b000000;
		  
		#100;
        
		$display("TC6 R-type add ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0010) $display ("Alu out is wrong");
		
		#100
		
		instruction_5_0 = 6'b100001;
      instr_op = 6'b000000;
		  
		#100;
        
		$display("TC7 R-type addu ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0010) $display ("Alu out is wrong");
		#100
		
		instruction_5_0 = 6'b100010;
      instr_op = 6'b000000;
		  
		#100;
        
		$display("TC8 R-type sub ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0110) $display ("Alu out is wrong");
		
		#100
		
		instruction_5_0 = 6'b101010;
      instr_op = 6'b000000;
		  
		#100;
        
		$display("TC9 R-type slt ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0111) $display ("Alu out is wrong");
		
		#100
		
		instruction_5_0 = 6'b100100;
      instr_op = 6'b000000;
		  
		#100;
        
		$display("TC10 R-type AND ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0000) $display ("Alu out is wrong");
		
		#100
		
		instruction_5_0 = 6'b100101;
      instr_op = 6'b000000;
		  
		#100;
        
		$display("TC11 R-type OR ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b0001) $display ("Alu out is wrong");
		
		#100
		
		instruction_5_0 = 6'b100111;
      instr_op = 6'b000000;
		  
		#100;
        
		$display("TC12 R-type NOR ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
		
		if (alu_out != 4'b1100) $display ("Alu out is wrong");
		
		instruction_5_0 = 6'b100000;
      instr_op = 6'b001000;
		  
		#100;
        
		$display("TC13 addi ");
		
		if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
		
		if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
		if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
		if (reg_write  != 1'b1) $display ("Reg Write is wrong");
		if (mem_read   != 1'b0) $display ("Mem read is wrong");
		
		if (mem_write  != 1'b0) $display ("Mem write is wrong");
		if (branch != 1'b0) $display ("Branch is wrong");
		if (alu_op != 2'b10) $display ("Alu OP is wrong");
				
		if (alu_out != 4'b0010) $display ("Alu out is wrong");
		
	end
      
endmodule

