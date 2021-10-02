/*
LRU:

speed slower than FIFO, but will have lesser faults than FIFO

Replace the page that is least recently used in the past


check the prev used pages and see which ones demand was the least.


eg:
7 0 1 2 0 [3] 0 4 2 3 0 3 2 1 2 0 1 7 0 1
  <--------
check all values(values presently in frames) before 3 and see whose demand was the least

ref string: 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
*/


#include<stdio.h>
int front=-1,rear=-1,que[20];
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
int ret()
{
	int retval=que[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front++;
	}
	return retval;
}
void removi(int num)
{
    int i;
	for(i=0;i<20;i++)
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
	int i,j,p,r,page[20],frame[20],fault=0,flag=0;
	printf("\nenter the number of pages");
	scanf("%d",&p);
	printf("\nenter the number of frames");
	scanf("%d",&r);
	printf("\nenter the page number");
	for(i=0;i<p;i++)
	{
		scanf("%d",&page[i]);
	}
	for(i=0;i<r;i++)
	{
		frame[i]=-1;
	}
	for(i=0;i<p;i++)
	{
	    flag=0;
		for(j=0;j<r;j++)
		{
			if(frame[j]==-1)
			{
				frame[j]=page[i];
				add(page[i]);
				flag=1;
				fault++;
				break;
			}
			else if(frame[j]==page[i])
			{
				flag=1;
				removi(page[i]);
				add(page[i]);
				break;
			}
		}
		if(flag==0)
		{
			fault++;
			add(page[i]);
			int m=ret();
			while(m==-1)
			{
				m=ret();
			}
				
			for(j=0;j<r;j++)
			{
				if(frame[j]==m)
				{
					frame[j]=page[i];
					break;
				}
			}
		}
	}
	printf("\nthe page fault is %d",fault);
}
