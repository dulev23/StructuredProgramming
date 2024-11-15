#include<iostream>

using namespace std;

int main() {
    int n, matrix[50][50];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n * 2; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n * 2; ++j) {
            matrix[i + n][j - n] = matrix[i][j];
        }
    }

    for (int i = 0; i < n * 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}