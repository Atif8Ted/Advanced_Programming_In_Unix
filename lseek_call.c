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

    

}