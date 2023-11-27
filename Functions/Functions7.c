#include<stdio.h>

int sumOfFirstNNumber(int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += i;
    }
    return sum;
}

long factorial(int number) {
    long product = 1;
    for (int i = 1; i <= number; ++i) {
        product *= i;
    }
    return product;
}

long calculateForNumber(int number) {
    return factorial(sumOfFirstNNumber(number));
}

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += calculateForNumber(i);
    }
    printf("%d", sum);
    return 0;
}