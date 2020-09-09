//Experiment 21 - Implement a program to create a file and perform the following
//i.  Write data to the file
//ii.  Read the data in a given file & display the file content on console
//iii.  Append new data and display on console do the following using pointers
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("test.txt","w");
    if(fp==NULL)
    {
        printf("file cannot be created!!");
        exit(0);
    }
    printf("Enter the data (ctrl+d to stop) :");
    while((c=getchar())!=EOF)
    {
        putc(c,fp);
    }
    fclose(fp);
    printf("\nEntered data-");
    fp=fopen("test.txt","r");
    while((c=getc(fp))!=EOF)
    {
        putchar(c);
    }
    fclose(fp);
    fp=fopen("test.txt","a");
    printf("\nEnter data to be added (ctrl+d to stop) :");
    while((c=getchar())!=EOF)
    {
        putc(c,fp);
    }
    fclose(fp);
    printf("\nAppended data");
    fp=fopen("test.txt","r");
    while((c=getc(fp))!=EOF)
    {
        putchar(c);
    }
    fclose(fp);
}









