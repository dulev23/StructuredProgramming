#include <iostream>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int temp = n;
        int isZigZag = 0;
        int lastDigit = temp % 10;
        int mainDigit, prevDigit;

        while (temp >= 10) {
            mainDigit = temp / 10 % 10;
            prevDigit = temp / 100 % 10;

            if (((mainDigit > lastDigit && prevDigit < mainDigit) ||
                 (mainDigit < lastDigit && prevDigit > mainDigit))) {
                isZigZag = 1;
            }

            lastDigit=mainDigit;

            temp =0;
        }

        if (isZigZag && n >= 10) {
            cout << n << endl;
        }
    }
    return 0;
}