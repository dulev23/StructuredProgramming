/*Да се напише програма која за дадени поени од испити по 5 предмети внесени преку
 * стандарден влез ќе пресмета оцена по секој предмет и вкупен просек на студентот
 * според оцените(заокружен на две децимали).
*/

#include <stdio.h>

int main() {
    double sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        int poeni;
        scanf("%d", &poeni);
        int ocenka;
        if (poeni >= 0 && poeni < 50) {
            ocenka = 5;
        } else if (poeni >= 50 && poeni < 60) {
            ocenka = 6;
        } else if (poeni >= 60 && poeni < 70) {
            ocenka = 7;
        } else if (poeni >= 70 && poeni < 80) {
            ocenka = 8;
        } else if (poeni >= 80 && poeni < 90) {
            ocenka = 9;
        } else if (poeni >= 90 && poeni <= 100) {
            ocenka = 10;
        } else {
            return 1;
        }
        sum += ocenka;
        printf("%d", ocenka);
    }
    double average = sum / 5;
    printf("\n%.f", average);
}