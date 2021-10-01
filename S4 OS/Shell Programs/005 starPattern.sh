#!/bin/bash
<<comment
for loop syntax:
-------------------
for((i=0;i<5;i++))
do
	statements
done

The for loop in shell is a modified version of the for loops used in C programming or so. We just have to include an extra parenthesis inside the regular set of parenthesis.

Notes:
1. echo in BASH gives a new line by defualt, to prevent that we have to do echo -n "something"
	this -n prevents printing on a new line
	
	SIMILIAR TO pythons-> print('hi', end=" ") over regular print('hi')
comment
#trangle star pattern

for((i=0;i<=5;i++))
do
        for((j=1;j<=i;j++))
        do
                echo -n "*"
        done
        echo " "
done
