#include <pthread.h>
#include<stdio.h>

void* threadFunction(void* args)
{
    printf("I am a thread function. \n");
}

int main()
{
    // creating thread id
    pthread_t id;
    int ret;
    // creating thread
    ret = pthread_create(&id, NULL, &threadFunction, NULL);
    if(ret==0)
    {printf("Thread created successfully \n");}
    else
    {
        printf("Thread not created successfully. \n");
        return 0;
    }

    printf("I am main function \n");
    return 0;

}
