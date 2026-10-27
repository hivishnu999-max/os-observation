#include<stdio.h>
#include<pthread.h>
void*e(void*x){
printf("Edge Lights ON\n");}
void*c(void*x){
printf("Center Lights ON\n");}
void*w(void*x){
printf("Warning Lights ON\n");}
int main(){
pthread_t t1,t2,t3;
pthread_create(&t1,0,e,0);
pthread_create(&t2,0,c,0);
pthread_create(&t3,0,w,0);
pthread_join(t1,0);
pthread_join(t2,0);
pthread_join(t3,0);
}
