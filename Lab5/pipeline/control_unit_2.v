`timescale 1ns / 1ps

module control_unit(
	input wire clk,
	input wire reset,
	
	input wire [5:0] instr_op ,
	output reg reg_dst ,
	output reg branch ,
	output reg mem_read ,
	output reg mem_to_reg ,
	output reg [1:0] alu_op ,
	output reg mem_write ,
	output reg alu_src ,
	output reg reg_write
    );

reg	[3:0] state, next_state;

//ALUOp Values:
// 00 -> addition
// 01 -> subtraction
// 10 -> Function (R-Type)
// 11 -> Opcode	(I-Type)

///////////////////////
//STATES///////////////
///////////////////////

	parameter S0 = 4'b0000; //Instruction Fetch
	parameter S1 = 4'b0001; //Instruction Decode
	parameter S2 = 4'b0010;
	parameter S3 = 4'b0011;
	parameter S4 = 4'b0100;

	parameter S9 = 4'b1001;  //Memory Write	
	parameter S10 = 4'b1010; //Register Write

	
always @(posedge clk)
begin
	state <= next_state;
end
	
always @ (state or reset)
begin
	if(reset == 1'b1)
		begin			
			alu_src = 1'b0;
			mem_to_reg = 1'b0;
			reg_write = 1'b0;
			mem_read = 1'b0;
			mem_write = 1'b0;
			branch = 1'b0;
			alu_op = 2'b00;
		end
	
	else
	begin
	case(state)
		//Instruction Fetch
		S0:
		begin
			reg_dst = 1'b1;
			alu_src = 1'b0;
			mem_to_reg = 1'b0;
			reg_write = 1'b1;
			mem_read = 1'b1;
			mem_write = 1'b0;
			branch = 1'b0;
			alu_op = 2'b10;
		end
		S1:
		begin
			reg_dst = 1'b1;
			alu_src = 1'b0;
			mem_to_reg = 1'b0;
			reg_write = 1'b1;
			mem_read = 1'b0;
			mem_write = 1'b0;
			branch = 1'b0;
			alu_op = 2'b10;
		end
		S2:
		begin
			reg_dst = 1'b1;
			alu_src = 1'b0;
			mem_to_reg = 1'b0;
			reg_write = 1'b1;
			mem_read = 1'b0;
			mem_write = 1'b0;
			branch = 1'b0;
			alu_op = 2'b10;
		end
		S3:
		begin
			reg_dst = 1'b1;
			alu_src = 1'b0;
			mem_to_reg = 1'b0;
			reg_write = 1'b1;
			mem_read = 1'b0;
			mem_write = 1'b0;
			branch = 1'b0;
			alu_op = 2'b10;
		end
		S4:
		begin
			reg_dst = 1'b1;
			alu_src = 1'b0;
			mem_to_reg = 1'b0;
			reg_write = 1'b1;
			mem_read = 1'b0;
			mem_write = 1'b0;
			branch = 1'b0;
			alu_op = 2'b10;
		end
begin 

