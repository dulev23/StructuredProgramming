#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char line[100], maxLine[100];
    int flag = 0;
    int start = 0;
    int end = 0;
    int maxLength = 0;
    int secondStart = 0;
    int secondEnd = 0;
    char longestWord[100];
    int length;
    while(cin.getline(line, 100) && strcmp(line,"0") != 0){
        length = strlen(line);
        flag = 0;
        for (int i = 0; i < length; ++i) {
            if(isdigit(line[i])){
                if(!flag){
                    start = i;
                    flag = 1;
                }
                end = i;
            }
        }
        if(start!=end){
            if(length >= maxLength){
                maxLength = length;
                strcpy(maxLine,line);
                secondStart = start;
                secondEnd = end;
            }
        }
    }

    strncpy(longestWord,maxLine + secondStart, secondEnd - secondStart + 1);
    longestWord[secondEnd - secondStart + 1] = '\0';
    cout<<longestWord;
}