`timescale 1ns / 1ps

module TCAM_Cell(
    input wire clk,
    input wire rst,
    input wire we,
    input wire cell_search_bit,
    input wire cell_dont_care_bit,
    input wire cell_match_bit_in,
    output reg cell_match_bit_out
    );

	 reg stored_bit = 0;
	 
// Insert your solution below here. 
		always @(clk) begin
		if(we) begin
			stored_bit <= cell_search_bit;
		end
		if(rst == 1)begin stored_bit <= 0; end
	end

	always @(*) begin
		cell_match_bit_out = cell_match_bit_in & ((stored_bit ^~ cell_search_bit) | cell_dont_care_bit);
	end
endmodule
