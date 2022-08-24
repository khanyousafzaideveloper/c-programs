#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *MyFunction(void *arg)
{
    printf("I am string inside a Function\n");
    pthread_exit(0);
}

int main()
{
    pthread_t thread_id;
    //pthread_attr_t attr;
    //pthread_attr_init(&attr);
    // int num = 123;
    printf("Hi, This is some random String outside function\n");
    pthread_create(&thread_id, NULL, MyFunction, NULL);

    pthread_join(thread_id, NULL);

}