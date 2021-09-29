/*
SCAN Algorithm in disk scheduling.

Also called as elevator algorithm.

Example:
Q. Disk contains 200 tracks(0-199). Request queue has tracks 82,170,43,140,24,16,190. Current position is at 50.

-> Calculate total number of tracks movement by R/W head using SCAN.
-> If R/w head takes 1 ns to move from one track to another track. Find the total time it takes.


CASE I:
-------

Direction is towards smaller value.

Ans:
0 -16---24--43------[50]---82---140---170----190----199

If direction is towards higher value, the head has to move till the end [far right]. In this case the end is 199 and NOT 190.

The order with we move will be -
50 --> 82->140->170->190 -->199   STOP after reaching 199

After this the head has to travel to the other other end. BUT in SCAN algorithm/Elevator algorithm we have to stop at 16. This is beacuse there is no request after 16.

The order it will move is -
199 ---> 43->24->16 STOP

calculation= (199-50) + (199-16) = 332
time= 332*1 = 332ns

CASE II:
-------

Ans:
0 -16---24--43------[50]---82---140---170----190----199

If direction is towards smaller value, the head has to move till the end[far left]. In this case the end is 0 and NOT 50.

The order with we move will be -
50 --> 43->24->16-->0  STOP after reaching 199

After this the head has to travel to the other other end. BUT in SCAN algorithm/Elevator algorithm we have to stop at 190. This is beacuse there is no request after 190.

The order it will move is -
0--> 82->140->170->190 STOP

calculation= (0-50)+(190-0) = 240
time = 240*1 = 240 ns 


*/
#include<stdio.h>
#include<math.h>//for abs()
int main(){
	int track_size, initial_head_position,i,j;
	int total_head_movement,temp,initial_index;
	int track_queue_size;
	
	printf("\nEnter the track size: ");
	scanf("%d",&track_size);
	
	printf("\nEnter the track queue size: ");
	scanf("%d",&track_queue_size);
	
	int track_queue[track_queue_size];
	
	printf("\nEnter the track queue: ");
	for(i=0;i<track_queue_size;i++){
		scanf("%d",&track_queue[i]);
	}
	
	printf("\nEnter the initial head position: ");
	scanf("%d",&initial_head_position);
	
	//sorting the track queue in ascending order
	for(i=0;i<track_queue_size;i++){
		for(j=0;j<track_queue_size-i-1;j++){
			if(track_queue[j]>track_queue[j+1]){
				temp= track_queue[j];
				track_queue[j] = track_queue[j+1];
				track_queue[j+1] = temp;
			}
		}
	}
	
	//finding the index position of initial head in track queue
	for(i=0;i<track_queue_size;i++){
		if(initial_head_position < track_queue[i]){
			initial_index = i;
			break;
		}
	}
	printf("\nInitial head index pos =%d",initial_index);
	
	//moving from the initial_index to far right
	printf("\n\nMoving from initial head pos to far right..");
	printf("%d",initial_head_position);
	for(i=initial_index;i<track_queue_size;i++){
		printf(" -> %d", track_queue[i]);
	}
	
	
	total_head_movement+= abs(track_size-1 - initial_head_position); //199-50
	printf("tdm= %d",total_head_movement);
	//update initial head position
	initial_head_position = track_size-1;
	printf(" -> %d",initial_head_position);
	
	
	//moving from the initial head to far left
	printf("\nMoving from current head pos. to far left..");
	for(i=initial_index-1;i>=0;i--){
		printf(" -> %d", track_queue[i]);
	}
	
	total_head_movement+= abs(track_size-1 - track_queue[i+1]); //i+1 because i-- causes i to gobelow 0
	//199-16
	
	printf("\n\nTotal head movements= %d",total_head_movement);
	
	return 0;
}

