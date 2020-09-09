//linear search
#include<stdio.h>
void main()
{
	int a[20],n,m,i;
	int f=0; //to be used as a flag
	printf("Enter array size : \t");
	scanf("%d",&n);
	printf("Enter array elements \t");
	for(i=0;i<n;i++)
	{
		scanf("\t %d",&a[i]);
	}
	printf("Enter the value to be searched :\t");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("ELEMENT NOT FOUND !\n\n");
	}
	else
	 	printf("element %d found at position %d :",m,(i+1));
		printf("\n\n");	
	
}
