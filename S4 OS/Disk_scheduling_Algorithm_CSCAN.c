/*
Disk Scheduling algorithm - CSCAN[Circular Scan]

Example:
tracks = 200 [0-199]
request queue = 82,170,43,140,24,16,190
current position = 50
 
 CASE I:
 
 Direction = move towards large value
 
 In SCAN algorithm we have seen that after moving to an extreme end(suppose towards the larger value), the head then goes back to the opposite side at the SAME TIME FULFILLING REQUEST 
 
 BUT
 
 In CSCAN algorithm the difference is that while moving to the oposite side the head does not fullfill any request but rather move to the other extreme end and then again start to move towards to the other end while fulfilling requests.
 
 Path:
 
 50->82->140->170->190->[199->0]*->16->24->43
 
 Answer = (199-50) + (199-0) + (43-0) = 391

 * = important step
*/
#include<stdio.h>
#include<math.h>
int main(){
	int track_size,ready_queue_size,i,j;
	int initial_head_position,temp;
	int index,total_head_movement;
	
	printf("\nEnter the track size: ");
	scanf("%d",&track_size);
	
	printf("\nEnter the ready queue size: ");
	scanf("%d",&ready_queue_size);
	
	int readyqueue[ready_queue_size];
	
	printf("\nEnter the ready queue values: ");
	for(i=0;i<ready_queue_size;i++){
		scanf("%d", &readyqueue[i]);
	}
	
	printf("\nEnter the intial head position: ");
	scanf("%d",&initial_head_position);
	
	//sorting the ready queue
	for(i=0;i<ready_queue_size;i++){
		for(j=0;j<ready_queue_size-i-1;j++){
			if(readyqueue[j]>readyqueue[j+1]){
				temp = readyqueue[j];
				readyqueue[j] = readyqueue[j+1];
				readyqueue[j+1] = temp;
			}
		}
	}
	
	//find index position of initial head value in the sorted ready queue
	
	for(i=0;i<ready_queue_size;i++){
		if(initial_head_position<readyqueue[i]){
			index = i;
			break;
		}
	}
	
	//printing ready queue value while moving right
	printf("\n%d->",initial_head_position);
	for(i=index;i<ready_queue_size;i++){
		printf(" %d-> ",readyqueue[i]);
	}
	printf(" %d-> ",track_size-1);
	
	total_head_movement+= abs(track_size-1 - initial_head_position);

	total_head_movement+= abs(0 - (track_size-1));

	
	//take the head to 0 and process requests again to the right side[larger value side]
	printf(" 0-> ");
	for(i=0;i<index;i++){
		printf(" %d-> ",readyqueue[i]);
	}
	total_head_movement+= abs(0 -readyqueue[i-1]);
	
	printf("\nTotal head movement: %d",total_head_movement);

	
	return 0;
}
