#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool Condition(char *string) {
    int n = strlen(string);
    int isPalindrome = 1, SpecChar = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (string[i] != string[n - i - 1]) {
            isPalindrome = 0;
        }
    }

    for (int i = 0; i <= n / 2; ++i) {
        if (!isalnum(string[i])) {
            SpecChar = 1;
        }
    }
    return isPalindrome == 1 && SpecChar == 1;
}

int main() {
    int n;
    cin >> n;
    int flag = 0;
    char maxString[81];
    int maxLength = 0;
    for (int i = 0; i < n; ++i) {
        char line[81];
        cin.getline(line, 81);
        if (Condition(line)) {
            if (strlen(line) > maxLength) {
                maxLength = strlen(line);
                strcpy(maxString, line);
                flag = 0;
            }
        }
    }

    if (maxLength != 0) {
        cout << maxString;
    } else {
        cout << "Nema!";
    }


    return 0;

}