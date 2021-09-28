/*
Worst Fit allocation strategy - Worst Fit allocates a process to the partition which is largest sufficient among the freely available partitions available in the main memory
*/
#include<stdio.h>
int main(){
	int i,j,memory_count, process_count;
	
	printf("\nEnter number of partitions: ");
	scanf("%d",&memory_count);
	
	printf("\nEnter number of processes: ");
	scanf("%d",&process_count);
	
	int memory[memory_count],process[process_count],answer[memory_count];
	
	printf("\nEnter the partitions: ");
	for(i=0;i<memory_count;i++){
		scanf("%d",&memory[i]);
	}
	
	printf("\nEnter the processes sizes: ");
	for(i=0;i<process_count;i++){
		scanf("%d",&process[i]);
	}
	
	//setting the answer array to -1
	for(i=0;i<memory_count;i++){
		answer[i]=-1;
	}
	
	int flag=0,temp,index;
	for(i=0;i<process_count;i++){
        for(j=0;j<memory_count;j++){
			if(memory[j]<process[i] || answer[j]!=-1){
				continue;
			}
			else if(memory[j]>process[i] && flag==0){
				temp=memory[j];
				index=j;
				flag=1;
				continue;
			}
			else if(flag==1 && memory[j]>temp && memory[j]>=process[i]){
				temp = memory[j];
				index=j;
			}
        }
		if(flag==1){
			flag=0;
			answer[index] = i;
			//upon getting a final answer decrement the memory
			memory[index]-= process[i];
		}
    }
	
	//displaying ans.
	printf("\n\nOutput:\n\n");
	for(i=0;i<memory_count;i++){
		if(answer[i]==-1){
			printf("  X  ");
		}
		else{
			printf("  %d  ",answer[i]);
		}
	}
	printf("\n");
	for(i=0;i<memory_count;i++){
		printf(" %d ", memory[i]);
	}
	return 0;
}
