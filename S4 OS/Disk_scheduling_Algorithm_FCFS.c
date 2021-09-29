/*
First Come First Serve (FCFS) :

FCFS is the simplest disk scheduling algorithm. As the name suggests, this algorithm entertains requests in the order they arrive in the disk queue. The algorithm looks very fair and there is no starvation (all requests are serviced sequentially) but generally, it does not provide the fastest service.

note: initial head to first position should alsobe counted while taking total head movements.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int ready_queue_size,i,j;
	int initial_head_position,temp;
	int index,total_head_movement;

	
	printf("\nEnter the ready queue size: ");
	scanf("%d",&ready_queue_size);
	
	int readyqueue[ready_queue_size];
	
	printf("\nEnter the ready queue values: ");
	for(i=0;i<ready_queue_size;i++){
		scanf("%d", &readyqueue[i]);
	}
	
	printf("\nEnter the intial head position: ");
	scanf("%d",&initial_head_position);
	temp=initial_head_position;
	
	printf("\n");
	//printf("%d",initial_head_position);
	for(i=0;i<ready_queue_size;i++){
		printf(" %d-> ",readyqueue[i]);

		total_head_movement+= abs(readyqueue[i] - temp);//this holds present readyqueue value
		temp=readyqueue[i]; //staores pervious value
	}
	
	printf("\nTotal head movement: %d",total_head_movement);

	
	return 0;
}
