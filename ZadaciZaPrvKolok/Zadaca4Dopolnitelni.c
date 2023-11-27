/*
 * Од стандарден влез се чита четирицифрен број.
 * Да се испечати 1 доколку цифрите во бројот се во строго растечки редослед,
 * во спротивно да се испечати 0.
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int thousands = n / 1000;
    int hundreds = (n % 1000) / 100;
    int tens = (n % 100) / 10;
    int ones = n % 10;

    if (thousands < hundreds && hundreds < tens && tens < ones) {
        printf("1");
    } else {
        printf("0");
    }
}