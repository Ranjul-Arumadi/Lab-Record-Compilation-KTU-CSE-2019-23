#include<stdio.h>
#include<stdlib.h>

void addition();
void display();
void multiplication();

struct node
{
	int coefficient;
	int power;
	struct node *next;
	
}*new,*new1,*new2,*head,*temp,*head1,*head2,*t1,*t2,*temp1,*temp2,*dis,*pro,*fix,*trav,*ans,*prev,*h,*t;

void main()
{
	int termCount1,termCount2,ch;
	
	printf("Enter no. of terms of polynomial 1 :\n");
	scanf("%d",&termCount1);
	printf("Enter the terms in decreasing order \n");
	
	while(termCount1>0)
	{
		new1=(struct node*)malloc(sizeof(struct node));
		
		printf("Enter the coefficient :");
		scanf("%d",&new1->coefficient);
		
		printf("Enter the power :");
		scanf("%d",&new1->power);
		
		new1->next=NULL;
		
		if(head1==NULL)
		{
		   head1=new1;
		   temp1=new1;
		}
		else
		{
		   temp1->next=new1;
		   temp1=new1;
		}
		termCount1--;
	}
	
	printf("Enter no. of terms of polynomial 2 :\n");
	scanf("%d",&termCount2);
	printf("Enter the terms in decreasing order \n");
	
	while(termCount2>0)
	{
		new2=(struct node*)malloc(sizeof(struct node));
		
		printf("Enter the coefficient :");
		scanf("%d",&new2->coefficient);
		
		printf("Enter the power :");
		scanf("%d",&new2->power);
		
		new1->next=NULL;
		
		if(head2==NULL)
		{
		   head2=new2;
		   temp2=new2;
		}
		else
		{
		   temp2->next=new2;
		   temp2=new2;
		}
		termCount2--;
	}
	
	printf("Choose option \n");
	printf("1: Polynomial Addition\n");
	printf("2: Polynomial Multiplication\n");
	printf("Enter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: addition();
			    break;
		case 2:
			    multiplication();
			    break;
		default :
			    printf("\nWRONG INPUT!!!\n");
	}
	
	
	
	
}

void addition()
{
    int sum;
    t1=head1;
    t2=head2;
    while(t1!=NULL && t2!=NULL)
    {
       new=(struct node *)malloc(sizeof(struct node));
       new->next=NULL;
     if(t1->power > t2->power)
     {
        new->coefficient=t1->coefficient;
        new->power=t1->power;
        t1=t1->next;
     }
      else if(t1->power < t2->power)
     {
        new->coefficient=t2->coefficient;
        new->power=t2->power;
        t2=t2->next;
     }
     else
      {
        sum=(t1->coefficient)+(t2->coefficient);
        new->coefficient=sum;
        new->power=t1->power;
        t1=t1->next;
        t2=t2->next;
      }
      if(head==NULL)
      {
        head=new;
        temp=new;
      }
      else
      {
        temp->next=new;
        temp=new;
      }
}
	dis=head;
    printf("\n");
    printf("Added polynomial :\n"); 
 while(dis!=NULL)
 {
    if(dis->next!=NULL)
    printf("%dX^%d+",dis->coefficient,dis->power);
    else
    printf("%dX^%d",dis->coefficient,dis->power);
    dis=dis->next;
 }
 
 printf("\n");
}


void multiplication()
{
    int pr,ex,sum;
    t1=head1;
    
    while(t1!=NULL)
    {
       t2=head2;
       while(t2!=NULL)
       {
         pro=(struct node *)malloc(sizeof(struct node));
         pro->next=NULL;
         pr=t1->coefficient*t2->coefficient;
         ex=t1->power+t2->power;
         pro->coefficient=pr;
         pro->power=ex;
         if(head==NULL)
         {
           head=pro;
           temp=pro;
         }
         else
         {
           temp->next=pro;
           temp=pro;
         }
         t2=t2->next;
       }
       t1=t1->next;
    }
    fix=head;
    while(fix!=NULL)
    {
      sum=fix->coefficient;
      prev=fix;
      trav=fix->next;
      while(trav!=NULL)
      {
        if(fix->power==trav->power)
        {
          sum+=trav->coefficient;
          prev->next=trav->next;
        }
        prev=trav;
        trav=trav->next;
        
      }
      ans=(struct node *)malloc(sizeof(struct node));
      ans->next=NULL;
      ans->coefficient=sum;
      ans->power=fix->power;
      if(h==NULL)
      {
        h=ans;
        t=ans;
      }
      else
      {
        t->next=ans;
        t=ans;
      } 
      fix=fix->next;
      
    }
    printf("\nMultiplied Polynomial :");
     printf("\n");
    dis=h;
    while(dis!=NULL)
    {
    if(dis->next!=NULL)
    printf("%dX^%d+",dis->coefficient,dis->power);
    else
    printf("%dX^%d",dis->coefficient,dis->power);
    dis=dis->next;
    }
    printf("\n---------------------------------\n");
    printf("\n");
}