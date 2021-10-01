/*
Stat():

Stat system call is a system call in Linux to check the status of a file. The stat() system call actually returns file attributes. 

An inode contains the metadata of the file. An inode contains: the type of the file, the size of the file, when the file was accessed (modified, deleted) that is time stamps, and the path of the file, the user ID and the group ID, links of the file, and physical address of file content.

Required headerfiles:
#include<sys/stat.h>


struct stat
{
  mode_t         st_mode;
  ino_t          st_ino;
  dev_t          st_dev;
  dev_t          st_rdev;
  nlink_t        st_nlink;
  uid_t          st_uid;
  gid_t          st_gid;
  off_t          st_size;
  struct timspec st_atim;
  struct timspec st_mtim;
  struct timspec st_ctim;
  blksize_t      st_blksize;
  blkcnt_t       st_blocks;
};


lx, d, o : possible data types 

Syntax:
-------
stat("filename", &varAssociatedWithStruct);


there is a struct defined in sys/stat so using the stat() we provide it with the file name and the struct var associated with it to get the required o/p.
*/
#include<stdio.h>
#include<sys/stat.h>
int main(){
	
	
	//pointer to stat struct
  struct stat sfile;

  //stat system call
  stat("fork.c", &sfile);

  //accessing st_mode (data member of stat struct)  
  printf("st_mode = %lx", sfile.st_size);
	return 0;
}
