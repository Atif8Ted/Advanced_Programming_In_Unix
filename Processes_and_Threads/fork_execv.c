#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    pid_t pid;
    pid=fork(); 

    if(pid==-1){
        perror("FOrk");

    }
    if(pid==0){
        const char *args[]={"windlass",NULL};
        int ret;
        ret=execv("bin/windlass",args);
        if(ret==-1){
            perror("execv");
            exit(EXIT_FAILURE);
        }
    }
}