#include <iostream>
using namespace std;

int main() {
    int broj = 0;
    int zbir = 0;
    char ch;

    while (cin >> noskipws >> ch && ch!='!') {
        if (ch >= '0' && ch <= '9') {
            broj = broj * 10 + (ch - '0');
        } else {
            zbir += broj;
            broj = 0;
        }
    }
    zbir += broj;
    cout << zbir;
    return 0;
}