#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char kod[10], maxKod[10];
    int uplata, tip, maxTip;
    cin >> uplata;
    float coeff;
    float maxCoeff = 0;
    float dobivka = 1;
    while (cin >> kod >> tip >> coeff) {
        if(cin.get()=='#'){
            break;
        }
        if (coeff > maxCoeff) {
            maxCoeff = coeff;
            strcpy(maxKod, kod);
            maxTip = tip;
        }
        dobivka *= coeff;
    }

    cout << maxKod << " " << maxTip << " " << maxCoeff << endl;
    cout << dobivka * uplata;
}