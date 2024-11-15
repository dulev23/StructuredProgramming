#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

bool condition(char *string) {
    int n = strlen(string);
    int palindromeFlag = 1, specCharFlag = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (string[i] != string[n - i - 1]) {
            palindromeFlag = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (!isalnum(string[i])) {
            specCharFlag = 1;
        }
    }

    return palindromeFlag && specCharFlag;
}

int main() {
    int n;
    cin>>n;
    char maxString[81];
    int maxLength = 0;
    for (int i = 0; i < n; ++i) {
        char line[81];
        cin.getline(line,81);
        if(condition(line)){
            if(strlen(line) > maxLength){
                maxLength = strlen(line);
                strcpy(maxString,line);
            }
        }
    }

    cout<<endl;
    if(maxLength!=0){
        cout<<maxString;
    } else{
        cout<<"Nema!";
    }
    return 0;
}