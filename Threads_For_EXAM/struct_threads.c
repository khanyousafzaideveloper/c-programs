#include <stdio.h>
#include <pthread.h>

struct vals
{
    int x;
    int y;
};


void* thread(void *args)
{
    struct vals* v = (struct vals*)args;
    printf("thread 1\n");
    printf("x = %d\n", v ->x);
    printf("y = %d\n", v ->y);
    return NULL;   
}

int main()
{
    pthread_t id;

    struct vals v;

    v.x = 10;
    v.y = 20;
     
    pthread_create(&id, NULL, thread,(void*)&v);
    pthread_join(id, NULL);
    
}