//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен
//од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен
//број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е 
//валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <iostream>

using namespace std;

int main() {
    int n, obraten;
    cin >> n;
    if (n <= 9) {
        cout << "Brojot ne e validen";
        return 1;
    }

    for (int i = n-1; i >= 9; i--) {
        int number = i;
        obraten = 0;
        while (number != 0) {
            int lastDigit = number % 10;
            obraten = obraten * 10 + lastDigit;
            number /= 10;
        }

        int getDigitsCount = 0;
        number = i;
        while (number > 0) {
            number /= 10;
            getDigitsCount++;
        }

        if (obraten % getDigitsCount == 0) {
            cout<<i;
            return 0;
        }
    }
}