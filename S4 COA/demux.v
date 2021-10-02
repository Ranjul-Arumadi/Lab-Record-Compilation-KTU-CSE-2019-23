module demux(S1,S0,I,Y0,Y1,Y2,Y3);
input I,S1,S0;
output Y0,Y1,Y2,Y3;
assign Y0=(~S1 & ~S0 & I);
assign Y1=(~S1 & S0 & I);
assign Y2=(S1 & ~S0 & I);
assign Y3=(S1 & S0 & I);
endmodule
