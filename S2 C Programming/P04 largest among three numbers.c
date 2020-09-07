//Program to find the largest of 3 numbers inputted.
#include<stdio.h>
void main()
{	
  int num1,num2,num3;
  printf("Enter 3 numbers : \n\n\n");
  scanf("%d %d %d",&num1,&num2,&num3);
  if(num1>num2)
    { 
       if(num1>num3)
	{ 
	  printf("%d is the largest \n",num1);
	}
    }
  if(num2>num3)
	{
	  printf("%d is the largest \n",num2);
	}
  else
     printf("%d is the largest  \n",num3);
	
	
}

