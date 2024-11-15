#include<iostream>

using namespace std;

int digit(int n){
    while (n>=10){
        n/=10;
    }
    return n;
}

int main() {
    int n,x;
    while (cin>> n && n!=0){
        int max = 0;
        int maxDigit = 0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            if(digit(x) > maxDigit){
                maxDigit = digit(x);
                max = x;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}