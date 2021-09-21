/*
Time complexity:
Best Time Complexity : O(nlogn)
Average Time Complexity : O(nlogn)
Worst Time Complexity : O(n^2) [Worst will happen when the array is sorted]

It follows a divide and conquer approach. Quicksort uses recursion. 

It has 3 components - quicksort, partition, and swap.

Basic working- It involves braking down the arrays into sub-arrays untill all
the sub array contain only 1 element.

How to create sub arrays? : This is down by choosing a pivot element fomr the
array. The resultant sub arrray will the values in such a way that the 
values less than the pivot will be to the left side of the sub array anf the
values greater then the pivot will be to the right side of the pivot element.

This partitioning process will take place untill all the sub arrays will have
only one element.

Finally all thes sub-arrays are merged to form the final sorted array. 
*/
#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 50
int arr[MAX_SIZE],n;
void QuickSort(int a,int b);
void Display();
int Partition(int ,int);
int main()
{

   printf("\nEnter the size of array (less than 50)  : ");
   scanf("%d",&n);
   printf("\nEnter the array values:\n");
   for(int i=0;i<n;++i)
   {
	scanf("%d",&arr[i]);   
   }
   printf("\nArray is:\n");
   Display();
   QuickSort(0,n-1);
   printf("\nArrray after quick sort :\n");
   Display();

   return 0;
}
void QuickSort(int lower, int upper) 
{ 
    if (lower < upper) 
    { 
        int q = Partition(lower, upper); 
        QuickSort(lower, q - 1); 
        QuickSort(q + 1, upper); 
    } 
}
int Partition(int lower,int upper) 
{ 
    int pivot = arr[upper];
    int i = (lower - 1);
    int temp;
	for (int j = lower; j <= upper- 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        } 
    } 
    temp=arr[i+1];
    arr[i+1]=arr[upper];
    arr[upper]=temp;
    return (i + 1); 
} 



void Display()
{ 
  
   for(int i=0;i<n;++i)
   {
	printf("%d\t",arr[i]);   
   }
   printf("\n");
}
