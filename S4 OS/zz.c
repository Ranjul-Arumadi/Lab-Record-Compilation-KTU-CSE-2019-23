//RR
#include<stdio.h>

int main() {
    int n, x = 0, i, j, t;

    //Read the number of processes
    printf("Enter the number of process : ");
    scanf("%d", &n);

    int bta[n], bt[n], tat[n], wt[n], ct[n], a[n];

    //Read the burst time of the processes
    printf("Enter the Burst time of process : ");
    for (i = 0; i < n; i++)
        scanf("%d", &bt[i]);

    //Read the time slice
    printf("Enter the Time slice : ");
    scanf("%d", &t);

    //Calculate process number
    for (i = 0; i < n; i++)
        a[i] = i + 1;

    //Initialize completion time to 0
    for (i = 0; i < n; i++)
        ct[0] = 0;

    //Duplicate burst time
    for (i = 0; i < n; i++)
        bta[i] = bt[i];

    //Computation
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
	    //Burst time is more than time slice
	    if (bta[i] > t) {
                bta[i] = bta[i] - t;
                x = x + t;
                ct[i] = x;
            } else if (bta[i] == 0)
                continue;
            else if (bta[i] <= t) {
                x = x + bta[i];
                ct[i] = x;
                bta[i] = 0;
            }
        }
    }

    //Completion time is TAT
    for (i = 0; i < n; i++)
        tat[i] = ct[i];

    //Calculate Waiting time
    for (i = 0, j = 0; i < n; i++, j++)
        wt[i] = tat[i] - bt[j];

    //Display
    printf("\nProcess\tBT\tCT\tTAT\tWT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d", a[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("\n");

    return 0;
}



//semaphore

#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
int buf[5],f,r;
sem_t mutex,full,empty;
void *produce(void *arg)
{
	int i;
	for(i=0;i<10;i++)
	 {
	  sem_wait(&empty);
	  sem_wait(&mutex);
	  printf("produced item is %d\n",i);
	  buf[(++r)%5]=i;
	  sleep(1);
	  sem_post(&mutex);
	  sem_post(&full);
	}
}
void *consume(void *arg)
{
	int item,i;
	for(i=0;i<10;i++)
	{
	 sem_wait(&full);
	 sem_wait(&mutex); 
	 item=buf[(++f)%5];
 	 printf("consumed item is %d\n",item);
 	 sleep(1);
 	 sem_post(&mutex);
 	 sem_post(&empty);
	}
}
int main()
{
	pthread_t tid1,tid2;
	sem_init(&mutex,0,1);
	sem_init(&full,0,0);
	sem_init(&empty,0,5);
	pthread_create(&tid1,NULL,produce,NULL);
	pthread_create(&tid2,NULL,consume,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	return 0;
}	


//shm 

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
shmid=shmget((key_t)2345, 1024, 0666|IPC_CREAT);
printf("Key of shared memory is %d\n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("Process attached at %p\n",shared_memory);
printf("Enter some data to write to shared memory\n");
read(0,buff,100);
strcpy(shared_memory,buff);
printf("You wrote : %s\n",(char *)shared_memory);
}


//shm2

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
shmid=shmget((key_t)2345, 1024, 0666);
printf("Key of shared memory is %d\n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("Process attached at %p\n",shared_memory);
printf("Data read from shared memory is : %s\n",(char *)shared_memory);
}
