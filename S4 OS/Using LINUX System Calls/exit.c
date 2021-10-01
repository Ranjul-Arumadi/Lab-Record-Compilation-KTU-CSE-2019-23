#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f = fopen("fork.c", "r");
	if(f==NULL){
		printf("File does not exit");
		exit(1);
	}
	else{
		printf("File exists");
	}
	return 0;
}
