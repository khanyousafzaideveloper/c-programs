#include <stdio.h>
#include <unistd.h>

void main()
{
    pid_t id1, id2;
    id1 = fork();
    id2 = fork();
    printf("\nThis is some random code : %d and %d", id1, id2);

}