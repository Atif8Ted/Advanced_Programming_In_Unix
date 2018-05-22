#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>


int main(){
    int ret=execl("/bin/vim","vim",NULL);
    if(ret==-1){
        perror("Error has occured\n");
    }
        else{
            printf("%d\n",ret);
        }
    
}