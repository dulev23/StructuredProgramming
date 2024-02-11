#include<iostream>

using namespace std;

int main() {
    int m, n;
    int matrix[100][100];

    cin >> m >> n;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int counter1 = 0;
    for (int i = 0; i < m; ++i) {
        int repeating = 0;
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                repeating++;
                if (repeating >= 3) {
                    counter1++;
                    break;
                }
            } else {
                repeating = 0;
            }
        }
    }

    int counter2 = 0;
    for (int j = 0; j < n; ++j) {
        int repeating = 0;
        for (int i = 0; i < m; ++i) {
            if (matrix[i][j] == 1) {
                repeating++;
                if (repeating >= 3) {
                    counter2++;
                    break;
                }
            } else {
                repeating = 0;
            }
        }
    }

    cout << counter1 + counter2;

    return 0;
}