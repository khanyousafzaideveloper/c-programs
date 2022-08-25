#include <stdio.h>
#include<pthread.h>
#include <semaphore.h>

sem_t sem;

void* thread1(void *args)
{
    sem_wait(&sem);
    printf("This is thread 1");
    return NULL;
}

void* thread2(void *args)
{
    printf("This is thread 2");
    sem_post(&sem);
    return NULL;
}


int main()
{
    sem_init(&sem, 0, 0);
    

    pthread_t id1, id2;

    pthread_create(&id1, NULL, thread1, NULL);
    pthread_create(&id2, NULL, thread2, NULL);
  

    pthread_join(id1, NULL);
    pthread_join(id2, NULL);
    
    sem_destroy(&sem);
}