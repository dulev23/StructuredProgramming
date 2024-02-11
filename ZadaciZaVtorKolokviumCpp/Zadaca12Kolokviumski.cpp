#include<iostream>

using namespace std;

int BrojPozitivni(int niza[], int n);

int main() {
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    cout << BrojPozitivni(array, n);
}

int BrojPozitivni(int niza[], int n) {
    if (n == 0) {
        return 0;
    }

    if (niza[n - 1] > 0) {
        return 1 + BrojPozitivni(niza, n - 1);
    } else {
        return BrojPozitivni(niza, n - 1);
    }
}