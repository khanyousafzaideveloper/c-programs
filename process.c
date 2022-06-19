#include <stdio.h>
#include<sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    pid = fork();


     printf("%d\n", pid);
    
       execlp("/bin/ls", "ls", NULL);
    
       // printf("%d\n", pid);
        wait(NULL);
       // printf("%d\n", pid);
       // printf("child complete");
       
}