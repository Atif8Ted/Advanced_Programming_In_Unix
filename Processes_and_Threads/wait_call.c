/*
pid_t wait (int *status);

A call to wait( ) returns the pid of a terminated child, or -1 on error. If no child has
terminated, the call blocks until a child terminates. If a child has already terminated, the call
returns immediately. Consequently, a call to wait( ) in response to news of a child's demise—
say, upon receipt of a SIGCHLD—will always return without blocking.
*/

/*
Error Values:
ECHILD
The calling process does not have any children.
EINTR
A signal was received while waiting, and the call returned early.
*/

/* the standard provides a
family of macros for interpreting the parameter:
#include <sys/wait.h>

int WIFEXITED (status);
int WIFSIGNALED (status);
int WIFSTOPPED (status);
int WIFCONTINUED (status);
int WEXITSTATUS (status);
int WTERMSIG (status);
int WSTOPSIG (status);
int WCOREDUMP (status);*/


#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){
    int status;
    pid_t pid;

    if(!fork()){
        // return 1; // will give normal execution wth retunr =1;
        abort(); // will give output as Killed by signal=6 (dumped core)

    }
    
    pid=wait(&status);
    if(pid==-1){
        perror("Wait");
    }
    printf("pid=%d\n",pid);

    if(WIFEXITED(status)){
        printf("Normal Execution with exit status=%d \n",WEXITSTATUS(status));

    }

    if (WIFSIGNALED (status)){
        printf ("Killed by signal=%d%s\n",
        WTERMSIG (status),
        WCOREDUMP (status) ? " (dumped core)" : "");
    }

    if (WIFSTOPPED (status))  {
        printf ("Stopped by signal=%d\n",
        WSTOPSIG (status));
        
    }

if (WIFCONTINUED (status)){
        printf ("Continued\n");
}
    
    return 0;

}