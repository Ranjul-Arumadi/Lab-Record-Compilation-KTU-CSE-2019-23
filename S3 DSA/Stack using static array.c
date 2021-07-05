/*
Notes:

Stack using static array
------------------------

LIFO
All operations from the top of the stack

*/
#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push();
void pop();
void display();
int main(){
	int input,flag=1;
	while(flag==1){
		printf("\nEnter choice 1:push 2:pop 3:display 4:exit");
		scanf("\n%d",&input);
		switch(input){
			case 1: push();
					break;
			case 2: pop();
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
void push(){
	if(top==size){
		printf("\nStack is full!");
	}
	else{
		int x;
		printf("\nEnter value : ");
		scanf("%d",&x);
		stack[++top]=x;
	}
}
void pop(){
	if(top==-1){
		printf("\nStack is empty!");
	}
	else{
		printf("Deleting %d",stack[top]);	
		top--;
	}
}
void display(){
	if(top==-1){
		printf("\nStack is empty!");
	}
	for(int i=0;i<=top;i++){
		printf("%d\t",stack[i]);
	}
}
