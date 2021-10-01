#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int arga, char *argb[])
{
    //printf("hi");
	 printf("We are in A.c\n");
     printf("PID of A.c = %d\n", getpid());
    return 0;
}
