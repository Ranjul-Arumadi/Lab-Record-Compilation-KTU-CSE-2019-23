#!/bin/bash
<<comment
while loop syntax:
-----------------

while [ condition ]
do
	statements/expressions
done

Notes:
------
1. expr evaluates expression
2. Enclose all statements/expressions in ` back ticks `
3. done is important at the end of while loop
**4. While assigning values to variables DO NOT GIVE SAPCES

	eg: DO a=5
		NOT a = 5		
comment
#To calculate the sum and number of digits of a number read from user using while loop.

echo "Enter a number: "
read number

sum=0
mod=0
numberOfDigits=0

while [ $number -gt 0 ]
do
        mod=`expr $number % 10`
        sum=`expr $sum + $mod`
        numberOfDigits=`expr $numberOfDigits + 1`
        number=`expr $number / 10`
done

echo "Sum : $sum"
echo "Number of digits : $numberOfDigits"
