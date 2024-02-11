#include<iostream>

using namespace std;

int main() {
    int matrix[100][100];
    int n, m, i, j, ii, jj;
    cin >> n >> m;
    int s1, s2, s3, s4;
    s1 = s2 = s3 = s4 = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cin >> ii >> jj;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i < ii && j >= jj) { //uslov za prv kvadrant
                s1 += matrix[i][j];
            }
            if (i < ii && j < jj) { //uslov za vtor kvadrant
                s2 += matrix[i][j];
            }
            if (i >= ii && j < jj) { //uslov za tret kvadrant
                s3 += matrix[i][j];
            }
            if (i >= ii && j >= jj) { //uslov za cetvrt kvadrant
                s4 += matrix[i][j];
            }
        }

    }

    cout << s1 << " " << s2 << " " << s3 << " " << s4;

    return 0;
}