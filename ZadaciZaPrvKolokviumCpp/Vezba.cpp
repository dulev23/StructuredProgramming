#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int matrix[100][100];
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    bool condition = false;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((i==j && matrix[i][j] != 0) && (i == m - j - 1 && matrix[i][j] != 0)) {
                condition = true;
            }
        }
    }

    if (condition == true) {
        cout << "true";
    } else {
        cout << "false";
    }
}