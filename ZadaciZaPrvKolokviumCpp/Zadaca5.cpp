/*Треба да се определи дали помалиот број “е парен еквивалент”
*од поголемиот број. Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се
*наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
*Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
 */

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n <= 0 || m <= 0) {
        cout << "Invalid input";
    } else {
        int smaller = n, larger = m;
        if (n > m) {
            larger = n;
            smaller = m;
        }

        bool isEvenEquivalent = true;

        while (smaller > 0) {
            int digitLarger = larger / 10 % 10;
            int digitSmaller = smaller % 10;

            if (digitSmaller != digitLarger) {
                isEvenEquivalent = false;
                break;
            }

            larger /= 100;
            smaller /= 10;
        }

        if (isEvenEquivalent) {
            cout << "PAREN";
        } else {
            cout << "NE";
        }

        return 0;
    }
}