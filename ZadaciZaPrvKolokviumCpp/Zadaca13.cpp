#include<iostream>

using namespace std;

int main() {
    int n;
    int previousMaxDigit = 0;
    while (cin >> n && (n >= 0)) {
        int zbir = 0;
        int tempNumber = n;
        while (tempNumber) {
            int lastdigit = tempNumber % 10;
            zbir += lastdigit;
            tempNumber /= 10;
        }

        zbir += previousMaxDigit;

        tempNumber = n;
        int currentMaxDigit = 0;
        while (tempNumber) {
            int currentNumber = tempNumber % 10;
            if (currentNumber > currentMaxDigit) {
                currentMaxDigit = currentNumber;
            }
            tempNumber /= 10;
        }
        previousMaxDigit = currentMaxDigit;

        cout << n << ": " << zbir << endl;
    }

    return 0;
}