#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *MyFunction(void *x)
{
    printf("Inside a Function\n");
}
int main()
{
    pthread_t thread_id;

    printf("Outside a Function\n");

    int num = 123;

    pthread_create(&thread_id, NULL, MyFunction, &num);
    
    pthread_join(thread_id, NULL);
}
