#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[100][100];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    double farthest[100];
    for (int i = 0; i < m; ++i) {
        double sum_rows = 0;
        for (int j = 0; j < n; ++j) {
            sum_rows += matrix[i][j];

        }
        double average = sum_rows / n;
        double maxDistance = 0;
        int maxIndex = 0;
        for (int j = 0; j < n; ++j) {
            double distance = abs(matrix[i][j] - average);
            if(distance > maxDistance){
                maxDistance = distance;
                maxIndex = j;
            }
            farthest[i] = matrix[i][maxIndex];
        }
        cout<<farthest[i]<<" ";
    }
    return 0;
}