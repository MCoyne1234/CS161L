`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:39:13 04/21/2019 
// Design Name: 
// Module Name:    control_unit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module control_unit  (
    input wire [5:0]  instr_op , 
    output wire reg_dst      ,   
    output wire  branch    ,     
    output wire  mem_read ,  
    output wire  mem_to_reg  ,
    output wire [1:0] alu_op  ,        
    output wire  mem_write  , 
    output wire  alu_src     ,    
    output wire  reg_write  
    );  
  
reg reg_dst_r 		= 'b0;   
reg branch_r 		= 'b0;     
reg mem_read_r 	= 'b0;  
reg mem_to_reg_r  = 'b0;
reg [1:0] alu_op_r= 'b00;
reg mem_write_r 	= 'b0;
reg alu_src_r 		= 'b0;    
reg reg_write_r 	= 'b0; 

assign reg_dst 	=  reg_dst_r;   	
assign branch 		=  branch_r ;	    
assign mem_read 	=  mem_read_r ;
assign mem_to_reg =  mem_to_reg_r;
assign alu_op  	=  alu_op_r ;
assign mem_write 	=  mem_write_r ;
assign alu_src 	=  alu_src_r ;  
assign reg_write 	=  reg_write_r ;

 
always @(*)
begin
	case(instr_op) 
		6'b000000:
		begin
			 reg_dst_r 		= 1'b1;
			 alu_src_r 		= 1'b0;
			 mem_to_reg_r  = 1'b0;
			 reg_write_r 	= 1'b1;
			 mem_read_r 	= 1'b0;
			 mem_write_r 	= 1'b0;
			 branch_r 		= 1'b0;
			 alu_op_r 		= 2'b10;		 
		 end
		6'b100011:
		begin
			 reg_dst_r 		= 1'b0;
			 alu_src_r 		= 1'b1;
			 mem_to_reg_r  = 1'b1;
			 reg_write_r 	= 1'b1;
			 mem_read_r 	= 1'b1;
			 mem_write_r 	= 1'b0;
			 branch_r 		= 1'b0;
			 alu_op_r 		= 2'b00;
		 end
		6'b101011:
		begin
			 reg_dst_r 		= 1'bx;
			 alu_src_r 		= 1'b1;
			 mem_to_reg_r  = 1'bx;
			 reg_write_r 	= 1'b0;
			 mem_read_r 	= 1'b0;
			 mem_write_r 	= 1'b1;
			 branch_r 		= 1'b0;
			 alu_op_r 		= 2'b00;
		 end	 
		6'b000100:
		begin
			 reg_dst_r 		= 1'bx;
			 alu_src_r 		= 1'b0;
			 mem_to_reg_r  = 1'bx;
			 reg_write_r 	= 1'b0;
			 mem_read_r 	= 1'b0;
			 mem_write_r 	= 1'b0;
			 branch_r 		= 1'b1;
			 alu_op_r 		= 2'b01;
		 end	
		6'b001000:
		begin
			// Do nothing
		end
	endcase	
end 
 
endmodule
