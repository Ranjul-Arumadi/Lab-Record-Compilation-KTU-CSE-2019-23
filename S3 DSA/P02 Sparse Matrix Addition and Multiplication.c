#include<stdio.h>
#include<stdlib.h>

void addition();
void multiplication();
int n=1,value;

struct node
{
  int coeff;
  int expo;
  struct node *next;
}*new1,*head1,*temp1,*new2,*head2,*temp2,*new,*head,*temp,*dis,*t1,*t2,*pro,*fix,*trav,*ans,*h,*t,*prev;

void main()
{
  int h,h1,ch;
  printf("ENTER THE NO. OF NON ZERO ELEMENTS OF POLYNOMIAL_1 :");
  scanf("%d",&h);
  while(h>0)
  {
    new1=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE COEFFICIENT OF X :");
    scanf("%d",&new1->coeff);
    printf("ENTER THE EXPONENT OF X :");
    scanf("%d",&new1->expo);
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
    h--;
  }
  printf("ENTER THE NO. OF NON ZERO ELEMENTS OF POLYNOMIAL_2 :");
  scanf("%d",&h1);
  while(h1>0)
  {
    new2=(struct node *)malloc(sizeof(struct node));
    printf("ENTER THE COEFFICIENT OF X :");
    scanf("%d",&new2->coeff);
    printf("ENTER THE EXPONENT OF X :");
    scanf("%d",&new2->expo);
    new2->next=NULL;
    
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
    h1--;
  }
  printf("\n---------------------------------\n");
  printf("1_POLYNOMIAL ADDITION\n");
  printf("2_POLYNOMIAL MULTIPLICATION\n");
  printf("ENTER YOUR CHOICE :");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
           addition();
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
     if(t1->expo > t2->expo)
     {
        new->coeff=t1->coeff;
        new->expo=t1->expo;
        t1=t1->next;
     }
      else if(t1->expo < t2->expo)
     {
        new->coeff=t2->coeff;
        new->expo=t2->expo;
        t2=t2->next;
     }
     else
      {
        sum=t1->coeff+t2->coeff;
        new->coeff=sum;
        new->expo=t1->expo;
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
while(t1!=NULL || t2!=NULL)
{
     new=(struct node *)malloc(sizeof(struct node));
     new->next=NULL;
     if(t1!=NULL)
     { 
        new->coeff=t1->coeff;
        new->expo=t1->expo;
     }
     else if(t2!=NULL)
     {
        new->coeff=t2->coeff;
        new->expo=t2->expo;
        t2=t2->next;
     }
       temp->next=new;
       temp=new;
}
    dis=head;
    printf("\n");
    printf("ADDED POLYNOMIAL :\n"); 
 while(dis!=NULL)
 {
    if(dis->next!=NULL)
    printf("%dX^%d+",dis->coeff,dis->expo);
    else
    printf("%dX^%d",dis->coeff,dis->expo);
    dis=dis->next;
 }
 printf("\n---------------------------------\n");
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
         pr=t1->coeff*t2->coeff;
         ex=t1->expo+t2->expo;
         pro->coeff=pr;
         pro->expo=ex;
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
      sum=fix->coeff;
      prev=fix;
      trav=fix->next;
      while(trav!=NULL)
      {
        if(fix->expo==trav->expo)
        {
          sum+=trav->coeff;
          prev->next=trav->next;
        }
        prev=trav;
        trav=trav->next;
        
      }
      ans=(struct node *)malloc(sizeof(struct node));
      ans->next=NULL;
      ans->coeff=sum;
      ans->expo=fix->expo;
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
    printf("\nMultiplied Polynomial :\n");
    dis=h;
    while(dis!=NULL)
    {
    if(dis->next!=NULL)
    printf("%dX^%d+",dis->coeff,dis->expo);
    else
    printf("%dX^%d",dis->coeff,dis->expo);
    dis=dis->next;
    }
    printf("\n---------------------------------\n");
    printf("\n");
}
