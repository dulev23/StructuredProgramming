#include<iostream>

using namespace std;

int main() {
    int m, n;
    double matrix[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    double farthest[100];
    for (int i = 0; i < m; ++i) {
        double row_sum = 0;
        for (int j = 0; j < n; ++j) {
            row_sum += matrix[i][j];
        }
        double avg = row_sum / n;
        double maxDistance = 0;
        int maxIndex = 0;
        for (int j = 0; j < n; ++j) {
            double distance = abs(matrix[i][j] - avg);
            if (distance > maxDistance) {
                maxDistance = distance;
                maxIndex = j;
            }
            farthest[i] = matrix[i][maxIndex];
        }
        cout << farthest[i] << " ";
    }

}