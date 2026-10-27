#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
sem_t s;
void monitor(){sem_wait(&s);
printf("OT Access Granted\n");
sem_post(&s);}
void*doc(void*x){monitor();}
int main(){
pthread_t t1,t2;
sem_init(&s,0,1);
pthread_create(&t1,0,doc,0);
pthread_create(&t2,0,doc,0);
pthread_join(t1,0);
pthread_join(t2,0);
sem_destroy(&s);}
