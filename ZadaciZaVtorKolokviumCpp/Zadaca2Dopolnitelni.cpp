#include<iostream>
#include<cctype>
#include<cstring>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int Number = (int) ceil(sqrt(n));
    int matrix[100][100];
    int current = 1;
    int i,j;
    for (j = 0; j < Number; ++j) {
        if (j % 2 == 0) {
            for (i = 0; i < Number; ++i) {
                if (current > n) {
                    matrix[i][j] = 0;
                    continue;
                } else {
                    matrix[i][j] = current;
                    current++;
                }
            }
        } else {
            for (i = Number - 1; i >= 0; i--) {
                if (current > n) {
                    matrix[i][j] = 0;
                    continue;
                } else {
                    matrix[i][j] = current;
                    current++;
                }
            }
        }
    }

    for (i = 0; i < Number; ++i) {
        for (j = 0; j < Number; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
