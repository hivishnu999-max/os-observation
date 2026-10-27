#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void*run(void*x){
printf("Runway Light Active\n");}
int main(){pthread_t t;
if(fork()==0){
pthread_create(&t,0,run,0);
pthread_join(t,0);}
else{
pthread_create(&t,0,run,0);
pthread_join(t,0);
printf("Warning Light ON\n");
}
}
