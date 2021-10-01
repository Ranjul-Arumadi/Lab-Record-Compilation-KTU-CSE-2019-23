#!/bin/bash
<<comment
until loop syntax:
-------------------
until [ condition ]
do
	statements
done
	
eg-
until is opposite to other loops like for, while, do while etc where statements are executed if condition is true.But in the case of until loop, statements are executed untill the condition is FALSE. The loop stops when the condition becomes true.

a=5
until [ $a -gt 9 ]
do
	echo "$a"
	a='expr $a + 1'
done

OUTPUT: 5 6 7 8 9 
(9 is printed becomes only after updation condition is checked i.e after updation we check if value>9)

comment

n=1
until [ $n -gt 10 ]
do
        echo $n
        n=`expr $n + 1`
done
