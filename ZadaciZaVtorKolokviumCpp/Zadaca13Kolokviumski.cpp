#include<iostream>

using namespace std;

int main() {
    int X, m, n, matrix[100][100];
    cin >> X >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int row_sum, k;
    for (int i = 0; i < m; ++i) {
        row_sum = 0;
        for (int j = 0; j < n; ++j) {
            row_sum += matrix[i][j];
            k = j;
            while (k >= 0) {
                if (X > row_sum) {
                    matrix[i][k] = -1;
                }
                if (X == row_sum) {
                    matrix[i][k] = 0;
                }
                if (X < row_sum) {
                    matrix[i][k] = 1;
                }
                --k;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}