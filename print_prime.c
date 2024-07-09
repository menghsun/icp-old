// Print all prime numbers from 2 to 10000.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    for (int i = 2; i <= 10000; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
