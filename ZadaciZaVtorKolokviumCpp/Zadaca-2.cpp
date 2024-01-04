#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

void trim(char *str) {
    int startIndex = -1;
    for (int i = 0; i < strlen(str); ++i) {
        if(!isspace(str[i])){
            startIndex=i;
            break;
        }
    }

    strcpy(str, str+startIndex);

    for (int i = strlen(str)-1; i >=0; i--) {
        if(!isspace(str[i])){
            str[i+1] = '\0';
            break;
        }
    }
}

int main() {
    char str[100];
    cin.getline(str,100);
    trim(str);
    cout<<str;
    return 0;
}