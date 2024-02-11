#include<iostream>

using namespace std;

int maxDigit(int n) {
    if (n == 0) {
        return 0;
    }

    int a, b;
    a = n % 10;
    b = maxDigit(n / 10);

    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << maxDigit(n) << endl;
    }
    return 0;
}