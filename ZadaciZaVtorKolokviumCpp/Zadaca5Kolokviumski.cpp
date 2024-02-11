#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char sifra[10];
    int tip;
    float uplata;
    float coefficient;
    cin >> uplata;
    float maxCoefficient = 0, dobivka = 1;
    char maxSifra[10];
    int maxTip;
    while (cin >> sifra >> tip >> coefficient) {
        if (cin.get() == '#') {
            break;
        }

        if (coefficient > maxCoefficient) {
            maxCoefficient = coefficient;
            strcpy(maxSifra, sifra);
            maxTip = tip;
        }
        dobivka *= coefficient;
    }

    cout << maxSifra << " " << maxTip << " " << maxCoefficient << endl;
    cout << dobivka * uplata;

}