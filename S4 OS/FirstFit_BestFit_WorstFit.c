/******************************************************************************
First Fit, Best Fit, Worst Fit Algorithms
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void firstfit(int memory[],int process[], int memorySize, int processSize);
void bestfit(int memory[],int process[], int memorySize, int processSize);
void worstfit(int memory[],int process[], int memorySize, int processSize);
void display(int memory[],int process[], int memorySize, int processSize);

int main()
{
    int i,j,memorySize,processSize,choice;
    
	printf("Enter size of memory block: ");
    scanf("%d",&memorySize);
	
	printf("Enter size of process block: ");
    scanf("%d",&processSize);
    
	int memoryBlock[memorySize], processBlock[processSize];
    
	printf("Enter memory block values: ");
    for(i=0;i<memorySize;i++){
        scanf("%d",&memoryBlock[i]);
    }
    printf("Enter process block values: ");
    for(i=0;i<processSize;i++){
        scanf("%d",&processBlock[i]);
    }
    do{
        printf("\n\n\nChoose memory management algorithm: 1-first fit | 2-best fit | 3-worst fit | 4-exit\n\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: firstfit(memoryBlock,processBlock,memorySize,processSize);
                    break;
            case 2: bestfit(memoryBlock,processBlock,memorySize,processSize);
                    break;
            case 3: worstfit(memoryBlock,processBlock,memorySize,processSize);
                    break;
            case 4: printf("Exiting..");
                    exit(0);
            default: printf("Wrong input");        
        }
    }while(choice>0 && choice<5);

    return 0;
}

void firstfit(int memory[],int process[], int memorySize, int processSize){
    int i,j;
	
	int allocation[memorySize];
	for(i=0;i<memorySize;i++){
		allocation[i]=-1;
	}
	
	for(i=0;i<processSize;i++){
		for(j=0;j<memorySize;j++){
			//printf("\n%d\n",process[i]);
			//printf("\n%d\n",memory[i]);
			if(process[i]<memory[j] && allocation[j]==-1){
				allocation[j]=i;
				//memory[j]-=process[i];
				break;
			}
		}
	}
	display(memory,allocation,memorySize,processSize);
}
// /*
// Logic used to get highest value in BESTFIT:

// #include<stdio.h>
// int main(){
	// int arr[]={123,124,34,908,125,456};
	// int item=124;
	// int temp,flag=0;
	// for(int i=0;i<6;i++){
		// if(arr[i]>=item && flag==0){
			// temp=arr[i];
			// flag=1;
		// }
		// if(arr[i]>=item && arr[i]<temp && flag==1){
			// temp=arr[i];
		// }
	// }
	// printf("%d",temp);
// }
// */
void bestfit(int memory[],int process[], int memorySize, int processSize){
    int i,j;
	
	int allocation[memorySize];
	for(i=0;i<memorySize;i++){
		allocation[i]=-1;
	}
	int temp,flag=0,memoryLocation;
	//200 400 600 500 300 250 j
	//357 210 468 491 i
	//-1 0 -1 -1 -1 -1 -1 allocation
	for(i=0;i<processSize;i++){
		//printf("\ni = %d\n",i);
		for(j=0;j<memorySize;j++)
		{	
			//printf("\nj = %d\n",j);
			
			// printf("\nmemory = %d\n",memory[j]);
			// printf("\nprocess = %d\n",process[i]);
			
			if(memory[j]>=process[i] && flag==0 && allocation[j]==-1 ){
				
				//printf("\nifONE\n");
				
				temp=memory[j]; 
				memoryLocation=j; 
				flag=1;
			}
			if(memory[j]>=process[i] && memory[j]<temp &&  allocation[j]==-1 && flag==1){
				
				//printf("\nifTWO\n");
				
				temp=memory[j];
				memoryLocation=j;
			}
		}
		if(flag==1){
			//printf("\nallocating\n");
			allocation[memoryLocation]=i;
			//printf("\nINDEX VALUE: %d\n",memoryLocation);
			//memory[j]=memory[j]-process[i];
			flag=0;
		}
	}
	
	display(memory,allocation,memorySize,processSize);
}

void worstfit(int memory[],int process[], int memorySize, int processSize){
    int i,j;
	
	int allocation[memorySize];
	for(i=0;i<memorySize;i++){
		allocation[i]=-1;
	}
	int temp,flag=0,memoryLocation;
	//200 400 600 500 300 250 j
	//357 210 468 491 i
	//-1 0 -1 -1 -1 -1 -1 allocation
	for(i=0;i<processSize;i++){
		//printf("\ni = %d\n",i);
		for(j=0;j<memorySize;j++)
		{	
			//printf("\nj = %d\n",j);
			
			//printf("\nmemory = %d\n",memory[j]);
			//printf("\nprocess = %d\n",process[i]);
			
			if(memory[j]>=process[i] && flag==0 && allocation[j]==-1 ){
				
				//printf("\nifONE\n");
				
				temp=memory[j]; 
				memoryLocation=j; 
				flag=1;
			}
			if(memory[j]>=process[i] && memory[j]>temp &&  allocation[j]==-1 && flag==1){
				
				//printf("\nifTWO\n");
				
				temp=memory[j];
				memoryLocation=j;
			}
		}
		if(flag==1){
			//printf("\nallocating\n");
			allocation[memoryLocation]=i;
			//printf("\nINDEX VALUE: %d\n",memoryLocation);
			//memory[j]=memory[j]-process[i];
			flag=0;
		}
	}
	
	display(memory,allocation,memorySize,processSize);
}

void display(int memory[],int allocation[], int memorySize, int processSize){
	int i,j;
	printf("\n");
	for(i=0;i<memorySize;i++){
		if(allocation[i]==-1){
			printf("X\t");
		}
		else{
			printf("P%d\t",allocation[i]);
		}
	}
	printf("\n");
	for(i=0;i<memorySize;i++){
		printf("%d\t",memory[i]);
	}
}
