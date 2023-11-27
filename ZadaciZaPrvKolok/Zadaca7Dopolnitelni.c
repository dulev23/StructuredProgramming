#include <stdio.h>

int main() {
    float kilometri;
    float P, M, C;
    float D, Z, R;
    float K, V;
    scanf("%f", &kilometri);
    scanf("%f %f %f %f", &P, &M, &K, &C);
    scanf("%f %f %f %f", &D, &Z, &V, &R);

    float vremetraenje1 = P * M + (P - 1) * C + kilometri / K;
    float vremetraenje2 = D * Z + (D - 1) * R + kilometri / V;

    printf("%d %d\n", (int) vremetraenje1, (int) vremetraenje2);

    if (vremetraenje1 < vremetraenje2) {
        printf("1");
    } else {
        printf("0");
    }
}