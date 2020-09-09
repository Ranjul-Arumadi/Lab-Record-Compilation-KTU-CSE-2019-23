#include<stdio.h>
#include<string.h>
char rev(char a[],int n)
{
    char b[20];
    int i,j;
    for(i=0,j=n-1;i<=n;i++,j--)
    {
        b[i]=a[j];
    }
    printf("\nReversed string- %s",b);
    
}
void main()
{
    char s[20],len=0;
    printf("Enter the word to be reversed- ");
    scanf("%s",s);
    len=strlen(s);
    rev(s,len);
}

