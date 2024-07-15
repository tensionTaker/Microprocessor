`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:07:05 06/15/2022
// Design Name:   alu_code
// Module Name:   C:/Users/hp/Desktop/harsh12140750/first_q6/test.v
// Project Name:  first_q6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg [3:0] f;
	reg clk;

	// Outputs
	wire [6:0] du;
	wire d0;
	wire d1;
	wire [3:0] bank;

	// Instantiate the Unit Under Test (UUT)
	alu_code uut (
		.a(a), 
		.b(b), 
		.f(f), 
		.clk(clk), 
		.du(du), 
		.d0(d0), 
		.d1(d1), 
		.bank(bank)
	);
	initial begin
	clk=0;
	forever #10 clk=~clk;
	end

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		f = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a=1;
		b=1;
		f=0;
        
		#100;
		a=2;
		b=1;
		f=1;
		// Add stimulus here
		#100;
		a=15;
		b=0;
		f=5;
	end
      
endmodule

