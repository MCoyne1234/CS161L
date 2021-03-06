`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

`define WORD_SIZE 32

module cs161_datapath(
    clk ,     
    rst ,     
    instr_op ,
    funct   , 
    reg_dst , 
    branch  , 
    mem_read , 
    mem_to_reg ,
    alu_op    , 
    mem_write  ,
    alu_src  ,  
    reg_write, 
	 
    // Debug Signals
    prog_count ,  
    instr_opcode ,  
    reg1_addr   ,  
    reg1_data  ,   
    reg2_addr  ,   
    reg2_data  ,   
    write_reg_addr ,
    write_reg_data
    );

 input wire  clk ; 
 input wire  rst ;
 
 output wire[5:0] instr_op ;
 output wire[5:0] funct  ;  
 
 input wire   reg_dst  ;
 input wire   branch   ;
 input wire   mem_read ;
 input wire   mem_to_reg ;
 input wire[3:0] alu_op  ;  
 input wire   mem_write ;
 input wire   alu_src   ; 
 input wire   reg_write  ;
 
// ----------------------------------------------
// Debug Signals
// ----------------------------------------------

 output wire[`WORD_SIZE-1:0]  prog_count ; 
 output wire[5:0] instr_opcode   ;  
 output wire[4:0] reg1_addr     ;   
 output wire[`WORD_SIZE-1:0] reg1_data ;
 output wire[4:0] reg2_addr   ;   
 output wire[`WORD_SIZE-1:0] reg2_data ;
 output wire[4:0] write_reg_addr  ;
 output wire[`WORD_SIZE-1:0] write_reg_data ; 


// Insert your solution below here.

wire [31:0] pc_input, 
				pc_output, 
				pc_plus4, 
				instr, 
				read_data1, 
				read_data2, 
				mem_data, 
				reg_write_data, 
				immed, 
				shiftleft2, 
				pc_offset,
				ALUsrc_mux, 
				alu_result;

wire [4:0] write_reg;

wire  zero, 
		branch_zero;

assign pc_plus4 = pc_output + 32'd4;

assign shiftleft2 = immed << 2;

assign branch_zero = zero & branch;

gen_register PC(
    .clk        (clk),
    .rst      (rst),
	 .write_en (1'b1),
	 .data_in (pc_input),
	 .data_out (pc_output)
);

cpumemory Instr_Mem_and_Data_Mem(
	.clk	(clk),
   .rst  (rst),
   .instr_read_address (pc_output[31:26]),
   .instr_instruction  (instr),
	
   .data_mem_write  (mem_write),   
   .data_address   (alu_result),    
   .data_write_data (read_data2),    
   .data_read_data (mem_data) 
);

mux_2_1_5bit mux_regDst(
	.select_in (reg_dst),
	.datain1 (instr[20:16]),
	.datain2 (instr[15:11]),
	.data_out (write_reg)
);

cpu_registers Register(
	.clk (clk),
	.rst	(rst),
	.reg_write (reg_write),
	.read_register_1 (instr[25:21]),
	.read_register_2 (instr[20:16]),
	.write_register (write_reg),
	.write_data (reg_write_data),
	.read_data_1 (read_data1),
	.read_data_2 (read_data2)
);

sign_extend sign_extend(
	.data_in (instr[15:0]),
	.data_out (immed)
);

adder PC_Add(
    .data1_in   (pc_plus4),
    .data2_in   (shiftleft2),
    .data_out   (pc_offset)
);

mux_2_1 MUX_ALUsrc(
	.select_in (alu_src),
	.datain1 (read_data2),
	.datain2 (immed),
	.data_out (ALUsrc_mux)
);


alu alu(
	.alu_control_in (alu_op),
	.channel_a_in (read_data1),
	.channel_b_in (ALUsrc_mux),
	.zero_out (zero),
	.alu_result_out (alu_result)
);

mux_2_1 MUX_branch(
	.select_in (branch_zero),
	.datain1 (pc_plus4),
	.datain2 (pc_offset),
	.data_out (pc_input)
);

mux_2_1 MUX_to_reg(
	.select_in (mem_to_reg),
	.datain1 (alu_result),
	.datain2 (mem_data),
	.data_out (reg_write_data)
);

assign prog_count = pc_output;
assign instr_opcode = instr[31:26];
assign reg1_addr = instr[25:21];
assign reg1_data = read_data1;
assign reg2_addr = instr[20:16];
assign reg2_data = read_data2;
assign write_reg_addr = write_reg;
assign write_reg_data = reg_write_data;
/*
always @(*)
begin
	prog_count <= pc_output;
	instr_opcode <= instr[31:26];
	reg1_addr <= instr[25:21];
	reg1_data <= read_data1;
	reg2_addr <= instr[20:16];
	reg2_data <= read_data2;
	write_reg_addr <= write_reg;
	write_reg_data <= reg_write_data;
end
*/
endmodule
