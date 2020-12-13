`timescale 1ns / 1ps

module CAM_Array_t(
    clk,
    rst,
    we_decoded_row_address,
    search_word,
    dont_care_mask,
    decoded_match_address
    );

   parameter CAM_WIDTH = 8;
   parameter CAM_DEPTH = 8;

   input wire clk, rst;
   input wire [CAM_DEPTH-1:0] we_decoded_row_address;
   input wire [CAM_WIDTH-1:0] search_word, dont_care_mask;
   output wire [CAM_DEPTH-1:0] decoded_match_address;

// Insert your solution below here. 
	generate
	genvar i;
	for (i=0; i<CAM_DEPTH; i=i+1) begin : gencamarr
			CAM_Row_t camrow1(
			.clk(clk),
			.rst(rst),
			.we(we_decoded_row_address[i]),
			.search_word(search_word),
			.dont_care_mask(dont_care_mask),
			.row_match(decoded_match_address[i])
			);
	end
	endgenerate
endmodule
