#include <stdio.h>
#include <unistd.h>

void main()
{
    pid_t id;
    id = fork();
    printf("\nThis is some random code : %d", id);

}