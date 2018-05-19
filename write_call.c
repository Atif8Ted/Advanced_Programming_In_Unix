#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>


int main(){
    char buf[2];
    int ret;
    int source_fd,dest_fd;

    source_fd=open("Read_call.c",O_RDONLY); 
    if(source_fd==-1){
        perror("SOURCE FILE ERROR");
        exit(0);
    }
    else{
        dest_fd=open("new_file",O_WRONLY|O_CREAT,0641);
        if(dest_fd==-1){
            perror("DESTINATION FILE ERROR");
            exit(0);
        }
        else{
            while(ret=read(source_fd,&buf,sizeof(buf))>0){
                write(dest_fd,&buf,sizeof(buf));
            }
            close(source_fd);
    close(dest_fd);
        }
    }
    return 0;
    
}