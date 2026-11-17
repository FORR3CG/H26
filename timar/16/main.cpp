#include <iostream>
#include "hnitalisti.hpp"

using namespace std;

int main() {
    Hnitalisti listi;
    listi.setja_aftast(Hnit(20, 20));
    listi.setja_aftast(Hnit(40, 40));
    listi.setja_fremst(Hnit(10, 10));
    listi.setja_i_saeti(2, Hnit(30, 30));
    cout << "Eftir innsetningar: ";
    listi.prenta();

    cout << "Hnitið (30, 30) er í sæti "
         << listi.finna_hnit(Hnit(30, 30)) << endl;
    cout << "Leit að (99, 99) skilar "
         << listi.finna_hnit(Hnit(99, 99)) << endl;

    Hnit stak;
    if(listi.fjarlaegja_saeti(1, stak))
        cout << "Fjarlægði " << stak << " úr sæti 1" << endl;
    if(listi.fjarlaegja_fremsta(stak))
        cout << "Fjarlægði fremsta stakið: " << stak << endl;
    if(listi.fjarlaegja_aftasta(stak))
        cout << "Fjarlægði aftasta stakið: " << stak << endl;
    cout << "Eftir fjarlægingar: ";
    listi.prenta();

    if(listi.fjarlaegja_stak(Hnit(30, 30)))
        cout << "Hnitið (30, 30) hefur verið fjarlægt" << endl;
    if(!listi.fjarlaegja_fremsta(stak))
        cout << "Listinn er tómur" << endl;
    return 0;
}
