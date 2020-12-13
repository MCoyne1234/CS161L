`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:23 06/03/2019 
// Design Name: 
// Module Name:    SPFPAdder 
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
module SPFPAdder (      
		input clk,
        input rst,
        input enable,
        output reg valid,
        input[31:0]  A,
        input[31:0]  B,
        output reg[31:0] result,
		  output wire[32:0] NumA1,
		  output wire[32:0] NumB1	  
    );  
	 //parameter FP_SIZE = 32;  
	  
	 reg[32:0] NumA, NumB, yourresult;
	 reg[23:0] C, C2;
	 reg[7:0] exp1, exp2, exp3;
	 reg sign, man23, carryout;
	 reg[4:0] shifts; 
	 reg signed [5:0]pos;
	 reg flag = 0;
	 integer i;
     // Implement your code here 
	  
	 // assign exo = exp3;
	 // assign C3 = C2;
	 // assign pos_o = pos;
	  assign NumA1 = NumA;
	  assign NumB1 = NumB;
	  
	 always @(enable) begin
		flag = 1'b0;
		C2 = 'd0;
		shifts = 'd0;
		pos = {-6'sd1};
		man23 = 1'b1;
		
		if( ({A[30:23]} == 'd0) && ({B[30:23]} == 'd0) ) begin
			man23 = 1'b0;
		end
		else begin man23 = 1'b1; end
		
		if( {A[30:23]} < {B[30:23]})begin
			NumA = {B[31:23], man23, B[22:0]};
			NumB = {A[31:23], man23, A[22:0]};
			exp1 = B[30:23];
			exp2 = A[30:23];
		end
		else begin
			NumA = {A[31:23], man23, A[22:0]};
			NumB = {B[31:23], man23, B[22:0]};
			exp1 = A[30:23];
			exp2 = B[30:23];		
		end
		
		exp3 = exp1 - exp2;
		
		NumB[23:0] = (NumB[23:0] >> exp3);
		
		if( ( {A[31]} ^ {B[31]}) == 1) begin 
			NumB[23:0] = {~(NumB[23:0]) + 1'b1}; 
		end
		
		{carryout, C[23:0]} =  NumA[23:0] + NumB[23:0];
		
		if( ( {A[31] ^ B[31]} == 1) && ({C[23]} == 1)&&(carryout == 0) )begin
			C[23:0] =  ~C[23:0] + 1'b1;
		end
		
		if( ((A[31] ^ B[31] == 0)) && (carryout == 1) ) begin
			C[23:0] = C >> 1;
			C[23] = 1'b1;
		end
		else begin
		
			for (i = 0; i < 24; i = i + 1) begin
				shifts = shifts + 1'b1;
				if( C[i] == 1'b1)begin  
					pos = 'd24 - shifts; 
				end
			end
			
		   if(pos == -6'sd1) begin 
						yourresult = 'd0;
						flag = 1'b1;
						C2 = C;
			end
			else begin 
				C2 = C << pos;
				exp3 = NumA[31:24] + pos[4:0];		
			end
		end

		sign = NumA[32];
		
		if(flag == 0) 
			if(man23 == 'b1) yourresult = {sign, exp3, C2[22:0]}; 
			else yourresult = {sign, 8'd0, C[22:0]};
		
	 end

    // Sequential Part 
    always @(posedge clk) begin

        if (rst) begin
            result <= 0;
            valid  <= 0;
        end
        else begin
            result <= yourresult ; 
            valid <= enable;
        end
    end
endmodule
