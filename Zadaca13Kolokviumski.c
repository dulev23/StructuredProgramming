#include<stdio.h>

int main() {
    int x, m, n;
    scanf("%d", &x);
    scanf("%d%d", &m, &n);
    int i, j;
    int matrix[100][100];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int zbir_redovi, k;
    for (i = 0; i < m; i++) {
        zbir_redovi = 0;
        for (j = 0; j < n; j++) {
            zbir_redovi += matrix[i][j];
            k = j;
            while (k >= 0) {
                if (zbir_redovi > x) {
                    matrix[i][k] = 1;
                }
                if (zbir_redovi < x) {
                    matrix[i][k] = -1;
                }
                if (zbir_redovi == x) {
                    matrix[i][k] = 0;
                }
                --k;
            }
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}