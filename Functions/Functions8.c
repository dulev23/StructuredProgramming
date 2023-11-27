#include<stdio.h>

int sumOfDigits(int number) {
    int sum = 0;
    while (number) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int reverse(int number) {
    int rev = 0;
    while (number) {
        rev = 10 * rev + number % 10;
        number /= 10;
    }
    return rev;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        int j = n - i;
        if (reverse(i) % sumOfDigits(j)) {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}