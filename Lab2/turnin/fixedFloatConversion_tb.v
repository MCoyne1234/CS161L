`timescale 1ns / 1ps

module fixedFloatConversion_tb;

	// Inputs
	reg clk ; 
	reg rst ; 
	reg [31:0] targetnumber;
	reg [4:0] fixpointpos;
	reg  opcode ; 
	
	wire [31:0] resultnumber;
	reg [31:0] R ;
	
	// ---------------------------------------------------
	// Instantiate the Unit Under Test (UUT)
	// --------------------------------------------------- 
	
	fixedFloatConversion uut (
	   .clk( clk ) , 
      		.rst(rst) , 		
		.targetnumber(targetnumber), 
		.fixpointpos(fixpointpos),
		.opcode(opcode) , 
		.result(resultnumber)
	);

  	initial begin 
	
		clk = 0 ; rst = 1 ; #50 ; 
		clk = 1 ; rst = 1 ; #50 ; 
		clk = 0 ; rst = 0 ; #50 ; 
		clk = 1 ; rst = 0 ; #50 ; 
		  
		forever begin 
			clk = ~clk; 
			#50 ; 
		end  
	end 
	
	initial begin
	
#100 ; 			
		// In: 0 0 
		// Out: 0x00000
		
		opcode = 1'b0; 
		fixpointpos = 5'b00000;
		targetnumber = { 32'h0000_0000  } ; 
		R = 32'h0000_0000;
#100;
$display (" TC 00 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 0 ....... %h %h ", R,  resultnumber ); 
	
	
		// In: 1056 7 
		// Out: 0x41040000
		
		opcode = 1'b0; 
		fixpointpos = 5'b00111;
		targetnumber = { 32'h00000420  } ; 
		R = 32'h41040000;
#100;
$display (" TC 01 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 1 ....... %h %h ", R,  resultnumber ); 
		
		// In: -1056 7 
		// Out: 0xC1040000 (-8.25)
		
		opcode = 1'b0; 
		fixpointpos = 5'b00111;
		targetnumber = { 32'hFFFF_FBE0   } ; 
		R = 32'hc1040000; 
#100; 
$display (" TC 02 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 2 ....... %h %h ", R,  resultnumber ); 
		

		// In: 25 8 
		// Out: 0x3DC8_0000 (0.0.09765625) 
		// 0.1 is 0x3DCCCCCD, but can't be exactly represented.
		
		opcode = 1'b0; 
		fixpointpos = 5'b01000;
		targetnumber = 32'd25;
		R = { 32'h3DC8_0000 } ;

#100;
$display (" TC 03 ....... %h %h ", R,  resultnumber ); 
	   if ( R != resultnumber ) $display ("Failed TC 3 ....... %h %h ", R,  resultnumber ); 

		// In: 0xFFFFFFFE 8 
		// Out: 0xBE80_0000 (-0.25) 

		opcode = 1'b0; 
		fixpointpos = 4'b0011;
		targetnumber = 32'hFFFF_FFFE; 
		R = { 32'hBE80_0000 } ;  

#100;
$display (" TC 04 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 4 ....... %h %h ", R,  resultnumber ); 
		
		// In:  0x7FFFFFFF 15  (2,147,483,647)
		// Out: 0x477FFFFF  ( 65535.99609375 ) 
		
		opcode = 1'b0; 
		fixpointpos = 5'b01111;
		targetnumber = 32'h7FFF_FFFE; 
		R = { 32'h477FFFFF  } ; 
#100;
$display (" TC 05 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 5 ....... %h %h ", R,  resultnumber ); 

		
		// In:  0x7F7FFFFF 16 (2139095039)
		// Out: 0x46FEFFFF (32639.998)
		opcode = 1'b0; 
		fixpointpos = 5'b10000;
		targetnumber = 32'h7F7FFFFF;
		R = { 32'h46FEFFFF  } ;  
#100; 
$display (" TC 06 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 6 ....... %h %h ", R,  resultnumber ); 
		

		// In: 0x1FFFFFF 0 (33554431)
		// Out: 0x4C000000 (33554430.) representation limits of 754
		
		opcode = 1'b0; 
		fixpointpos = 4'b0000;
		targetnumber = { 32'h01FF_FFFF  } ; 
		R = 32'h4BFFFFFF;

#100;
$display (" TC 07 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 7 ....... %h %h ", R,  resultnumber ); 

		// In: 8.25 7
		// Out: 1056 
		opcode = 1'b1; 
		fixpointpos = 5'b00111;
		targetnumber = 32'h41040000;
		R = { 32'h00000420 } ;  
#100;
$display (" TC 08 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 8 ....... %h %h ", R,  resultnumber ); 

		// In:  -8.25 7
		// Out: -1056 
		opcode = 1'b1; 
		fixpointpos = 5'b00111;
		targetnumber = 32'hC1040000;
		R = { -32'd1056 } ;  
#100;
$display (" TC 09 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 9 ....... %h %h ", R,  resultnumber ); 
	
		// In:  0.1 8 (0x3DCCCCCD)
		// Out: 0x0000_0CCC 
		opcode = 1'b1; 
		fixpointpos = 5'b01111;
		targetnumber = 32'h3DCCCCCD;
		R = { 32'h00000CCC } ;  
#100;
$display (" TC 10 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 10 ....... %h %h ", R,  resultnumber ); 
				
		// In:  -0.1 8 0xBDCCCCCD
		// Out: 0x0000_0CCC 
		opcode = 1'b1;  
		targetnumber = 32'b0_10001001_00001000000000000000000 ; 
		fixpointpos = 5'b0100;
		R = { {16'h0000}, {16'b0100_0010_0000_0000}} ; 
	
#100;
$display (" TC 11 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 11 ....... %h %h ", R,  resultnumber ); 		
		
		// In:  0.25 2
		// Out: 0x00000001
		opcode = 1'b1; 
		fixpointpos = 5'b00010;
		targetnumber = 32'h3e800000;
		R = { 32'd1 } ;  
#100;
$display (" TC 12 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 12 ....... %h %h ", R,  resultnumber ); 
		
		// In:  7.504355E-10 31 (0x304E4734)
		// Out: 0x00000001
		opcode = 1'b1; 
		fixpointpos = 5'b11111;
		targetnumber = 32'h304E4734;
		R = { 32'd1 } ;  
#100;
$display (" TC 13 ....... %h %h ", R,  resultnumber ); 
		if ( R != resultnumber ) $display ("Failed TC 13 ....... %h %h ", R,  resultnumber ); 	
	end
      
endmodule

