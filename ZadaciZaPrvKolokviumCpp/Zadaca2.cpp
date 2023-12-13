#include <iostream>

using namespace std;

int main() {
    int n, obraten;
    cin >> n;
    if (n <= 9) {
        cout << "Brojot ne e validen";
        return 1;
    }

    for (int i = n; i >= 9; i--) {
        obraten = 0;
        int temp = i;

        while (temp != 0) {
            int lastDigit = temp % 10;
            obraten = obraten * 10 + lastDigit;
            temp /= 10;
        }

        int counter = 0;
        temp = i;

        while (temp > 0) {
            temp /= 10;
            counter++;
        }

        if (obraten % counter == 0) {
            cout << i;
            return 0;
        }
    }
}