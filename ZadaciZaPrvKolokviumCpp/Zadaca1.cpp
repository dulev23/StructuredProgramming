//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
// Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност
// се внесува од тастатура), да се најде и испечати најмалиот „благ број“.
// Ако не постои таков број, да се испечати NE.

#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int flag;
    int min = -1;
    for (int i = m; i <= n; ++i) {
        int number = i;
        flag = 0;
        while (number > 0) {
            int digit = number % 10;
            if (digit % 2 != 0) {
                flag = 1;
                break;
            }
            number /= 10;
        }
        if (flag==0 && (min > i || min == -1)) {
            min = i;
        }
    }

    if (min == -1) {
        cout << "NE";
    } else {
        cout << min;
    }

    return 0;
}