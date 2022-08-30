#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>

int main()
{
    pid_t pid;
    int status;
    int arg;
    pid = fork();

    if(pid==0)
    {
        printf("Hello from Child\n");
    }
    else
    { 
        wait(&status);
        printf("Hello from Parent: %d\n", status);
    }
   // exit(arg);
}