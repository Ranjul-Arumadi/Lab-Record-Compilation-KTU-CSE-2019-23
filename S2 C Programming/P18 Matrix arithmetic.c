#include<stdio.h>
#define row 5
#define col 5
int i,j,k;
void read(int a[][col],int r,int c)
 {
    printf("\nEnter the elements of the matrix :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 }
void display(int d[][col],int r,int c)
 {
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d \t",d[i][j]);
        }
        printf("\n");
    }
 }

void product(int a[][col],int b[][col],int p[][col],int r,int c, int n)
 {
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            p[i][j]=0;
            for(k=0; k<n; k++)
            {
                p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
 }

void transpose(int a[][col],int r,int c)
 {
    printf("\nThe transpose matrix is : \n");
    for(i=0; i<c; i++)
    { 
        for(j=0; j<r; j++)
        {
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }
 }
void add(int a[][col],int b[][col],int s[][col],int r,int c)
 {
    for(i=0; i<r; i++)
    {
        
        for(j=0; j<c; j++)
        {
            s[i][j]=0;
            s[i][j]=s[i][j]+a[i][j]+b[i][j];
        }
    }
 }

void main()
{
    int a[row][col],b[row][col],s[row][col],p[row][col],r1,r2,c1,c2,ch;
    printf("\n1.Addition\n");
    printf("\n2.Multiplication\n");
    printf("\n3.Transpose\n");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("\n Addition..");
                 printf("\nEnter the no of rows and coloumns of matrix 1 :");
                 scanf("%d%d",&r1,&c1);
                 printf("\nEnter the no of rows and coloumns of matrix 2 :");
                 scanf("%d%d",&r2,&c2);
                 if((r1!=r2)&&(c1!=c2))
                 printf("\nAddition is not possible.\n");
                 else
                 {
                     read(a,r1,c1);
                     read(b,r2,c2);
                     add(a,b,s,r1,c1);
                     display(s,r1,c1);
                 }
                     break;
        case 2 : printf("\nMultiplication..\n");
                 printf("\nEnter the no of rows and coloumns of matrix 1 :");
                 scanf("%d%d",&r1,&c1);
                 printf("\nEnter the no of rows and coloumns of matrix 2 : ");
                 scanf("%d%d",&r2,&c2);
                 if(r2!=c1)
                 printf("\nMultiplication is not possible \n");
                 else
                 {
                     read(a,r1,c1);
                     read(b,r2,c2);
                     product(a,b,p,r1,c2,c1);
                     display(p,r1,c2);
                 }
                 break;
        case 3 : printf("\nTranspose..\n");
                 printf("\nEnter the no rows and coloumns of matrix  : ");
                 scanf("%d%d",&r1,&c1);
                 read(a,r1,c1);
                 transpose(a,r1,c1);
                 break;
       default : printf("\nInvalid Operation\n");
    }
}


