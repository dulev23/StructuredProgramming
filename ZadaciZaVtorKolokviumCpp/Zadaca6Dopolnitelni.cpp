#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int par(int a[], int n) {
    int element = a[0];
    int condition = 0;
    for (int i = 0; i < n; ++i) {
        int counter = 0;
        for (int j = 0; j < n; ++j) {
            if (a[i] == a[j]) {
                counter++;
            }
        }

        if (counter % 2 == 0) {
            condition = 1;
            if (element > a[i]) {
                element = a[i];
            }
        }
    }
    if (condition) {
        return element;
    } else {
        return 0;
    }
}


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int br = par(a, n);

    if (br != 0) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << br;
    } else {
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    }
    return 0;
}