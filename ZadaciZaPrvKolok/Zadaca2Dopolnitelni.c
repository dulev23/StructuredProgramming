/*
 * Мартин фрлал паричка пет пати и за секое фрлање запишал 5 или 0 за соодветно добиено петка или глава
 * при фрлањето. Вие ги гледате броевите запишани од Мартин и треба да  отпечатите 1 доколку има добиено
 * барем три пати глава при фрлањето на паричката, а во спротивно 0.
 */

#include<stdio.h>

int main() {
    int paricka;
    int counterGlava = 0;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &paricka);
        if (paricka == 0) {
            counterGlava++;
        }
    }

    if (counterGlava >= 3) {
        printf("1");
    } else {
        printf("0");
    }
}