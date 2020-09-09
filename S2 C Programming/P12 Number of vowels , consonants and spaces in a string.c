//Experiment 12 - Implement a program to read a string (ending with a $ symbol), store it in an array and 
//count the number of vowels, consonants and spaces in it.
#include<stdio.h>
#include<string.h>
void main()
{
     char st[50];
    printf("Enter the string with '$' at the end");
    gets(st);
    int i=0,count=0,vowel=0,conso=0,spaces=0;
    while(st[i]!='$')
    {
        count++;
        i++;
    }
    for(int i=0;i<count;i++)
    {
       
            if(st[i]==' ')
            {
             spaces++;
            }
            else
            {
                if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
                {
                 vowel++;
                }
                else
                {
                conso++;
                }
            }
         
        
    }
    printf("Number of vowels: %d",vow);
    printf("\nNumber of consonants: %d",con);
    printf("\nNumber of spaces : %d",sp);

}
