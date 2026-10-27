#include <stdio.h>
#include <pthread.h>
pthread_rwlock_t lock = PTHREAD_RWLOCK_INITIALIZER;
int flight = 120;
void *reader(void *arg) { pthread_rwlock_rdlock(&lock);
printf("Controller: Flight %d\n", flight);
pthread_rwlock_unlock(&lock); return NULL; }
void *writer(void *arg) { pthread_rwlock_wrlock(&lock);
flight = 135;
printf("System: Flight Updated to %d\n", flight); pthread_rwlock_unlock(&lock); return NULL; }
int main() {
pthread_t r1, r2, w;
pthread_create(&r1, NULL, reader, NULL);
pthread_create(&r2, NULL, reader, NULL);
pthread_create(&w, NULL, writer, NULL);
pthread_join(r1, NULL);
pthread_join(r2, NULL);
pthread_join(w, NULL);
return 0; }
