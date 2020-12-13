`timescale 1ns / 1ps

module cs161_processor(
    clk ,
    rst ,    
	 // Debug signals 

    /*prog_count   , 
    instr_opcode   ,
    reg1_addr      ,
    reg1_data      ,
    reg2_addr      ,
    reg2_data      ,
    write_reg_addr ,
    write_reg_data , */
	output reg[31:0] instr
    );

input wire clk ;
input wire rst ;
    
// Debug Signals

/*output reg[31:0] prog_count     ; 
output reg[5:0]  instr_opcode   ;
output reg[4:0]  reg1_addr      ;
output reg[31:0] reg1_data      ;
output reg[4:0]  reg2_addr      ;
output reg[31:0] reg2_data      ;
output reg[4:0]  write_reg_addr ;
output reg[31:0] write_reg_data ;
output wire[31:0]  instr2   ;// Insert your solution below here.
*/

wire [31:0] pc_input, 
				pc_output, 
				pc_plus4, 
				instr, 
				read_data1, 
				read_data2, 
				mem_data, 
				reg_write_data, 
				immed, 
				sign_ext,
				shiftleft2, 
				pc_offset,
				ALUsrc_mux, 
				alu_result;

wire [4:0] write_reg;

wire [1:0] alu_op;

wire [3:0] alu_out;

wire  reg_dst, 
	  branch, 
	  mem_read, 
	  mem_to_reg, 
	  mem_write, 
	  alu_src, 
	  reg_write, 
	  zero, 
	  branch_zero;

assign pc_plus4 = { pc_output + 32'd4 };

assign sign_ext = {{16{immed[15]}}, immed};

assign shiftleft2 = sign_ext << 2;

assign branch_zero = zero & branch;

assign pc_offset = pc_plus4 + shiftleft2;

//assign instr2 = instr;


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

control_unit control_unit(
	.instr_op (instr[31:26]),
	.reg_dst (reg_dst),
	.branch	(branch),
	.mem_read (mem_read),
	.mem_to_reg (mem_to_reg),
	.alu_op (alu_op),
	.mem_write (mem_write),
	.alu_src (alu_src),
	.reg_write (reg_write)
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

/*
sign_extend sign_extend(
	.data_in (instr[15:0]),
	.data_out (immed)
);

adder PC_Add(
    .data1_in   (pc_plus4),
    .data2_in   (shiftleft2),
    .data_out   (pc_offset)
);
*/
mux_2_1 MUX_ALUsrc(
	.select_in (alu_src),
	.datain1 (read_data2),
	.datain2 (sign_ext),
	.data_out (ALUsrc_mux)
);

alu_control alu_control(
		.alu_op (alu_op),
		.instruction_5_0 (instr[5:0]),
		.alu_out(alu_out)
);

alu alu(
	.alu_control_in (alu_out),
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
/*
always @(*)begin
instr2 = inst;
	prog_count <= pc_output;
	instr_opcode <= instr[31:26];
	reg1_addr <= instr[25:21];
	reg1_data <= read_data1;
	reg2_addr <= instr[20:16];
	reg2_data <= read_data2;
	write_reg_addr <= write_reg;
	write_reg_data <= reg_write_data;
	instr2 <= instr;
	
end*/
	
endmodule
