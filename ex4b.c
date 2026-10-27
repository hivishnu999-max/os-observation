#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
sem_t s;
void*ot(void*x){
sem_wait(&s);
printf("Nurse Entered OT\n");
sem_post(&s);}
int main(){
pthread_t t1,t2;
sem_init(&s,0,1);
pthread_create(&t1,0,ot,0);
pthread_create(&t2,0,ot,0);
pthread_join(t1,0);
pthread_join(t2,0);
sem_destroy(&s);}
