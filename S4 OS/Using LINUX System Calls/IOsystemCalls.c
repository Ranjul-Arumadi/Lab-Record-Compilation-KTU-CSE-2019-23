/*
lseek(file-var,offsetvalue,offset-position)

examples:
lseek(fd,5,SEEK_SET) – this moves the pointer 5 positions ahead starting from the beginning of the file
lseek(fd,5,SEEK_CUR) – this moves the pointer 5 positions ahead from the current position in the file
lseek(fd,-5,SEEK_CUR) – this moves the pointer 5 positions back from the current position in the file
lseek(fd,-5,SEEK_END) -> this moves the pointer 5 positions back from the end of the file

*/
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(){
	
	int fd;
	char buffer[100];
	char msg[100] = "hello!";
	
	//syntax open("file-name","opening-method");
	fd = open("test.txt",O_RDWR); 
	//O-RDWR means OPEN in READ, WRITE mode
	
	if(fd!=-1){
		printf("File exists\n");
		
		//write message to the file
		//syntax- write(file-var,message,sizeofmessage[sizeof(msg-var-name)])
		write(fd,msg,sizeof(msg));
		
		//sets cursor to the beginning of the file
		lseek(fd,0,SEEK_SET);
		
		//read from the file
		//read a sizeof() quantity into the buffer
		read(fd,buffer,sizeof(msg));
		
		printf("File content: %s",buffer);
		
		close(fd);
		//finally close the file
		
	}
	else{
		printf("File does not exist. Create a file using touch command");
	}
	return 0;
}
