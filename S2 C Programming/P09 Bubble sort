//Program to perform bubble sort
#include<stdio.h>
void main()
{
	int n,temp=0,i,j;
	int arr[20];
	printf("Enter the size of array : \t");
	scanf("%d",&n);
	//int arr[n];
	printf("Enter the array values: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Inputted array is : \t");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
	//sorting operation
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	//sorted array
	printf("\n\nSorted array is (DESCENDING ORDER) : \t");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}

}
