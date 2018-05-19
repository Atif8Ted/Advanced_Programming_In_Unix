#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    // unsigned long word; //buffer
    char buff[200]; // buffer
    ssize_t bytes_read;
    int fd;
    fd=open("open_call.c",O_RDONLY);
    if(fd>0){
        printf("Open Succesfull\n");
        bytes_read=read(fd,&buff,sizeof(buff));
        // puts(buff); // although it is not safe to use puts and gets but i have used just for my convenience.
        printf("%s",buff);
        
        if(bytes_read==-1){
            printf("Error , Can't read from file\n");
        }
        else{
            printf("%ld Bytes read from file",bytes_read);
        }

    }
    else{
        perror("open_call.c");
    }
}