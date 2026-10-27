#include <stdio.h>
#include <pthread.h>
void *study(void *a){ printf("Student is using a study desk\n"); return NULL; }
int main(){
pthread_t s[5];
for(int i=0;i<5;i++)
pthread_create(&s[i],NULL,study,NULL);
for(int i=0;i<5;i++)
pthread_join(s[i],NULL);
return 0; }
