#include<stdio.h>

int main() {
    int dvocifren;
    int temp;
    scanf("%d", &dvocifren);
    int vtoraCifra = dvocifren % 10;
    int prvaCifra = dvocifren / 10;
    if (vtoraCifra <= prvaCifra) {
        printf("%d", dvocifren * dvocifren);
    } else {
        temp = (dvocifren % 10) * 10 + dvocifren / 10;
        printf("%d", temp * temp);
    }
}