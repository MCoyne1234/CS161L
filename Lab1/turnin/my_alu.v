`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Matthew Coyne
// 
// Create Date:    19:33:19 04/01/2019 
// Design Name: 
// Module Name:    my_alu 
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
module my_alu #(parameter NUMBITS = 32)(
    input wire clk,
    input wire reset,
    input wire [(NUMBITS-1):0] A,
    input wire [(NUMBITS-1):0] B,
    input wire [2:0]opcode,
    output reg [(NUMBITS-1):0]result,
    output reg carryout,
    output reg overflow,
    output reg zero
    );
	 
	 reg [(NUMBITS-1):0] res;
	 reg carry;
	 reg overf;
	 
	always @(*) begin
		
		res = 'd0; 
	
		case (opcode)
		3'b000 : 
		begin // unsigned add
		//  In unsigned numbers, carry out is equivalent to overflow.
			{carry, res} =  {1'b0, A} + {1'b0, B};
			 overf = 'd0;
		end
		3'b001 : // signed add
		begin
			res = $signed(A) + $signed(B);
			carry = 'd0;
			// if both inputs pos or neg, then if sign changes: overflow, else can't overflow. 
			if(($signed(A) >= 0) && ($signed(B) >= 0) && ($signed(res) < 0 ))
			begin
					overf = 1'b1; 
			end
			else if(($signed(A) < 0) && ($signed(B) < 0) && ($signed(res) >= 0 ))
			begin
					overf = 1'b1;
			end
			else 
			begin
				overf = 1'b0;
			end						
		end
		3'b010 : // unsigned subtract
		begin
			res = A - B;
			{carry, res} = {1'b0, A} - {1'b0,B};
			overf = 'b0;
		end
		3'b011 : // signed subtract
		begin
			res = $signed(A) - $signed(B);
			carry = 'b0;
			// pos minus neg should be pos
			if (($signed(A) >= 0) && ($signed(B) < 0) && ($signed(res) < 0)) 
			begin
				overf = 1'b1 ;
			end 
			// neg minus pos should be neg, else overflow
			else if (($signed(A) < 0) && ($signed(B) >= 0) && ($signed(res) >= 0)) 
			begin 
				overf = 1'b1 ;
			end 
			else 
			begin
				overf = 1'b0 ;
			end
		end
		3'b100 : // AND
		begin
			res = A & B; 
			overf = 'b0;
			carry = 'b0;			
		end
		3'b101 : // OR
		begin
			res = A | B; 
			overf = 'b0;
			carry = 'b0;			
		end
		3'b110 : // XOR
		begin
			res = A ^ B; 
			overf = 'b0;
			carry = 'b0;			
		end
		3'b111 : // A/2
		begin
			res = A >> 1; 
			overf = 'b0;
			carry = 'b0;			
		end
		endcase
	end
	
always @( posedge clk )
begin
	if( reset == 1'b1 )
	begin
		result <= 'd0 ;
		zero <= 'd0;
		overflow <= 'd0;
		carryout <= 'd0;
	end 
	else 
	begin
		result <= res ;
		overflow <= overf;
		carryout <= carry;
			
		if (res == {NUMBITS{1'b0}} ) 
		begin
			zero <= 1'b1;
		end
		else
		begin
			zero <= 1'b0;
		end
		//zero <= ( res == {NUMBITS{1'b0}}) ? 1'b1 : 1'b0 ;
	end
end
	
endmodule
