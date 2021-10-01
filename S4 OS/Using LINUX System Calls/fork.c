/*
Fork():

The fork system call is used to create a new processes. The newly created process is the child process. The process which calls fork and creates a new process is the parent process. The child and parent processes are executed CONCURRENTLY.

But the child and parent processes reside on different memory spaces. These memory spaces have same content and whatever operation is performed by one process will not affect the other process.

-The process ID of the child process is a unique process ID which is different from the ID’s of all other existing processes.
-The Parent process ID will be the same as that of the process ID of child’s parent.

----------
There are no arguments in fork() and the return type of fork() is integer

Required includes:
1. #include <stdio.h>
2. #include <sys/types.h>
3. #include <unistd.h>

If n is the number of fork() calls then 2^n is the number of processes created.

https://drive.google.com/file/d/1gUCO3fum0g_ojFqIQ2EJXdAiV3KYWFoz/view

parent first, child next;
we use wait() for child then parent order.

child process id that it returns to parent = non zero
inside the child process the id is 0

Child processinte id parent processoril non-zero
In child process , child process id is 0

pid_t variable can act as global variable and so it will be available for both child and parent.


Q1. Exaplin the o/p

main(){
	fork(); //1
	fork(); //2
	fork(); //3
	fork(); //4
	printf("using fork");
}


Ans:
16* times using fork gets printed

create child process using fork() system call.
when child is createdd it has to execute.

process is a program in execution.

upon fork() 1 ..one child is created.
when child process is created the 1st instruction cpu execute it the next statement aftr the fork() statement which created the child.

child 2 will execute every statement after the 2nd fork().

2nd fork() creates a 2nd child it is a different process.	

child 2 created because of 2nd fork statement
whatever follows 2nd fork() will be executed by child 2

1st statement aftr child 2 is printf()


*/
#include<stdio.h>
#include<unistd.h> //unix standard
#include<sys/types.h>
int main(){
	
	pid_t p; //pid_t is a signed integer type which is capable of representing the process ID.
	
	p = fork();
	
	if(p==-1){
		printf("ERROR!");
	}
	if(p==0){
		printf("child process\n");
	}
	else{
		printf("parent process\n");
	}
	
	return 0;
}
