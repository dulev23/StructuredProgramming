#include<iostream>

using namespace std;

int main() {
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int repeating1 = 0;
    for (int i = 0; i < m; ++i) {
        int counter1 = 0;
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1) {
                counter1++;
                if (counter1 >= 3) {
                    repeating1++;
                    break;
                }
            } else {
                counter1 = 0;
            }
        }
    }

    int repeating2 = 0;
    for (int j = 0; j < n; ++j) {
        int counter2 = 0;
        for (int i = 0; i < m; ++i) {
            if (matrix[i][j] == 1) {
                counter2++;
                if (counter2 >= 3) {
                    repeating2++;
                    break;
                }
            } else {
                counter2 = 0;
            }
        }
    }

    cout << repeating1 + repeating2;
    return 0;
}