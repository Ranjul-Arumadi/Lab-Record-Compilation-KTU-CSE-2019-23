module fulladdstr(sum,carry,a,b,cin);
output sum,carry;
input a,b,cin;
wire s1,c1,c2;
xor(s1,a,b);
and(c1,a,b);
xor(sum,s1,cin);
and(c2,s1,cin);
or(carry,c2,c1);
endmodule
