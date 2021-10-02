/*
LFU

Involves taking the frequency of each page requests.

If frequcncies of all pages are equal apply FIFO.
*/
#include<stdio.h>
//create a queue and a arr called count to store the frequency of each page arriving
int front=-1,rear=-1,que[20],count[20];

//function to find the value from the queue having the smallest count associated with it.
int smallest()
{
    int i;
	int smallest=count[que[0]];
	int retval=que[0];
	for(i=front;i<=rear;i++)
	{
		if(que[i]!=-1)
		{
			if(count[que[i]]>smallest)
			{
				smallest=count[que[i]];
				retval=que[i];
			}
		}
	}
	printf("\n\nsmallest = %d\n\n",smallest);
	printf("\n\nretval = %d\n\n",retval);
	return retval;
}

//enqueue operation to the queue
void add(int num)
{
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear++;
	}
	que[rear]=num;
}
//dequeue operation of the queue
void delete(int num)
{
    int i;
	for(i=front;i<=rear;i++)
	{
		if(que[i]==num)
		{
			que[i]=-1;
			break;
		}
	}
}		
void main()
{
	int fault=0,i,p,r,page[20],frame[20],j;
	printf("\nenter the number of pages");
	scanf("%d",&p);
	printf("\nenter the number of memory");
	scanf("%d",&r);
	printf("\nenter the page number");
	for(i=0;i<p;i++)
	{
		scanf("%d",&page[i]);
		count[page[i]]=0;
	}
	
	//settings all the frames to -1
	for(i=0;i<r;i++)
	{
		frame[i]=-1;
	}
	
	for(i=0;i<p;i++)
	{
		int flag=0;
		for(j=0;j<r;j++)
		{	
			//if frame is empty then add to the frame
			if(frame[j]==-1)
			{
				//store page value to the frame
				frame[j]=page[i];
				
				count[page[i]]++;
				
				//add page value to the queue
				add(page[i]);
				fault++;
				flag=1;
				break;
			}
			//if frame value is same as new page value
			else if(frame[j]==page[i])
			{
				count[page[i]]++;
				
				flag=1;
				delete(page[i]);
				add(page[i]);
				break;
			}
		}
		if(flag==0)
		{
		    fault++;
			
			int y=smallest();
			
			for(j=0;j<r;j++)
			{
				if(frame[j]==y)
				{
					count[y]=0;
					
					frame[j]=page[i];
					count[page[i]]++;
				}
			}
		}
	}
	printf("\nthe page fault is %d",fault);
}
