#include<stdio.h>

int main() {
    int cena;
    char tipNaDanok;
    float DDV;
    float zbir = 0;
    for (int i = 0; i < 3; ++i) {
        scanf("%d %c", &cena, &tipNaDanok);
        if (tipNaDanok == 'A' || tipNaDanok == 'a') {
            DDV = 0.18;
            zbir += cena * DDV;
        } else if (tipNaDanok == 'B' || tipNaDanok == 'b') {
            DDV = 0.05;
            zbir += cena * DDV;
        } else if (tipNaDanok == 'V' || tipNaDanok == 'v') {
            DDV = 0;
            zbir += cena * DDV;
        }
    }

    printf("%.2f", zbir);
}