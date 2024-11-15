#include<iostream>

using namespace std;

int main() {
    int n, m, matrix[120][120];
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int counter, index;
    for (int j = 0; j < m; ++j) {
        counter = 0;
        for (int i = 0; i < n; ++i) {
            if (j < 10) {
                index = i * 10 + j;
            } else if (j < 100) {
                index = i * 100 + j;
            } else if (j < 1000) {
                index = i * 1000 + j;
            }

            if (index == matrix[i][j]) {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}