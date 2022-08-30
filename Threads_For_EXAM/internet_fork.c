#include <stdio.h>
#include <unistd.h>
    
int main(void)
{
        fork();
        if( fork() == 0 ) {
                fork();
        }
        printf("Hello world: %d\n", getpid());
}