#include<stdio.h>
struct emplo
    {
        char name[30];
        int id;
        float salary;
    
    }a[20];
void main()
    {
    
        int n,i;
        printf("Enter the number of employees ");
         scanf("%d",&n);
        for(i=0;i<n;i++)
            {   
                printf("\nEnter the employee name ");
                scanf("%s",a[i].name);
                 printf("\nEnter the employee id ");
                scanf("%d",&a[i].id);
                 printf("\nEnter the employee salary ");
                scanf("%f",&a[i].salary);
            }
        printf("\nEmployee DETAILS ");
        for(i=0;i<n;i++)
            {
                printf("\nEmployee name - %s",a[i].name);
                printf("\nEmployee id - %d",a[i].id);
                printf("\nEmployee salary - %f",a[i].salary);
                printf("\n");
            }
}
