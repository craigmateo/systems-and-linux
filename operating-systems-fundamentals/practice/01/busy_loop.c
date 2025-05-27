#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For getpid()

// This program runs an infinite loop to keep the CPU busy.
// It counts upwards indefinitely and periodically prints
// its own process ID (PID) and the current count.
// This simulates a CPU-intensive process useful for testing
// CPU scheduling and priorities.

int main() {
    unsigned long long counter = 0;  // A large counter variable to count iterations

    while (1) {  // Infinite loop to keep the program running and consuming CPU
        counter++;  // Increment the counter on each loop iteration

        // Every 1,000,000,000 iterations, print the current PID and count
        if (counter % 1000000000 == 0) {
            printf("PID %d has counted to %llu\n", getpid(), counter);
        }
    }

    return 0;  // This line is never reached because of the infinite loop
}
