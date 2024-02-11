#include<iostream>
#include<cstring>

using namespace std;

int isVowel(char c) {
    switch (tolower(c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default:
            return 0;
    }
}

int main() {
    int counter = 0;
    char c, p;
    c = p = '\0';
    while (cin.get(c)) {
        c = tolower(c);
        if (c == '#') {
            break;
        }

        if (!p) {
            p = c;
            continue;
        }

        if (isVowel(c) && isVowel(p)) {
            counter++;
            cout << p << c << endl;
        }
        p = c;
    }

    cout << counter;
    return 0;
}