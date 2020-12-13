Matthew Coyne
862055775
mcoyn001@ucr.edu

Lab02

included: 
	fixedFloatConversion.v
	fixedFloatConversion_tb.v

The float-to-fixed converter seems to break with subnormal numbers, 
but I think it's just because there are so many 32 bit floats that can't be 
represented with an integer. 