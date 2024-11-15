#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main() {
    int m, n, r, k, min = 0;
    cin >> m >> n;
    int matrix[31][31];
    cin >> r >> k;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            } else if(i==0 && j==0){
                min = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            matrix[i][j] = min;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}