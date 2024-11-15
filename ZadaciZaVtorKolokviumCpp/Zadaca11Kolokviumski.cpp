#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char line[100];
    while (cin.getline(line, 100)) {
        if (line[0] == '#') {
            break;
        } else {
            int counter = 0, j = 0;
            char integerLine[100];
            for (int i = 0; i < strlen(line); ++i) {
                if (isdigit(line[i])) {
                    integerLine[j] = line[i];
                    counter++;
                    j++;
                }
            }
            for (int i = 0; i < counter - 1; ++i) {
                for (int k = 0; k < counter - 1; ++k) {
                    if (integerLine[k] > integerLine[k + 1]) {
                        swap(integerLine[k], integerLine[k + 1]);
                    }
                }
            }
            cout << counter << ":";
            for (int i = 0; i < counter; ++i) {
                cout << integerLine[i];
            }
            cout << endl;
        }
    }
    return 0;
}