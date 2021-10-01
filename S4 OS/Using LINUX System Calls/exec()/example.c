#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int arga, char *argb[])
{
    printf("PID of example.c = %d\n", getpid());
    char *args[] = {"Hello", "C", "Programming", NULL};
    
    //execv() excutes the other file which has been specified
    execv("./hello", args);
    printf("Back to example.c");
    return 0;
}
