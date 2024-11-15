#include<iostream>

using namespace std;

int main() {
    int matrix[100][100];
    int m, n;
    int ii, jj;
    cin >> m >> n;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cin >> ii >> jj;

    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i < ii && j >= jj) { //prv kvadrant
                s1 += matrix[i][j];
            }
            if (i < ii && j < jj) { //vtor kvadrant
                s2 += matrix[i][j];
            }
            if (i >= ii && j < jj) { //tret kvadrant
                s3 += matrix[i][j];
            }
            if (i >= ii && j >= jj) { //cetvrt kvadrant
                s4 += matrix[i][j];
            }
        }
    }

    cout << s1 << " " << s2 << " " << s3 << " " << s4;

    return 0;
}