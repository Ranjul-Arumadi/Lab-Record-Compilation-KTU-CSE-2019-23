module mux4to1(y,i0,i1,i2,i3,s1,s0);
output y;
input i0,i1,i2,i3;
input s1,s0;
assign y=(~s1 & ~s0 & i0)|(~s1 & s0 & i1)|(s1 & ~s0 & i2)|(s1 & s0 & i3);
endmodule
