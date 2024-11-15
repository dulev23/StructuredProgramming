#include<iostream>
using namespace std;

double recursion(double n, double a[]){
    if(n==1){
        return a[0];
    } else{
        return a[0] + 1 / recursion(n - 1, a+1);
    }
}

int main(){
    double n, array[100];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>array[i];
    }
    cout<<recursion(n,array);
}