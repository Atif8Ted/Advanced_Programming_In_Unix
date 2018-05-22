#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t process_id=getpid();
    pid_t parent_id=getppid();
    printf("My id is %d and parent id is %d",process_id,parent_id);
    
}

