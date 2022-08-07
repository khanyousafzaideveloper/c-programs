#include <stdio.h>
#include <unistd.h>

void main()
{
    pid_t fork_id;

    fork();
    fork_id = getpid();
   
    printf("%d", fork_id);
}
