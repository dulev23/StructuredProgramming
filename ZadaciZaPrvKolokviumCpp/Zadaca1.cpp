//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
// Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност
// се внесува од тастатура), да се најде и испечати најмалиот „благ број“.
// Ако не постои таков број, да се испечати NE.

#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int flag = 0;
    int min = -1;
    for (int i = m; i < n; ++i) {
        int num = i;
        flag = 0;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 != 0) {
                flag = 1;
                break;
            }
            num /= 10;
        }
        if (!flag && (min == -1 || i < min)) {
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