#include<stdlib.h>
#include <stdio.h>
int front=-1;
int rear=-1;
void insert(int queue[10],int size);
void delete(int queue[10],int size);
void display(int queue[10],int size);
void main()
{
    int choice,queue[10],size;
    printf("Enter the size of the queue :");
    scanf("%d",&size);
    printf("\nOperations :\n--------\n1. insert\n2. delete\n3. display\n4. exit\n");
    while(choice!=5)
    {
        printf("\nenter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insert(queue,size);
                     break;
                     
            case 2 : delete(queue,size);
                     break;
                     
            case 3 : printf("\nthe elements are");
                     display(queue,size);
                     break;
                     
            case 4 : printf("\nexiting...");
					 exit(0);
                     break;
            
            default: printf("\nnot a choice\nenter again");
        }
    }
}

void insert(int queue[10],int size)
{
    int item;
    if((front==0&&rear==(size-1))||(front==rear+1))
       printf("the circular queue is full");
       
    else
      {
          if(front==-1)
            {
                front=0;
                rear=0;
            }
            
          else if(rear==(size-1))
                rear=0;
                
          else
               rear=rear+1;
             
          printf("enter the elements ");
          scanf("%d",&item);
          queue[rear]=item;
      }
}

void delete(int queue[10],int size)
{
    if(front==-1)
       printf("\nthe circular queue is empty");
       
    else
      {
          printf("\nthe deleted element is %d",queue[front]);
          if(front==rear)
             {
                 front=-1;
                 rear=-1;
                 
             }
              
          else if(front==(size-1))
              front=0;
              
          else
              front=front+1;
      }
}

void display(int queue[10],int size)
{
    if(front==-1)
      printf("the queue is empty");
         
    else
      {
          if(rear>=front)
            {
                for(int i=front;i<=rear;i++)
                    printf(" %d ",queue[i]);
                printf(" ");
            }
            
          else
            {
                for(int i=0;i<=rear;i++)
                   printf(" %d ",queue[i]);
                for(int i=front;i<size;i++)
                   printf(" %d ",queue[i]);
                printf(" ");
            }
      }
      
}