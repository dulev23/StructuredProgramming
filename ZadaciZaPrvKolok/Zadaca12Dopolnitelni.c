#include <stdio.h>

int main() {
    int sum = 0;
    int poeni;
    int ocenka;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &poeni);
        sum += poeni;
    }

    if (sum <= 50) {
        printf("Predmetot ne e polozen");
    } else {
        if (sum >= 51 && sum < 60) {
            ocenka = 6;
        } else if (sum >= 61 && sum <= 70) {
            ocenka = 7;
        } else if (sum >= 71 && sum <= 80) {
            ocenka = 8;
        } else if (sum >= 81 && sum <= 90) {
            ocenka = 9;
        } else if (sum >= 91 && sum <= 100) {
            ocenka = 10;
        }
        printf("Ocenka: %d, poeni: %d\n", ocenka, sum);
        if ((sum + 1 == 61) || (sum + 1 == 71) || (sum + 1 == 81) || (sum + 1 == 91)) {
            printf("Ima uslov za povisoka ocenka");
        } else if (ocenka == 10) {
            return 1;
        } else {
            printf("Nema uslov za povisoka ocenka");
        }
    }

}