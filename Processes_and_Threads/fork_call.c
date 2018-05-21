#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int pid;
    printf("Start of test\n");
    pid=fork(); // return two process id , one for chile and one for parent.
    printf("Returned %d \n",pid);
}