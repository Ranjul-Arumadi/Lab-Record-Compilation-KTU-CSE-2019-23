module mux2to1str(io,i1,s,out);
input io,i1,s;
output out;
wire n1,n2,n3;
not g1(n3,s);
and g2(n1,i0,n3);
and g3(n2,i1,s);
or g4(out,n1,n2);
endmodule
