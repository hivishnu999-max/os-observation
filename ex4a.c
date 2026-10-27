#include<stdio.h>
#include<pthread.h>
pthread_mutex_t m;
void*ot(void*x){
pthread_mutex_lock(&m);
printf("Surgery Running\n");
pthread_mutex_unlock(&m);}
int main(){
pthread_t t1,t2;
pthread_mutex_init(&m,0);
pthread_create(&t1,0,ot,0);
pthread_create(&t2,0,ot,0);
pthread_join(t1,0);
pthread_join(t2,0);
pthread_mutex_destroy(&m);
}
