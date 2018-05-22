
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    pid_t pid;
    pid=fork();
    if(pid>0){
        printf("I am the parent with pid =%d\n",pid);
    }
    else if(!pid){
        printf("I am the baby\n");
    }

    else if(pid==-1){
        perror("FOrk");
    }
}