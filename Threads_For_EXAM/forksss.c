#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t id;
    id = fork();
    printf("%d\n", id);
}