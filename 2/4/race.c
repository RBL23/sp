#include <stdio.h>
#include <pthread.h>

int balance = 1000;

void *withdraw(void *arg) {
    int amount = *((int *)arg);
    balance -= amount;
    printf("Withdrawal: $%d\n", amount);
    printf("Remaining balance: $%d\n", balance);
    return NULL;
}

void *deposit(void *arg) {
    int amount = *((int *)arg);
    balance += amount;
    printf("Deposit: $%d\n", amount);
    printf("Remaining balance: $%d\n", balance);
    return NULL;
}

int main() {
    pthread_t threads[2];
    int withdraw_amount = 200;
    int deposit_amount = 500;

    pthread_create(&threads[0], NULL, withdraw, &withdraw_amount);
    pthread_create(&threads[1], NULL, deposit, &deposit_amount);

    pthread_join(threads[0], NULL);
    pthread_join(threads[1], NULL);

    return 0;
}
