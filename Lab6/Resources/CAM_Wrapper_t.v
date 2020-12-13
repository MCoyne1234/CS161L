`timescale 1ns / 1ps

module CAM_Wrapper_t (
      clk , 
      rst , 
      we_decoded_row_address , 
      search_word , 
      dont_care_mask , 
      decoded_match_address 	
    );

	  parameter CAM_DEPTH = 8 ;
	  parameter CAM_WIDTH = 8 ;

	  input wire clk, rst;
      input wire [CAM_DEPTH-1 : 0]  we_decoded_row_address ; 
      input wire [CAM_WIDTH-1 : 0]  search_word, dont_care_mask ; 
      output wire [CAM_WIDTH-1 : 0] decoded_match_address ;

reg rst_buffered ; 
reg[CAM_DEPTH-1 : 0] we_decoded_row_address_buffered ;

reg[CAM_WIDTH-1 : 0] search_word_buffered ;
reg[CAM_WIDTH-1 : 0] dont_care_mask_buffered ; 

//wire[CAM_DEPTH-1 : 0] decoded_match_address_sig ;  
reg [CAM_DEPTH-1 : 0] decoded_match_address_buffered ;  

// Insert your solution below here
	CAM_Array_t cam_arr(
    .clk(clk),
    .rst(rst),
    .we_decoded_row_address(we_decoded_row_address),
    .search_word(search_word),
    .dont_care_mask(dont_care_mask),
    .decoded_match_address(decoded_match_address)
    );
/*
always @(clk)begin
	we_decoded_row_address_buffered <= we_decoded_row_address;
	dont_care_mask_buffered <= dont_care_mask;
	decoded_match_address_buffered <= decoded_match_address; 
end
*/
endmodule
