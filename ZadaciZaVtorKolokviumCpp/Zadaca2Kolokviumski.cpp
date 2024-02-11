#include<iostream>

using namespace std;

int digit(int number) {
    while (number >= 10) {
        number /= 10;
    }
    return number;
}

int main() {
    int n, x;
    while (cin >> n && n != 0) {
        int max = 0;
        int maxDigit = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            int y = digit(x);
            if (y > maxDigit) {
                maxDigit = y;
                max = x;
            }
        }
        cout << max << endl;
    }
}