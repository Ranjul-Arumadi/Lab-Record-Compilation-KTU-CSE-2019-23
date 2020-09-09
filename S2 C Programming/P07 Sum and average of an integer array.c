//program to calculate the sum and average of an integer array
#include<stdio.h>
void main()
{ 
	
	int arr[20],n;
	float sum=0;
	float avg=0;
	printf("Enter the size of array \t :");
	scanf("%d",&n);
	printf("Enter the array values \t ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("\t");
	}
	for(int i=0;i<n;i++)
	{
 		sum=sum+arr[i];	
	}
	avg=sum/n;
	printf("The sum of array values is :%f \t",sum);
	printf("\n\t");
	printf("The average of array values is :%f \t",avg);
		   
}
