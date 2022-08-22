#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>


void* mythreadFunc(void *a)
{
    sleep(1);
    printf("From Function");
    return NULL;
}

void main()
{
    pthread_t thread_id;

    printf("Before Thread");

    pthread_create(&thread_id, NULL, mythreadFunc, NULL);
    //pthread_join(thread_id, NULL);
    printf("After Thread");
    //exit(0);
}