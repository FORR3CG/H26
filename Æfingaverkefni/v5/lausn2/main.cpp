#include <iostream>
#include "nemandi.hpp"

using namespace std;

int main() {
    // Búum til nemendur og skráum einkunnir. Fylkið stækkar eftir þörfum.
    Nemandi geir("Geir");
    geir.skra_einkunn(6.0);
    geir.skra_einkunn(7.0);
    geir.skra_einkunn(8.0);

    Nemandi konni("Konni");
    konni.skra_einkunn(7.0);
    konni.skra_einkunn(7.0);

    Nemandi annar_geir("Geir II");
    annar_geir.skra_einkunn(8.0);
    annar_geir.skra_einkunn(9.0);

    // Þrjár leiðir til að prenta nemanda.
    geir.prenta();
    cout << konni << endl;
    cout << annar_geir.to_string() << endl;
    cout << "Meðaleinkunn Geirs: " << geir.medaleinkunn() << endl;

    // Jafngildi ræðst af nafni, jafnvel þótt einkunnir séu ólíkar.
    cout << "geir == annar_geir: " << (geir == annar_geir) << endl; // geir == annar_geir: 1
    cout << "geir != konni: " << (geir != konni) << endl; // geir != konni: 1

    // Geir og Konni hafa sama meðaltal (7.0), svo nafnið ræður röðinni.
    cout << "geir < konni: " << (geir < konni) << endl; // geir < konni: 1
    cout << "konni > geir: " << (konni > geir) << endl; // konni > geir: 1
    cout << "geir <= konni: " << (geir <= konni) << endl; // geir <= konni: 1
    cout << "konni >= geir: " << (konni >= geir) << endl; // konni >= geir: 1

    // Þegar meðaltölin eru ólík ræður meðaleinkunnin röðinni.
    cout << "Meðaleinkunn Geirs: " << geir.medaleinkunn() << endl
         << "Meðaleinkunn Geirs II: " << annar_geir.medaleinkunn() << endl;

    cout << "geir < annar_geir: " << (geir < annar_geir) << endl; // geir < annar_geir: 1
    return 0;
}