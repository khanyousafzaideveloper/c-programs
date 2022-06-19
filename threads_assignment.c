#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* print_dong_ding(void* args)
{
  for(int i = 0; i < 4; i++){
    printf("dong ding\n");
  }
  return NULL;
}

void* print_ding_dong(void* args)
{
  for(int i = 0; i < 4; i++){
    printf("ding dong\n");
  }

  printf("-----------------\n");

  pthread_t t2;
  pthread_create(&t2, NULL, print_dong_ding, NULL);
  pthread_join(t2, NULL);

  return NULL;
}

int main()
{
  pthread_t t1;
  pthread_create(&t1, NULL, print_ding_dong, NULL);
  pthread_join(t1, NULL);
  return 0;
}
