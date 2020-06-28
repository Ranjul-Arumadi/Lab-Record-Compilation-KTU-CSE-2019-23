#include<stdio.h>
int fact1(int n)
{
    int fact=1,i;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
            
        }
        return(fact);
}
int fact2(int m)
{
    if(m>1)
    {
     return m*fact2(m-1);   
    }
    else
    {
        return 1;
    }
}

void main()
{
    int n,a,i;
    printf("Enter 1 or 2");
    printf("\n 1: Factorial using non recursive function");
    printf("\n 2: Factorial using recursive function\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nEnter the number- ");
        scanf("%d",&a);
        
        printf("\nFactorial- %d",fact1(a));
        break;
        
        case 2:
        printf("\nEnter the number- ");
        scanf("%d",&a);
        printf("\nFactorial- %d",fact2(a));
        break;
        
        default:
        printf("ERROR!!");
    }
}


