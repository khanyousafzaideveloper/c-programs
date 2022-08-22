#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *MyFunction(void *x)
{
    printf("Inside Function");
}

int main()
{
    pthread_t thread_id;

    printf("Outside Function\n");

    pthread_create(&thread_id, NULL, MyFunction, NULL);
    pthread_join(thread_id, NULL);
}
