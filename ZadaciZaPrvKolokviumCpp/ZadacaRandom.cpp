#include <iostream>

using namespace std;

int main() {
    int jabolka, malini, banani, iskoristiKarticka;
    cin >> jabolka >> malini >> banani >> iskoristiKarticka;
    double cenaJabolka = 30.0;
    double cenaMalini = 50.0;
    double cenaBanani = 40.0;

    double vkupnaCenaJabolka = jabolka * cenaJabolka / 100.0;
    double vkupnaCenaMalini = malini * cenaMalini / 100.0;
    double vkupnaCenaBanani = banani * cenaBanani / 100.0;

    if (jabolka >= 500) {
        vkupnaCenaJabolka = vkupnaCenaJabolka - vkupnaCenaJabolka * 0.5;
    } else if (jabolka >= 200) {
        vkupnaCenaJabolka = vkupnaCenaJabolka - vkupnaCenaJabolka * 0.3;
    }
    if (malini >= 500) {
        vkupnaCenaMalini = vkupnaCenaMalini - vkupnaCenaMalini * 0.5;
    } else if (malini >= 200) {
        vkupnaCenaMalini = vkupnaCenaMalini - vkupnaCenaMalini * 0.3;
    }
    if (banani >= 500) {
        vkupnaCenaBanani = vkupnaCenaBanani - vkupnaCenaBanani * 0.5;
    } else if (banani >= 200) {
        vkupnaCenaBanani = vkupnaCenaBanani - vkupnaCenaBanani * 0.3;
    }
    int vkupnaCenaPredPopust = vkupnaCenaJabolka + vkupnaCenaMalini + vkupnaCenaBanani;

    if (iskoristiKarticka == 1) {
        vkupnaCenaPredPopust = max(0.0, vkupnaCenaPredPopust - 140.0);
    }

    cout << vkupnaCenaPredPopust << endl;

    return 0;
}