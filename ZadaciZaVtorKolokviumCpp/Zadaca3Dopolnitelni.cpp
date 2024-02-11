#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char line[51];
    for (int i = 0; i < n; ++i) {
        int contains = 0;
        cin.getline(line, 51);

        for (int j = 0; j < strlen(line); ++j) {
            if (tolower(line[j]) == 'a' && line[j + 1] == '1' && tolower(line[j + 2]) == 'c') {
                contains++;
            }

            line[j] = tolower(line[j]);
        }

        if (contains >= 2) {
            cout << line << endl;
        }
    }

    return 0;
}