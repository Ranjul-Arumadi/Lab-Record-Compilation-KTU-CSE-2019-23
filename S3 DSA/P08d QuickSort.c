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
#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int data[], int n){
    printf("\n\n\n");
    for(int i=0;i<n;i++){
        printf("%d \t",data[i]);
    }
}

int partition(int data[] ,int l,int h, int n){
    
    int pivot = data[l];
    int i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(data[i]<=pivot);
    
        do{
            j--;
        }while(data[j]>pivot);
    
        if(i<j){
			printf("\ni<j");
            swap(&data[i], &data[j]);
			//printArray(data,n);
        }    
    }
    swap(&data[l], &data[j]);
	//printArray(data, n);
    
	return j;
}

void quicksort(int data[], int l, int h, int n){
    int j;
    if(l<h){
        j = partition(data,l,h,n);
        quicksort(data,l,j,n);
        quicksort(data,j+1,h,n);
    }
}

int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  quicksort(data,0,n,n);
  
  printf("\nFinal");
  printArray(data, n);
  
  return 0;
}
