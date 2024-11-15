#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int stosenBrCounter;
    for (int i = 0; i < n; ++i) {
        stosenBrCounter = 0;
        for (int j = 0; j < m; ++j) {
            if ((matrix[i][j] % 2 == 0) == (((i + j) % 2) == 0)) {
                stosenBrCounter++;
            }
        }
        cout << i << ": " << stosenBrCounter << endl;
    }

    return 0;
}