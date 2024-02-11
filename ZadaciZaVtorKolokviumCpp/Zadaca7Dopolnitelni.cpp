#include<iostream>

using namespace std;

void premesti(int a[], int n) {
    int i, vrednost = 0;
    int b[n];

    for (i = 0; i < n; ++i) {
        if(a[i]>=0){
            b[vrednost++]=a[i];
        }
    }

    for (i = 0; i < n; ++i) {
        if(a[i]<0){
            b[vrednost++]=a[i];
        }
    }

    for (i = 0; i < n; ++i) {
        a[i]=b[i];
    }

    if(vrednost==0){
        return;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    premesti(a, n);

    for (int i = 0; i < n; ++i) {
        cout << a[i]<<" ";
    }
    return 0;
}