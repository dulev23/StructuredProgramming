#include<iostream>

using namespace std;

int main() {
    int n;
    int index = -1;
    int index0 = 0, index1 = 0, index2 = 0, index3 = 0, index4 = 0;
    while (cin >> n && index < 4) {
        int position = 0, maxDigitPosition = -1, maxDigit = -1;
        while (n > 0) {
            int lastDigit = n % 10;
            if (lastDigit > maxDigit) {
                maxDigit = lastDigit;
                maxDigitPosition = position;
            }
            n /= 10;
            position++;
        }

        if (maxDigitPosition == 4) {
            index4++;
        } else if (maxDigitPosition == 3) {
            index3++;
        } else if (maxDigitPosition == 2) {
            index2++;
        } else if (maxDigitPosition == 1) {
            index1++;
        } else if (maxDigitPosition == 0){
            index0++;
        }
    }

    cout<<"0: "<<index0<<endl;
    cout<<"1: "<<index1<<endl;
    cout<<"2: "<<index2<<endl;
    cout<<"3: "<<index3<<endl;
    cout<<"4: "<<index4<<endl;


    return 0;
}