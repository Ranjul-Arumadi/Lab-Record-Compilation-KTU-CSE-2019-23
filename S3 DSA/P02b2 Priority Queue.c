#include<stdio.h>
int f=0,r=-1,n;
struct prq
{
    int ele;
    int pr;
}pq[10];

void insert()
{
    int i,elem,pre;
    if(r==n-1) 
      printf("\nqueue overflow\n");
    else
    {
        printf("\nenter the element and priority : ");
        scanf("%d %d",&elem,&pre);
        i=r;
        ++r;
        while((pq[i].pr<=pre) && (i>= 0))
        {
            pq[i+1]=pq[i];
            i--;
        }
        pq[i+1].ele=elem;
        pq[i+1].pr=pre;
    }
}

struct prq del()
{
    struct prq p;
    if(f>r) 
    {
        printf("\nqueue underflow \n");
        p.ele=-1;
        p.pr=-1;
    }
    else
    {
        p=pq[f];
        f=f+1;
        return p;
    }
}

void display()
{
    int i;
    if(f>r) 
      printf("\nqueue is empty \n");
    else
    {
        for(i=f;i<=r; i++)
            printf("%d(%d)  ",pq[i].ele,pq[i].pr);
        printf("\n");
    }
}

void main()
{
    int ch;
    struct prq p;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    printf("\nOperations\n1. insert\n2. delete\n3. display\n4. exit\n");
    do
    {
        printf("\nEnter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            p=del();
            if(p.ele!=-1)
            printf("\nDeleted element is %d \n",p.ele);
            break;
        case 3:
            printf("\nQueue is : \n");
            display();
            break;
        case 4:
            printf("\nExit\n");
            break;
        default:
            printf("\n\ERRORn");
            break;
        }
    } while(ch!=4);
}