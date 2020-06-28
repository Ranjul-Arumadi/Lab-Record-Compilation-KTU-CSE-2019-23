//Experiment 20 - Implement a menu driven program to do the following using pointers
//i.  Print the elements of an array
//ii.  Sum of the elements stored in an array
#include<stdio.h>
void main()
{
    int n,s,i,a[20],sum=0;
    printf("Enter your choice-");
    printf("\n1 - Display the elements of the array");
    printf("\n2 - Find the sum of elements in the array.\n");
    scanf("%d",&n);
    if(n==1||n==2)
    {
    printf("\nEnter the array size- ");
    scanf("%d",&s);
    printf("\nEnter the array values- ");
    for(i=0;i<s;i++)
    {
        scanf("%d",a+i);
    }
    }
    switch(n)
    {
        case 1:
        printf("\nArray values are- ");
        for(i=0;i<s;i++)
       {
        printf("%d ",*(a+i));
       }
       break;
       case 2:
       for(i=0;i<s;i++)
       {
           sum=sum+*(a+i);
       }
       printf("\nSum of array values are- %d",sum);
       break;
       default:
       printf("ERROR");
    }
    
}


