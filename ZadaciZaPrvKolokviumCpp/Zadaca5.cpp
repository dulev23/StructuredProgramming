/*Треба да се определи дали помалиот број “е парен еквивалент”
*од поголемиот број. Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се
*наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
*Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
 */

#include <iostream>

using namespace std;

int main() {
    int num1, num2, isEquivalent = 0;
    cin >> num1 >> num2;
    if (num1 <= 0 || num2 <= 0) {
        cout << "Invalid input";
    } else {
        int digitLarger = num1 / 10 % 10;
        int digitSmaller = num2 % 10;

        if (num1 > num2) {
            while (num1 > 0) {
                isEquivalent = 0;
                if (digitLarger == digitSmaller) {
                    isEquivalent = 1;
                }
                num1 /= 10;
            }
        } else {
            int secondSmaller = num1 % 10;
            int secondLarger = num2 / 10 % 10;
            while (num2 > 0) {
                isEquivalent = 0;
                if (secondLarger == secondSmaller) {
                    isEquivalent = 1;
                }
                num2 /= 10;
            }
        }

        if (isEquivalent) {
            cout << "PAREN";
        } else {
            cout << "NE";
        }
    }
    return 0;
}