#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>

int main(){
    int fd;
    fd=creat("new_file",0644);
    if(fd<0){
        perror("new_file");
    }
    else{
        printf("Success");
    }
}