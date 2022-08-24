#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


void *thread1(void * arg)
{
    sleep(1);
    printf("This is Thread 1\n");
    return NULL;

}

void *thread2(void * arg)
{
    sleep(2);
    printf("This is Thread 2\n");
    return NULL;
}
void *thread3(void * arg)
{
    printf("This is Thread 3\n");
    return NULL;
}
void *thread4(void * arg)
{
    sleep(2);
    printf("This is Thread 4\n");
    return NULL;
}
void *thread5(void * arg)
{
    sleep(2);
    printf("This is Thread 5\n");
    return NULL;
}

int main()
{
    pthread_t id1, id2, id3, id4, id5;

    pthread_create(&id1, NULL, thread1, NULL);
    pthread_create(&id2, NULL, thread2, NULL);
    pthread_create(&id3, NULL, thread3, NULL);
    pthread_create(&id4, NULL, thread4, NULL);
    pthread_create(&id5, NULL, thread5, NULL);

    pthread_join(id1, NULL);
    pthread_join(id2, NULL);
    pthread_join(id3, NULL);
    pthread_join(id4, NULL);
    pthread_join(id5, NULL);
}