#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main(){
    int fd;
    off_t ret;
    char buff[50];
    
    fd=open("Read_call.c",O_RDONLY);
    ret=lseek(fd,(off_t) 10,SEEK_SET); //
    if(ret==(off_t)-1){
        perror("Retrieval error");
        exit(0);
    }
    if(read(fd,buff,sizeof(buff))>0){
        puts(buff);
    }

    //setting file position at end of the file.
    int pos=lseek(fd,0,SEEK_END);
    //setting file position to current position.
    pos=lseek(fd,0,SEEK_CUR);

    //it is even possibel to ask lseek to advance the pointer
    //even after the EOF  Ex:
    ret=lseek(fd,(off_t)1688,SEEK_END);

}