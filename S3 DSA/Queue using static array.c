/*
Notes:

Queue using static array
------------------------

Insert from rear only 
Delete from front
Front always point to the first location
Initially rear points to first location
After dequeue we have the shift the elements by one step to the front 
*/

#include<stdio.h>
#define size 10
int queue[size];
int f=0,r=0;
void enqueue();
void dequeue();
void display();
int main(){
	int input,flag=1;
	while(flag==1){
		printf("\nEnter choice 1:enqueue 2:dequeue 3:display 4:exit");
		scanf("\n%d",&input);
		switch(input){
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;	
			case 4: flag=0;
					break;		
			default: printf("\nWrong input");
		}
	}
	return 0;
}
void enqueue(){
	int value;
	
	if(r==size){
		printf("Queue is full!");
		return;
	}
	else{
		printf("\nEnter the element");
		scanf("\n%d",&value);
		queue[r++]=value;
	}
	display();
}
void dequeue(){
	if(f==r){
		printf("\nEmpty queue!");
		return;
	}
	else{
		printf("Deleted value is %d \n",queue[f]);
		//shifting of elements
		for(int i=0;i<r-1;i++){      //upto r-1 only
			queue[i] = queue[i+1];
		}
		r--;
	}
	display();
}
void display(){
	if(f==r){
		printf("\nEmpty queue!");
		return;
	}
	for(int i=f;i<r;i++){
		printf("\t%d",queue[i]);
	}
}
