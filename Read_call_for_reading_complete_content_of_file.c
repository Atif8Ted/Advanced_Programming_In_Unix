#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    int fd;
    char buf[2];
    int ret_in,ret_out;
     fd=open("FILE_IO_FUNCTIONS.c",O_RDONLY);
    if(fd>0){
        while(ret_in=read(fd,&buf,sizeof(buf))>0){
            printf("%s",buf);
            
        }

    }
    close(fd);

}