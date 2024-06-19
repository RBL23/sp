#include <stdio.h>
#include <pthread.h>

int balance = 1000;
pthread_mutex_t lock;

void *withdraw(void *arg) {
    int amount = *((int *)arg);
    pthread_mutex_lock(&lock);
    balance -= amount;
    printf("Withdrawal: $%d\n", amount);
    printf("Remaining balance: $%d\n", balance);
    pthread_mutex_unlock(&lock);
    return NULL;
}

void *deposit(void *arg) {
    int amount = *((int *)arg);
    pthread_mutex_lock(&lock);
    balance += amount;
    printf("Deposit: $%d\n", amount);
    printf("Remaining balance: $%d\n", balance);
    pthread_mutex_unlock(&lock);
    return NULL;
}

int main() {
    pthread_t threads[2];
    int withdraw_amount = 200;
    int deposit_amount = 500;

    pthread_mutex_init(&lock, NULL);

    pthread_create(&threads[0], NULL, withdraw, &withdraw_amount);
    pthread_create(&threads[1], NULL, deposit, &deposit_amount);

    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);

    pthread_mutex_destroy(&lock);

    return 0;
}
