/*
Two functions:shmget() and shmat() are used for IPC using shared memory. shmget() function is used to create the shared memory segment while shmat() function is used to attach the shared segment with the address space of the process.


shmget():
int shmget(key_t key, size_t size, int shmflg);

The first parameter specifies the unique number (called key) identifying the shared segment. The second parameter is the size of the shared segment e.g. 1024 bytes or 2048 bytes. The third parameter specifies the permissions on the shared segment. On success the shmget() function returns a valid identifier while on failure it return -1.


shmat():
void *shmat(int shmid, const void *shmaddr, int shmflg);

The first parameter here is the identifier which shmget() function returns on success. The second parameter is the address where to attach it to the calling process. A NULL value of second parameter means that the system will automatically choose a suitable address. The third parameter is ‘0’ if the second parameter is NULL, otherwise, the value is specified by SHM_RND.

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
	int i;
	void *shared_memory;
	char buff[100];
	int shmid;
	
	shmid = shmget((key_t)2345, 1024, 0666|IPC_CREAT); //creates shared memory segment with key 2345, having size 1024 bytes. IPC_CREAT is used to create the shared segment if it does not exist. 0666 are the permisions on the shared segment
	
	printf("Key of shared memory is %d\n",shmid);
	
	
	shared_memory=shmat(shmid,NULL,0); //process attached to shared memory segment
	
	
	printf("Process attached at %p\n",shared_memory); //this prints the address where the segment is attached with this process
	printf("Enter some data to write to shared memory\n");
	
	
	read(0,buff,100); //get some input from user
	strcpy(shared_memory,buff); //data written to shared memory
	printf("You wrote : %s\n",(char *)shared_memory);
}

