#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 50
int arr[MAX_SIZE],n;
void SelectSort();
void Display();

int main()
{
   int i;
   printf("\nEnter the size of array (Less Than 50) : ");
   scanf("%d",&n);
   printf("\nEnter the array elements :\n");
   for(i=0;i<n;++i)
   {
	scanf("%d",&arr[i]);   
   }
   printf("\nEntered Array Is:\n");
   Display();
   SelectSort();
   printf("\nArray after selection sorting is :\n");
   Display();
   return 0;
}

void SelectSort()
{ 
    int temp,minimum;
    for(int i=0;i<n-1;++i)
	{
		minimum=i;
        for(int j=i+1;j<n;++j)
		{
			if(arr[j]<arr[minimum])
			{
				minimum=j;
				temp=arr[i];
				arr[i]=arr[minimum];
				arr[minimum]=temp;
			}
         
		}
        
	}
     
}

void Display()
{ 
   for(int i=0;i<n;++i)
   {
	printf("%d\t",arr[i]);   
   }
   printf("\n");
}