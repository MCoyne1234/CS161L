`timescale 1ns / 1ps
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
module fixedFloatConversion(
  input wire clk, 
  input wire rst , 
  input wire[31:0] targetnumber, 
  input wire[4:0] fixpointpos , 
  input wire opcode , // 1 is float to fix, 0 is fix to float
  output reg[31:0] result );

reg [31:0] floatresult ; 
reg [31:0] fixresult ; 

reg [31:0] target;
reg [4:0] fixpp;


reg [0:0] sign;
reg [7:0] exponent;
reg [22:0] mantissa;
reg [31:0] temp;

//integer exponent_val;
integer i;
integer lead = 0;
integer exponent_val;

always @ (*)
begin 
	target = targetnumber;
	fixpp = fixpointpos;
	floatresult = 32'h0000_0000;
	fixresult = 32'h0000_0000;

	case(opcode)
// -------------------------------------------
// From fix to float (Part 1)
// -------------------------------------------
		1'b0 : 
		begin
			if(target[31] == 1)
			begin
				sign = 1'b1;
				target = -target; 
			end
			else sign = 1'b0;
			
			// Find leading 1 bit position in target number.
			for(i = 0; i < 31 ; i = i + 1 )
			begin
				if(target[i] == 1) lead = i; 
			end
			
			if(lead != 0)	exponent = (lead - fixpp) + 127; // biased exponent
			else exponent = 0;
			
			target = ( target << (31 - lead) );
			mantissa = target[31:8];
			
			floatresult = { sign, exponent, mantissa };
			
		end
// -------------------------------------------    
// From float to fix (Part 2)
// -------------------------------------------
		1'b1 : 
		begin
			sign = target[31];
			exponent_val = target[30:23] - 127;
			mantissa = target[22:0];
			exponent = target[30:23];
			
			lead = 23 - (exponent_val + fixpp);
			
			if(exponent != 0) temp = {1'b1, mantissa};
			else temp = {1'b0, mantissa}; // deal with subnormal numbers
			//temp = {1'b1, mantissa};
						
			if(lead > 0)
			begin
				temp = temp >> lead;
			end
			else if(lead < 0)
			begin
				temp = temp << -lead;
			end
			
			if(sign == 1'b1) temp = -temp;
			
			fixresult = temp; 
		end	
	endcase
end
 
// --1-----------------------------------------    
// Register the results 
// -------------------------------------------
always @ ( posedge clk ) begin 
    // Synchronous reset
    result <= opcode == 1 ?  fixresult : floatresult ;
	 //result = result_out;
end 
endmodule
