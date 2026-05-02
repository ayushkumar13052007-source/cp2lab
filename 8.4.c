#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int item = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* producer(void* arg) {
    while (1) {
        pthread_mutex_lock(&mutex);
        if (item < 10) {
            item++;
            printf("Producer: item = %d\n", item);
        } else {
            printf("Producer: Buffer full (item=10)\n");
        }
        pthread_mutex_unlock(&mutex);
        sleep(1);
    }
    return NULL;
}

void* consumer(void* arg) {
    while (1) {
        pthread_mutex_lock(&mutex);
        if (item > 0) {
            item--;
            printf("Consumer: item = %d\n", item);
        } else {
            printf("Consumer: Buffer empty (item=0)\n");
        }
        pthread_mutex_unlock(&mutex);
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t prod, cons;
    
    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);
    
    sleep(10);  // Run for 10 seconds
    return 0;
}