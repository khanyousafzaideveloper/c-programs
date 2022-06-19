#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int main()
{
    pthread_t id1, id2;

    printf(pthread_equal(id1, id2));



}
