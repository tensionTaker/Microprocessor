`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:49 05/23/2022 
// Design Name: 
// Module Name:    alu_1 
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
module alu_code( input [3:0] a,
input [3:0] b,
input [3:0] f,
input clk,
output reg [6:0] du,
output reg d0,
output reg d1,
output [3:0] bank
    );
reg [4:0] t;
reg [3:0] r;
assign bank=4'b0001;
wire [3:0] da;
wire [3:0] db;
memory  m1(
  .clka(clk), // input clka
  .addra(a), // input [3 : 0] addra
  .douta(da) // output [3 : 0] douta
);
memory m2(
  .clka(clk), // input clka
  .addra(b), // input [3 : 0] addra
  .douta(db) // output [3 : 0] douta
);
always @(f,da,db)
begin
case(f)

4'b0000:
begin
r=da;
d0=1;
d1=0;
end

4'b0001:
begin
r=~da+1;
d0=0;
if (da==8) d1=1;
else d1=0;
end

4'b0010:
begin
r=da+db;
if ((da+db)>15) d1=1;
else d1=0;
d0=0;
end

4'b0011:
begin
t=da-db;
r=t;
if (t[4]==1) d1=1;
else d1=0;
d0=0;
end

4'b0100:
begin
r=2*da;
if (2*da>15) d1=1;
else d1=0;
d0=0;
end

4'b0101:
begin
r=da/2;
d1=0;
d0=0;
end

4'b0110:
begin
r=da+1;
if (da>14) d1=1;
else d1=0;
d0=0;
end

4'b0111:
begin
r=da+4'b1111;
d1=0;
d0=0;
end

4'b1000:
begin
r=~da;
d1=0;
d0=0;
end

4'b1001:
begin
r=da*db;
d0=0;
d1=0;
end

4'b1010:
begin
r=da+db;
d1=0;
d0=0;
end

4'b1011:
begin
r=da^db;
d1=0;
d0=0;
end

4'b1100:
begin
r=da<<1;
d1=0;
d0=0;
end

4'b1101:
begin
r=da>>1;
d1=0;
d0=0;
end

4'b1110:
begin
r=da;
d1=0;
d0=0;
end

4'b1111:
begin
r=4'b1111;
d0=0;
d1=0;
end
endcase
begin
case(r)
0:du=7'b0000001;
1:du=7'b1001111;
2:du=7'b0010010;
3:du=7'b0000110;
4:du=7'b1001100;
5:du=7'b0100100;
6:du=7'b0100000;
7:du=7'b0001101;
8:du=7'b0000000;
9:du=7'b0000100;
10:du=7'b0001000;
11:du=7'b1100000;
12:du=7'b0110001;
13:du=7'b1000010;
14:du=7'b0110000;
15:du=7'b0111000;
endcase
end
end
endmodule
