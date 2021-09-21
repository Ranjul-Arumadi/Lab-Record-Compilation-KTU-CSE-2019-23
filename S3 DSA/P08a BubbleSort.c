/*
Time complexity: Best- O(n) | Worst, Average- O(n^2)

Bubble sort is one of the simplest sorting algorithms.

The crucial component in a  bubble sort is using a nested for loop where the outer for loop runs untill 
size-1 and inner for loop run untill size-i-1. In bubble sort the adjacent elements are compared and 
based on < or > condition they are swapped. This is what happens in the inner loop. The outer loop lets
the inner for loop run for size-1 times. 
*/
#include <stdio.h>
void bubbleSort(int arr[],int size);
void display(int arr[],int size);

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array values : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,size);
    return 0;
}

void bubbleSort(int arr[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    display(arr,size);
}

void display(int arr[],int size)
{
    printf("Sorted array is : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d \t ",arr[i]);
    }
}
