#include<iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[120][120];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        int counter = 0;
        for (int j = 0; j < n; ++j) {
            if ((matrix[i][j] % 2 == 0) == ((i + j) % 2 == 0)) {
                counter++;
            }
        }
        cout << i << ": " << counter << endl;
    }
    return 0;
}