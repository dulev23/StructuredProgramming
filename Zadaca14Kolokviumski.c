#include<stdio.h>

int main() {
    int A[100][100];
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n * 2; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    int B[100][100];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            B[i][j] = A[i][j];
        }
        for (j = 0; j < n * 2; ++j) {
            B[i + n][j - n] = A[i][j];
        }
    }

    for (i = 0; i < n * 2; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}