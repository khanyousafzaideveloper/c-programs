#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *Func1(void *x)
{
    while(1)
    {
    sleep(2);
    printf("This is function 1: .........\n");
    }
}
void Func2()
{
    while(1)
    { 
        sleep(2);
        printf("This is Function 2: ________\n");
    }
}
int main()
{
    pthread_t thread_id;

    pthread_create(&thread_id, NULL, Func1, NULL);
    Func2();
}