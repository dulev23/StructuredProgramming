#include <iostream>

using namespace std;

int main() {
    int z;
    cin >> z;
    int a, b;
    double counter = 0;
    double paircounter = 0;
    while (true) {
        cin >> a >> b;
        if(a==0 && b==0){
            break;
        }
        if (a + b == z) {
            counter++;
        }
        paircounter++;
    }
    double procent = counter/(paircounter)*100;

    cout << "Vnesovte " << counter << " parovi od broevi chij zbir e "<< z << endl;
    cout << "Procentot na parovi so zbir "<<z<<" e "<<procent<<"%";
}