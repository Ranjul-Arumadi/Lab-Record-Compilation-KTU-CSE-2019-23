<<comment
if syntax
---------

if [ give spaces , use -lt(less than), -gt(greater then), -a(and) etc]
then
		statement
elif [ condition with spaces ]
then 
	statement
else
	statement
fi

Notes:
------
1. always end with fi
2. Note than else is NOT followed by then.
3. Variables can be printed inside " lke $var1 " etc
comment
echo "Enter first number: "
read num1
echo "Enter second number: "
read num2
echo "Enter third number: "
read num3
if [ $num1 -gt $num2 -a $num1 -gt $num3 ]
then 
	echo "$num1 is the largest"
elif [ $num2 -gt $num1 -a $num2 -gt $num3 ]
then
	echo "$num2 is the largest" 
else 
	echo "$num3 is the largest"
fi
