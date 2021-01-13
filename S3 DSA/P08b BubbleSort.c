#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 50
int arr[MAX_SIZE],n;
void Display();
void InsertSort();
int main()
{
   printf("\nEnter the size of array(less than 50): ");
   scanf("%d",&n);
   printf("\nEnter The Elements Of The Array:\n");
   for(int i=0;i<n;++i){
	scanf("%d",&arr[i]);   
   }
   printf("\nEntered array is:\n");
   Display();
   InsertSort();
   printf("\nArray after insertion sort is:\n");
   Display();
   return 0;
}

void InsertSort()
{ 
    int temp;
    for(int i=1;i<n;++i){
		for(int j=i;j>0;--j){
			if(arr[j-1]>arr[j]){ 
				temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp; 
			}
		}
             
    }
}

void Display()
{ 
	for(int i=0;i<n;++i){
	printf("%d\t",arr[i]);   
   }
   printf("\n");
}
