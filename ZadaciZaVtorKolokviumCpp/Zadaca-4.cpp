#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool isVowel(char letter) {
    switch (tolower(letter)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int main() {
    char line[81]; //+1 null terminator
    while (cin.getline(line, 81)) {

        if (line[0] == '#') {
            return 0;
        }

        for (int i = 0; i < strlen(line); ++i) {
            if (!isVowel(line[i])) {
                cout << line[i];
            }
        }
        cout << endl;
    }

    return 0;
}