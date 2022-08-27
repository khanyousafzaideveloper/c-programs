#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void interrupt_handler(int num)
{
    printf("I won't die\n");
}

int main()
{
    signal(SIGINT, interrupt_handler);
    while (1)           
    {
        printf("Wasting your time\n");                   
        sleep(1);               
    }
    return 0;
}