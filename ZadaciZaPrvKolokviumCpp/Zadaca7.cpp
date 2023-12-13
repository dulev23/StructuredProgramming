#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;
    if (m > 2) {
        cout << "%";
        for (int i = 1; i < m - 1; ++i) {
            cout << "@";
        }
        cout << "%" << endl;
        for (int j = 1; j < m - 1; ++j) {
            cout << "%";
            for (int k = 1; k < m - 1; ++k) {
                cout << ".";
            }
            cout << "%";
            cout<<endl;
        }

        cout << "%";
        for (int l = 1; l < m - 1; ++l) {
            cout << "@";
        }
        cout << "%";
    }

    return 0;
}