/*
 * Да се провери дали одреден внесен шестцифрен број е симетричен.
 * Тоа значи првата цифра на бројот да е еднаква со последната, втората цифра со претпоследната…
 * Пример за симетрични броеви: 12321, 805508, 999999. Да се врати ДА ако е симетричен,
 * НЕ ако не е симетричен.
 */

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prvaCifra = n / 100000;
    int vtoraCifra = (n / 10000) % 10;
    int tretaCifra = (n / 1000) % 10;
    int cetvrtaCifra = (n / 100) % 10;
    int pettaCifra = (n / 10) % 10;
    int sestaCifra = n % 10;
    if (prvaCifra == sestaCifra && vtoraCifra == pettaCifra && tretaCifra == cetvrtaCifra) {
        printf("1");
    } else {
        printf("0");
    }
}