# Multi-threaded Withdrawal and Deposit Program

This repository contains two versions of a multi-threaded withdrawal and deposit program implemented in C using pthreads:

1. Race Version (Without Mutex): Demonstrates a scenario where multiple threads perform withdrawals and deposits without synchronization, leading to race conditions.
2. No Race Version (With Mutex): Uses mutex locks to ensure thread-safe access to the account balance, preventing race conditions.

## Program Description

The program simulates a banking system where users can withdraw and deposit money into their accounts. Each user is responsible for recording their original balance, the amount to be deposited or withdrawn, and the remaining balance after each transaction. The program checks if the deposit or withdrawal operation maintains the correct balance based on the transaction amount.

## Usage

### Race Version

Compile the race version using the following command:

```bash
gcc -o race race.c -lpthread
./race
```
The race version demonstrates the effects of race conditions when multiple threads access shared data without proper synchronization.
### No Race Version
Compile the no race version using the following command:

```bash
Copy code
gcc -o norace norace.c -lpthread
./norace
```
The no race version uses mutex locks to ensure thread-safe access to shared data, preventing race conditions.

## Results
### Race Version (Without Mutex)
The race version may produce unpredictable results due to race conditions. Running the program multiple times can lead to different final balances, highlighting the importance of synchronization in multi-threaded applications.

### No Race Version (With Mutex)
The no race version ensures the correctness of account balance calculations by using mutex locks for synchronization. Running the program multiple times will always yield the expected final balance, demonstrating the effectiveness of synchronization mechanisms.

## Conclusion
The race and no race versions showcase the impact of race conditions on program behavior and the importance of synchronization techniques like mutex locks in multi-threaded programming. Understanding and addressing race conditions are crucial for developing robust and reliable multi-threaded applications.
