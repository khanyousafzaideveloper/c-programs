#include <stdio.h>
#include<sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    pid = fork();


    // printf("%d\n", pid);

    if (pid<0)
    {
        fprintf(stderr , "Fork failed");
    }
    else if (pid == 0)
    {
        execlp("/home/ahmaday/Documents/python", "ls", NULL);
    }
    else
    {
        printf("%d\n", pid);
        wait(NULL);
        printf("%d\n", pid);
        printf("child complete");
    }    
}