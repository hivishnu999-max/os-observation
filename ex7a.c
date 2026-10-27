#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
pthread_mutex_t seat=PTHREAD_MUTEX_INITIALIZER,refund=PTHREAD_MUTEX_INITIALIZER;
void* c1(void*x){pthread_mutex_lock(&seat);
sleep(1);pthread_mutex_lock(&refund);}
void* c2(void*x){pthread_mutex_lock(&refund);
sleep(1);pthread_mutex_lock(&seat);}
int main(){pthread_t a,b;
pthread_create(&a,0,c1,0);
pthread_create(&b,0,c2,0);
pthread_join(a,0);
pthread_join(b,0);}
