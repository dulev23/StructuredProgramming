#include<iostream>
#include<cctype>
#include<cstring>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[100][100];
    int N = (int) ceil(sqrt(n));
    int i, j;
    int currentNumber = 1;

    for (j = 0; j < N; j++) {
        if (j % 2 == 0) {
            for (i = 0; i < N; i++) {
                if(currentNumber > n){
                    matrix[i][j] = 0;
                    continue;
                } else {
                    matrix[i][j] = currentNumber;
                    currentNumber++;
                }
            }
        } else {
            for (i = N - 1; i >= 0; i--) {
                if(currentNumber > n){
                    matrix[i][j] = 0;
                    continue;
                } else {
                    matrix[i][j] = currentNumber;
                    currentNumber++;
                }
            }
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; ++j) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}