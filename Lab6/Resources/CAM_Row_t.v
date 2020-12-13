`timescale 1ns / 1ps

module CAM_Row_t(
    clk,
    rst,
    we,
    search_word,
    dont_care_mask,
	 row_match
    );

    parameter CAM_WIDTH = 8; 
  
    input wire clk, rst, we;
    input wire [CAM_WIDTH-1:0] search_word, dont_care_mask;
    output wire row_match;
	
	wire [CAM_WIDTH:0] connect; // there should be no -1 here. 

// Insert your solution below here.	
	assign connect[0] = 1'b1;
  	assign row_match = connect[CAM_WIDTH];	

	generate
	genvar i;
	for (i=0; i<CAM_WIDTH; i=(i+1)) begin : gencamrow
			TCAM_Cell tcam(
			.clk(clk),
			.rst(rst),
			.we(we),
			.cell_search_bit(search_word[i]),
			.cell_dont_care_bit(dont_care_mask[i]),
			.cell_match_bit_in(connect[i]),
			.cell_match_bit_out(connect[(i+1)])
			);
	end
	endgenerate
	

endmodule
