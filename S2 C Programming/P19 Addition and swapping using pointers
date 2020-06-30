#include<stdio.h>
void add(int *p,int *q)
{
    int sum;
    sum = *p + *q;
    printf("\nSum Of The Numbers = %d\n", sum);
}

void swap(int *p,int *q)
{
    int temp;
    printf("\nBefore Swapping: %d\t%d\n", *p, *q);
    temp = *q;
    *q = *p;
    *p = temp;
    printf("\nAfter Swapping: %d\t%d\n", *p, *q);
    
}
void main()
{
    int a,b,c;
    printf("Enter two Numbers- ");
    scanf("%d %d",&a,&b);
    printf("\nEnter Your Choice:\n 1: Find Sum \t 2: Swap Numbers \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
               add(&a,&b);
               break;
        
        case 2:
               swap(&a,&b);
               break;
        
        default:
                printf("\nError\n");
    }
}
