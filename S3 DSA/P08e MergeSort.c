#include <stdio.h>
void mergesort(int [],int,int);
void merge(int [],int,int,int);

void main()
{
	int a[20],i,n;
	printf("\nEnter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n The input array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
 	mergesort(a,0,n-1);
	printf("\n The sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf(" %d\t",a[i]);
	}
		
}

void merge(int a[],int begining,int middle,int ending)
{
	int i=begining,j=middle+1,index=begining,temp[20],k;
	while((i<=middle) && (j<=ending))
	{
 		if(a[i]<a[j])
 		{
			temp[index]=a[i];
			i++;
 		}
 		else
 		{
			temp[index]=a[j];
			j++;
 		}
		index++;
	}
	if(i>middle)
	{
 		while(j<=ending)
	 	{
			temp[index]=a[j];
			j++;
			index++;
 		}
	}
	else
	{
 		while(i<=middle)
 		{
			temp[index]=a[i];
			i++;
			index++;
 		}
	}
	for(k=begining;k<index;k++)
		a[k]=temp[k];
}

void mergesort(int a[],int begining,int ending)
{
	int middle;
	if(begining<ending)
	{
		middle=(begining+ending)/2;
 		mergesort(a,begining,middle);
		mergesort(a,middle+1,ending);
 		merge(a,begining,middle,ending);
	}
}