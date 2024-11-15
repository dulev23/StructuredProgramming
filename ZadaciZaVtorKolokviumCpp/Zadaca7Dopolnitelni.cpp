#include<iostream>

void premesti(int a[100], int n){
    int index = 0, i;
    int b[n];

    for (i = 0; i < n; i++) {
        if(a[i] >= 0){
            b[index++] = a[i];
        }
    }

    for (i = 0; i < n; i++) {
        if(a[i]<0){
            b[index++] = a[i];
        }
    }

    for (i = 0; i < n; i++) {
        a[i] = b[i];
    }

    if(index == 0){
        return;
    }
}

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    premesti(a, n);

    for (int i = 0; i < n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}