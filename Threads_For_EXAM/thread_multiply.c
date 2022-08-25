#include <stdio.h>
#include <pthread.h>

void *square(void *arg)
{
    int *y = (int*)arg; 
    printf("This is thread: %d\n", (*y) * (*y));
    return NULL;
}

int main()
{
    pthread_t id;
    int x =  4;
    pthread_create(&id, NULL, square, (void*)&x);
    pthread_join(id, NULL);
    return 0; 
}