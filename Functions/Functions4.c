#include<stdio.h>

int isPrime(int number) {
    int i;
    for (i = 2; i < number; ++i) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n + 1;; i++) {
        if (isPrime(i)) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}