#include<iostream>

using namespace std;

int hexDigitToDecimal(char hexDigit) {
    if ('0' <= hexDigit && hexDigit <= '9') {
        return hexDigit - '0';
    } else if ('A' <= hexDigit && hexDigit <= 'F') {
        return hexDigit - 'A' + 10;
    } else if ('a' <= hexDigit && hexDigit <= 'f') {
        return hexDigit - 'a' + 10;
    }
    else{
        return -1;
    }
}

int main() {
    char c;
    int sum = 0;
    while (cin >> c && c != '.') {
        int digitValue = hexDigitToDecimal(c);
        sum += digitValue;
    }

    while(sum>0){
        if(sum==16){
            cout<<"Poln pogodok";
            break;
        }
        if(sum%16==0){
            cout<<"Pogodok";
        }else if(sum%100==16){
            cout<<"Poln pogodok";
        }else{
            cout<<sum;
        }
    }
}