#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main() {
    int m, n, r, k, min = 0;
    int a[30][30];
    cin >> m >> n;
    cin >> r >> k;
    int i, j;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; ++j) {
            if (a[i][j] < min) {
                min = a[i][j];
            } else if (i == 0 && j == 0) {
                min = a[i][j];
            }
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < k; j++) {
            a[i][j] = min;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}