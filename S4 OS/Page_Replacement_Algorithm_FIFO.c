/*
Page replacement algo.

FIFO: REplace the page that was in first.

ref string: 7 0 1 2 0 3 0 4 2 3 0 3 1 2 0

page fault: if requested page is absent in main memory
page hit: requested page is already present in frame
*/
#include<stdio.h>
int front=-1,rear=-1,queue[20];
//using a queue to get the index position of the frames
void enque(int num)
{
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	//nsertion to queue only via end
	else
	{
		rear++;
	}
	queue[rear]=num;
}
int deque()
{
	int retval=queue[front];
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
void main()
{
	int p,r,page[20],frame[20],fault=0,i,j;
	printf("\nenter the number of pages");
	scanf("%d",&p);
	printf("\nenter the number of frames");
	scanf("%d",&r);
	printf("enter the page number");
	//read the pages
	for(i=0;i<p;i++)
	{
		scanf("%d",&page[i]);
	}
	//set all the frames to -1 to indicate empty initially
	for(i=0;i<r;i++){
		frame[i]=-1;
	}
	//i value controls the pages and j value the frames
	int flag=0;
	for(i=0;i<p;i++)
	{
		flag=0;
		printf("\n");
		for(j=0;j<r;j++)
		{
			//frame empty condition
			if(frame[j]==-1)
			{
				//place the page in the frame
				frame[j]=page[i];
				//store the index of frame to queue
				enque(j);
				fault++;
				flag=1;
				//IMPORTANT
				break;
			}
			//hit condition
			else if(frame[j]==page[i])
			{
				flag=1;
				//IMPORTANT
				break;
			}
		}
		//did not find empty frame, no hits , so we have to replace using FIFO principle 
		if(flag==0)
		{
			//get the index of frame that was stored earlier
			int m=deque();
			fault++;
			//replace that frame using new page value
			frame[m]=page[i];
			//enqueue the new frame value back to the queue
			enque(m);
		}
	}
	printf("\nnumber of page fault: %d",fault);
}
