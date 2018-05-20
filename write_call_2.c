#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(){
    int fd;
    fd=open("open_call.c",O_RDONLY);
    if(fd==-1){
        puts("Error Opening file0");
        exit(0);        
    }
    
    void *buf=(char*)malloc(120);
    // int count =read(fd,buf,120);
    // printf("count : %d\n",count);
    // printf("%s \n",buf);
    int fd2;
    fd2=open("new_file1",O_WRONLY|O_CREAT|O_TRUNC,0644);

    if(fd2==-1){
        puts("Error opening file1");
        exit(0);
    }
    int c;
    while(read(fd,buf,sizeof(buf))>0){
        c=write(fd2,buf,sizeof(buf));
    }
    if(c==-1){
        puts("Error Writing file2");
        exit(0);
    }
    close(fd2);
    close(fd1);
}