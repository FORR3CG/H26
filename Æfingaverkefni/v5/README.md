### Æfingaverkefni 5 - Yfirskrifun virkja

#### 1 – Bankareikningur - [Lausn](./lausn1/)

Taktu bankareikninginn úr æfingaverkefnum 4 [(sjá hér)](../v4/lausn2/), útfærðu `to_string()` fall fyrir klasann og bættu við eftirfarndi virkjum:
- `==` og `!=`, tveir reikningar eru eins ef eigandinn er sá sami.
- `<`, `>`, `<=` og `>=`, stjórnar fyrst af upphæðinni en ef upphæðirnar eru eins á að horfa til eigandans. Dæmi:
    - ("Geir", 1000) er minna en ("Geir", 2000)
    - ("Geir", 1000) er minna en ("Tskóli", 1000)
- `<<` virkinn fyrir cout þannig að cout kunni að skrifa út klasann.

#### 2 - Nemandi - [Lausn](./lausn2/)

Taktu nemandann úr æfingaverkefnum 4 [(sjá hér)](../v4/lausn3/).

Byrjaðu á að breyta klasanum þannig að í stað þess að nemandi hafi fastar 5 einkunnir séu einkunnirnar geymdar í kviku fylki (stafla) með upphafsstærðina 1 en stækkar svo um 1 (ef þarf) í hvert sinn sem einkunn er bætt við (eigðu fall eins og t.d. `skra_einkunn(double einkunn)` sem bætir einkunn í fylkið). Bættu við  getter fyrir nafnið og `to_string()` falli.

Bættu svo við eftirfarndi virkjum:
- `==` og `!=`, tveir nemendur eru eins ef nafnið er það sama.
- `<`, `>`, `<=` og `>=`, stjórnar fyrst af meðaleinkunninn en ef meðaleinkunnin eru eins á að horfa til nafns. Dæmi:
    - ("Geir", 3.5) er minna en ("Geir", 4.5)
    - ("Geir", 5.0) er minna en ("Konni", 5.0)
- `<<` virkinn fyrir cout þannig að cout kunni að skrifa út klasann.

Dæmi um notkun: 
```cpp
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

    // Jafngildi ræðst af nafni, þó einkunnir séu ólíkar.
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
```
