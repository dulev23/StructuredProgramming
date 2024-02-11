#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[120][120];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int indexNumber;

    for (int j = 0; j < m; ++j) {
        int counter = 0;
        for (int i = 0; i < n; ++i) {
            if (j < 10) {
                indexNumber = i * 10 + j;
            } else if (j < 100) {
                indexNumber = i * 100 + j;
            } else {
                indexNumber = i * 1000 + j;
            }

            if (indexNumber == matrix[i][j]) {
                counter++;
            }
        }
        cout << counter << endl;
    }

    return 0;
}