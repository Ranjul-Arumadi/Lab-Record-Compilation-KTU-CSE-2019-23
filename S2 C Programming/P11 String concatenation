#include<stdio.h>
void main()
{
     char a[20];
    printf("Enter the string 1(put '$' at the end)");
    scanf("%s",a);
    char b[20];
    printf("\nEnter the string 2(put '$' at the end)");
    scanf("%s",b);
    char s[40];
    int i=0,c2=0,c1=0;
    //length of string 1
    while(a[i]!='$')
    {
        c1++;
        i++;
    }
    i=0;
    //length of string 2
    while(b[i]!='$')
    {
        c2++;
        i++;
    }
    for(i=0;i<c1;i++)
    {
        s[i]=a[i];
    }
    for(i=0;i<c2;i++)
    {
        s[i+c1]=b[i];
    }
    printf("\nConcatenated string is- ");
    printf("%s",s);
}
