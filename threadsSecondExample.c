#include <stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void* MythreadFun(void* vargp)
{
    sleep(1);
    printf("My first thread\n");
    return NULL;

}
int main()
{
    pthread_t thread_id;    
    printf("Before thread\n");
    pthread_create(&thread_id, NULL, MythreadFun, NULL);
    pthread_join(thread_id, NULL);
    exit(0);
}
