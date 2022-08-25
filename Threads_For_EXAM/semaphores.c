#include <stdio.h>
#include<pthread.h>
#include <semaphore.h>

sem_t s1, s2, s3;

void* thread1(void *args)
{
    sem_wait(&s3);
    printf("This is thread 1");
    return NULL;
}

void* thread2(void *args)
{
    sem_wait(&s2);
    printf("This is thread 2");
    sem_post(&s3);
    return NULL;
}

void* thread3(void *args)
{
    sem_wait(&s1);
    printf("This is thread 3");
    sem_post(&s2);
    return NULL;
}

int main()
{
    sem_init(&s1, 0, 0);
    sem_init(&s2, 0, 0);
    sem_init(&s3, 0, 0);

    pthread_t id1, id2, id3;

    pthread_create(&id1, NULL, thread1, NULL);
    pthread_create(&id2, NULL, thread2, NULL);
    pthread_create(&id3, NULL, thread3, NULL);   

    pthread_join(id1, NULL);
    pthread_join(id2, NULL);
    pthread_join(id3, NULL);

    sem_destroy(&s1);
    sem_destroy(&s2);
    sem_destroy(&s3);
}