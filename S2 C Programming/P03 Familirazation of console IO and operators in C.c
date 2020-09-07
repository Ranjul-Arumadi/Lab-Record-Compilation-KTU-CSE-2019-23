//1. Program to display "Hello World"

#include<stdio.h>
void main()
{	printf(" \n Hello World \n\n ");
}



//2.Program to read two numbers,add them and display their sum

#include<stdio.h>
void main()
{	
	int a,b,sum;
 	printf("\n Enter two numbers: \t ");
 	scanf("%d",&a);
	scanf("%d",&b);
 	sum=a+b;
 	printf("The sum of %d and %d is: \t %d \n\n",a,b,sum);

 } 


//3. Program to read radius ,calculate area of circle and display it
#include<stdio.h>
void main()
{	
	int rad;
 	float pi=3.14,area;
 	printf("Enter the radius of circle: \t");
 	scanf("%d",&rad);
 	area=pi*rad*rad;
 	printf("Area of the circle is:  %f \n",area);
}



//4. Evaluate an arithmetic expression via values inputted by user
#include<stdio.h>
void main()
{	
	int a,b,c,d,e,f,g;
 	int output;
 	printf("Enter 7 values");
 	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	output=((a-b/c*d+e)*(f+g));
 	printf("The output of expression  is %d 5d\t",output);
}

