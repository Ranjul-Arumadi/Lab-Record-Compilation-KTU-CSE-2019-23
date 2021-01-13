#include<stdio.h>
int a[20],i,n,temp;

void heapify(int [],int,int);
void heapsort(int [],int);

void main()
{
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n The input array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
 	heapsort(a,n);
	printf("\n The sorted array is: \n");
	for(i=0;i<n;i++)
		printf(" %d\t",a[i]);
}

void heapify(int a[],int n,int i)
{
	int largest=i,left=2*i+1,right=2*i+2;
	if(left<n && a[left]>a[largest])
	{
			largest=left;
	}
	if(right<n && a[right]>a[largest])
	{
		largest=right;
	}
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		heapify(a,n,largest);
	}
}
void heapsort(int a[],int n)
{
	for(i=n/2-1;i>=0;i--)
	{
		heapify(a,n,i);	
	}
	for(i=n-1;i>=0;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a,i,0);
	}
	
}