#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int size=0,i,j=0,flag=1;
    printf("enter the string\n");
    scanf("%s",&str1);
    while(str1[size]!='\0')
        {
            size++;
        }
    for(i=size-1;i>=0;i--)
        {
            str2[j]=str1[i];
            j++;
        }
    str2[j]="\0";
    for(i=0;i<size-1;i++)
        {
            if(str1[i]!=str2[i])
                {
                    flag=0;
                    break;
                }
        }
    if(flag==0)
        {
            printf("Palindrome\n");
        }
    else
        {
            printf("Not palindrome\n");
        }
}
