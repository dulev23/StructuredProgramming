#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    float X = 0, Y = 0;
    float a[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            X += a[i][j];
            Y += a[i][n - 1 - j];
        }
    }

    float b[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i == j) && ((i + j) == (n - 1))) {
                b[i][j] = X + Y;
            } else if (i == j) {
                b[i][j] = X;
            } else if ((i + j) == n - 1) {
                b[i][j] = Y;
            } else {
                b[i][j] = 0;
            }
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}