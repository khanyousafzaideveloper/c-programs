// Name: Ahmad Abid
// RollNo: 55
// Batch 23

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>



void* first_thread_fun(void *arg)
{
    printf("I am thread number 1.\n");
}
void* second_thread_fun(void *arg)
{
    sleep(1);
    printf("I am thread number 2.\n");
}
void* third_thread_fun(void *arg)
{
    printf("I am thread number 3.\n");
}
void* fourth_thread_fun(void *arg)
{
    sleep(1);
    printf("I am thread number 4.\n");
}
void* fifth_thread_fun(void *arg)
{
    printf("I am thread number 5.\n");
}

int main()
{
    pthread_t id1, id2, id3, id4, id5;   
    //long var1, var2, var3, var4, var5;
    pthread_create(&id1, NULL, &first_thread_fun, NULL);
    pthread_create(&id2, NULL, &second_thread_fun, NULL);
    pthread_create(&id3, NULL, &third_thread_fun, NULL);
    pthread_create(&id4, NULL, &fourth_thread_fun, NULL);
    pthread_create(&id5, NULL, &fifth_thread_fun, NULL);

    pthread_exit(NULL);
}