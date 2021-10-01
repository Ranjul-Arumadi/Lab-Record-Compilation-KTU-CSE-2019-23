/*
First Fit allocation strategy - The approach is to allocate the first free partition or hole large enough which can accommodate the process.
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
	
	for(i=0;i<process_count;i++){
		for(j=0;j<memory_count;j++){
			if(process[i]<memory[j] && answer[j]==-1){
				answer[j] = i;
				memory[j]-=process[i];
				break;
			}
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
