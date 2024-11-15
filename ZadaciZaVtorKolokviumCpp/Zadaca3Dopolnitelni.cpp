#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    char line[51];
    int substringCount;
    for (int i = 0; i <= n; ++i) {
        substringCount = 0;
        cin.getline(line, 51);
        for (int j = 0; j < strlen(line); ++j) {
            if (tolower(line[j]) == 'a' && line[j + 1] == '1' && tolower(line[j + 2]) == 'c') {
                substringCount++;
            }
            line[j] = tolower(line[j]);
        }
        if (substringCount >= 2) {
            cout << line << endl;
        }
    }
    return 0;
}