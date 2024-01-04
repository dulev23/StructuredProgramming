#include<iostream>
#include<cctype>
#include <cstring>

using namespace std;

int main() {
    int m, n; //golemina na niva
    cin >> m >> n;
    int appleI, appleJ; //koordinati na jabolkoto
    cin >> appleI >> appleJ;

    cin.get(); //za da se ignorira noviot red posle brojkata appleJ

    char commands[1001];
    cin.getline(commands, 1001);

//    cout << m << " " << n << " " << appleI << " " << appleJ << " " << commands;

    int snakeI = 0, snakeJ = 0;
    int dI = 1, dJ = 0;

    int tmp;

    for (int i = 0; i < strlen(commands); ++i) {
        char command = commands[i];
        switch (command) {
            case 'L':
            case 'R':
                if (dJ == 0) {
                    if (command == 'R') {
                        dI *= -1;
                    }
                    swap(dI, dJ);
                } else {
                    if (command == 'L') {
                        dJ *= -1;
                    }
                    swap(dI, dJ);
                }
                break;
            case 'F':
                break;
            default:
                cout << "ERROR";
                return 0;
        }

        snakeI += dI;
        snakeJ += dJ;

        if (snakeI == appleI && snakeJ == appleJ) {
            cout << "NJAM";
            return 0;
        }

        if (snakeI < 0 || snakeI >= m || snakeJ < 0 || snakeJ >= n) {
            cout<<"GAME OVER Ouch";
            return 0;
        }
    }

    cout<<"GAMEOVER";

    return 0;
}