#include<iostream>

using namespace std;

int par(int a[], int n) {
    int element = a[0];
    int counter;
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        counter = 0;
        for (int j = 0; j < n; ++j) {
            if (a[i] == a[j]) {
                counter++;
            }
        }
        if (counter % 2 == 0){
            flag = true;
            if(element > a[i]){
                element = a[i];
            }
        }
    }

    if(flag){
        return element;
    } else{
        return 0;
    }
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int br = par(a,n);
    if(br!=0){
        cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<br<<endl;
    } else{
        cout<<"Nitu eden element ne se pojavuva paren broj pati!";
    }
    return 0;
}