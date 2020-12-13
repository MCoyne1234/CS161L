`timescale 1ns / 1ps

module cs161_processor(
    clk ,
    rst ,   
	 // Debug signals 
    prog_count     , 
    instr_opcode   ,
    reg1_addr      ,
    reg1_data      ,
    reg2_addr      ,
    reg2_data      ,
    write_reg_addr ,
    write_reg_data  
	 
    );

input wire clk ;
input wire rst ;
    
// Debug Signals

output wire[31:0] prog_count     ; 
output wire[5:0]  instr_opcode   ;
output wire[4:0]  reg1_addr      ;
output wire[31:0] reg1_data      ;
output wire[4:0]  reg2_addr      ;
output wire[31:0] reg2_data      ;
output wire[4:0]  write_reg_addr ;
output wire[31:0] write_reg_data ;

// Insert your solution below here.
wire   reg_dst  ;
wire   branch   ;
wire   mem_read ;
wire   mem_to_reg ;
wire[1:0] alu_op  ; 
wire   mem_write ;
wire   alu_src   ; 
wire   reg_write  ;
wire[3:0]   alu_out ;

wire[5:0] instr_op ; 
wire[5:0] funct  ; 

wire[31:0] poop;

//assign prog_count = poop;

cs161_datapath datapath(
    .clk (clk),     
    .rst (rst),     
    .instr_op (instr_op),
    .funct   (funct), 
    .reg_dst (reg_dst), 
    .branch  (branch), 
    .mem_read (mem_read), 
    .mem_to_reg (mem_to_reg),
    .alu_op (alu_out), 
    .mem_write (mem_write) ,
    .alu_src (alu_src) ,  
    .reg_write (reg_write), 
	 
 // Debug Signals
    .prog_count(prog_count)  ,  
    .instr_opcode(instr_opcode) ,  
    .reg1_addr ( reg1_addr) ,  
    .reg1_data (reg1_data ) ,   
    .reg2_addr ( reg2_addr ) ,   
    .reg2_data ( reg2_data ) ,   
    .write_reg_addr ( write_reg_addr ),
    .write_reg_data ( write_reg_data )
    );
	 
control_unit control_unit(
	.instr_op (instr_op) ,
	.reg_dst (reg_dst) ,
	.branch	(branch) ,
	.mem_read (mem_read) ,
	.mem_to_reg (mem_to_reg) ,
	.alu_op (alu_op ),
	.mem_write (mem_write) ,
	.alu_src (alu_src) ,
	.reg_write (reg_write)
);
	 
alu_control alu_control(
		.alu_op (alu_op),
		.instruction_5_0 (funct),
		.alu_out(alu_out)
);	 	 
	 
endmodule
