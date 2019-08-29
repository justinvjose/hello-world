#include<stdio.h>
#include<pthread.h>
void *thread1(void *arg)
{
printf("Hello ");
}
void *thread2(void *arg)
{
printf("World ");
}
 int main()
{
 pthread_t id1,id2;
 pthread_create(&id1,NULL,thread1,NULL);
 pthread_join(id1,NULL);
 pthread_create(&id2,NULL,thread2,NULL);
 pthread_join(id2,NULL);
 printf("Bye");
 return 0;
}
