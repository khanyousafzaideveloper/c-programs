// Name: Ahmad Abid
// Rollno: 55 Batch: 23 

#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void *DingDong(void *arg)
{
    printf("Ding\n");
}

void *DongDing(void *arg)
{
    //sleep(1);
    printf("Dong\n");
}

int main()
{
    pthread_t id1, id2;
    long var1, var2;

    for(int counter=1; counter < 5; counter++)
        {
            var1 = pthread_create(&id1, NULL, &DingDong, (void *) &counter);
                if(var1 !=0)
                {
                    printf("Thread not created successfully for Ding Dong.\n");
                }
            var2 = pthread_create(&id2, NULL, &DongDing, (void *) &counter);
                if(var2 !=0)
                {
                    printf("Thread not created successfully for Dong Ding.\n");
                }
        }
        pthread_exit(NULL);
}