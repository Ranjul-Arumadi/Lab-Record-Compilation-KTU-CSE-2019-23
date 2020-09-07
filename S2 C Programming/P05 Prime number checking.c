//program to check if a number is prime or composite
#include<stdio.h>
#include<stdlib.h>
void main()
{ 
  int a,flag=0;
  printf("Enter a number \n");
  scanf("%d",&a);
  if(a==1)
    { 
      printf("The number is neither prime nor composite \n\n");
      exit(0);
    }
  for(int i=2;i<=a/2;i++)
     { 
        if(a%i==0)
           { 
 		flag=1; 
	   }
     }
  if(flag==0)
    { 
      printf("The number is prime \n\n");
    }
  else
    printf("The number is not prime \n\n");
     	
      
	
 }
