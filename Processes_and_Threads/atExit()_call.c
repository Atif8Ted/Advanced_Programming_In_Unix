#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>

void out(void){
    printf("atexit() succeeded\n");

}

int main(){
    if(atexit(out)){
        fprintf(stderr,"atexit () failed \n");
    }
    return 0;

}