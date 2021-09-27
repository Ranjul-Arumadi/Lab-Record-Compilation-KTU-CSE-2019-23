/*
Bankers Algorithm
*/
#include<stdio.h>
int main(){
	int process_count, resource_count,i ,j, k;
	
	printf("\nEnter process_count: ");
	scanf("%d",&process_count);
	
	printf("\nEnter resource_count: ");
	scanf("%d",&resource_count);
	
	int allocation[process_count][resource_count];
	int max[process_count][resource_count];
	int available[resource_count];
	int need[process_count][resource_count];
	
	printf("\nEnter allocation matrix: ");
	for(i=0;i<process_count;i++){
		for(j=0;j<resource_count;j++){
			scanf("%d",&allocation[i][j]);
		}
	}
	
	printf("\nEnter max matrix: ");
	for(i=0;i<process_count;i++){
		for(j=0;j<resource_count;j++){
			scanf("%d",&max[i][j]);
		}
	}
	
	printf("\nEnter available matrix: ");
	for(j=0;j<resource_count;j++){
		scanf("%d",&available[j]);
	}
	
	//Finding need matrix
	for(i=0;i<process_count;i++){
		for(j=0;j<resource_count;j++){
			need[i][j] = max[i][j] - allocation[i][j];
		}
	}
	
	//Checking if need<=allocation
	int flag=0, flag_arr[resource_count],counter=0;
	
	for(i=0;i<resource_count;i++){
		flag_arr[i] = -1;
	}
	
	printf("\nSafe state: \n");
	while(counter!=process_count){
		for(i=0;i<process_count;i++){
			for(j=0;j<resource_count;j++){
				if(need[i][j] > available[j]){
					flag=1;
					break;
				}
				flag=0;
			}
			if(flag==0 && flag_arr[i]!=1){
				for(k=0;k<resource_count;k++){
					available[k]+=allocation[i][k];
				}
				flag_arr[i] = 1;
				printf("P%d ",i);
				counter++;
			}
		}
	}
	return 0;
}
