`timescale 1ns / 1ps

module lab06_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [7:0] we_decoded_row_address;
	reg [7:0] search_word;
	reg [7:0] dont_care_mask;

	// Outputs
	wire [7:0] decoded_match_address,decoded_match_address_tCam, decoded_match_address_stCam ;
///*
	// Instantiate the Unit Under Test (UUT)
	CAM_Wrapper #(8,8) uut (
		.clk(clk), 
		.rst(rst), 
		.we_decoded_row_address(we_decoded_row_address), 
		.search_word(search_word), 
		.dont_care_mask(dont_care_mask), 
		.decoded_match_address(decoded_match_address)
	);
	
		CAM_Wrapper_t #(8,8) TCAM_Cell(
		.clk(clk), 
		.rst(rst), 
		.we_decoded_row_address(we_decoded_row_address), 
		.search_word(search_word), 
		.dont_care_mask(dont_care_mask), 
		.decoded_match_address(decoded_match_address_tCam)
	);	
	
		CAM_Wrapper_st #(8,8) STCAM_Cell(
		.clk(clk), 
		.rst(rst), 
		.we_decoded_row_address(we_decoded_row_address), 
		.search_word(search_word), 
		.dont_care_mask(dont_care_mask), 
		.decoded_match_address(decoded_match_address_stCam)
	);


//*/
/*	
	wire row_match;
	CAM_Row #(8) uut(
    .clk(clk),
    .rst(rst),
    .we(we_decoded_row_address[1]),
    .search_word(search_word),
    .dont_care_mask(dont_care_mask),
	 .row_match(row_match)
    );
*/
/*
BCAM_Cell uut(
    .clk(clk),
    .rst(rst),
    .we(we_decoded_row_address[0]),
    .cell_search_bit(search_word[0]),
    .cell_dont_care_bit(clk),
    .cell_match_bit_in(1'b1),
    .cell_match_bit_out(decoded_match_address[0])
    );
*/
	// Clock block 

	initial begin 
	 clk = 0 ; 	
 
	 forever begin 
		#25 clk = ~clk;
	 end 
	 
	end
	
	initial begin
	    
// **************************************************
// We have to write values 
// **************************************************
    rst = 0 ; 
	 
    rst = #25 1 ; 
    rst = #25 0 ;	
		
    we_decoded_row_address = 8'h01  ; 
    search_word = 8'h01  ; 
    dont_care_mask = 8'h00  ; 
    #50 ;	
		
    we_decoded_row_address = 8'h02  ; 
    search_word = 8'h02  ; 
    dont_care_mask = 8'h00  ; 
    #50 ;	
		
    we_decoded_row_address = 8'h04  ; 
    search_word = 8'h04  ; 
    dont_care_mask = 8'h00  ; 
    #50 ;	


    we_decoded_row_address = 8'h08  ; 
    search_word = 8'h08  ;
    dont_care_mask = 8'h00  ; 
    #50 ;	

    we_decoded_row_address = 8'h10  ; 
    search_word = 8'h11  ; 
    dont_care_mask = 8'h01  ; 
    #50 ;	

    we_decoded_row_address = 8'h20  ; 
    search_word = 8'h21  ; 
    dont_care_mask = 8'h01  ; 
    #50 ;	

    we_decoded_row_address = 8'h40  ; 
    search_word = 8'h41  ; 
    dont_care_mask = 8'h01  ; 
    #50 ;	

    we_decoded_row_address = 8'h80  ; 
    search_word = 8'h82  ; 
    dont_care_mask = 8'h02  ; 
    #50 ;	
		
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// We have to search for values - Binary CAM 
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    dont_care_mask = 8'h00  ; 
    we_decoded_row_address  = 8'h00 ; 
    search_word  = 8'h01 ; 
    #50;
    search_word  = 8'h01 ; 
    #50
		
    search_word  = 8'h02 ; 
    #50;

    search_word  = 8'h04 ; 
    #50;

    search_word  = 8'h08 ; 
    #50;

    search_word  = 8'h11 ; 
    #50;

    search_word  = 8'h21 ; 
    #50;
		
    search_word  = 8'h41 ; 
    #50;

    search_word  = 8'h81 ; 
    #50;
		
    search_word  = 8'h33 ; 
    #50;
		
    search_word  = 8'h81 ; 
    #50;
		
    search_word  = 8'h40 ; 
    #50;
		
    search_word  = 8'h41 ; 
    #50;
		
    search_word  = 8'h82 ; 
    #50;
		
    search_word  = 8'h80 ; 
    #50;

/*
More Tests
*/

    we_decoded_row_address = 8'h01  ; 
    search_word = 8'h11  ; 
    dont_care_mask = 8'h00  ; 
    #50 ;	
		
    we_decoded_row_address = 8'h02  ; 
    search_word = 8'h11  ; 
    dont_care_mask = 8'h00  ; 
    #50 ;	
		
    we_decoded_row_address = 8'h04  ; 
    search_word = 8'h11  ; 
    dont_care_mask = 8'h00  ; 
    #50 ;	


    we_decoded_row_address = 8'h08  ; 
    search_word = 8'h11  ;
    dont_care_mask = 8'h00  ; 
    #50 ;	

    we_decoded_row_address = 8'h10  ; 
    search_word = 8'h11  ; 
    dont_care_mask = 8'h01  ; 
    #50 ;	

    we_decoded_row_address = 8'h20  ; 
    search_word = 8'h21  ; 
    dont_care_mask = 8'h01  ; 
    #50 ;	

    we_decoded_row_address = 8'h40  ; 
    search_word = 8'h41  ; 
    dont_care_mask = 8'h01  ; 
    #50 ;	

    we_decoded_row_address = 8'h80  ; 
    search_word = 8'h10  ; 
    dont_care_mask = 8'h02  ; 
    #50 ;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Test find multiple areas - 
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    dont_care_mask = 8'h00  ; 
    we_decoded_row_address  = 8'h00 ; 
	 search_word  = 8'h11 ; 
    #50;
	 dont_care_mask = 8'h01  ; 
	 search_word  = 8'h11 ; 
    #50;
	 search_word  = 8'h21 ; 
	 #50
	 search_word  = 8'h52 ; 
	end	
	
	
endmodule

