### Æfingaverkefni 5 - Yfirskrifun virkja

#### 1 – Bankareikningur - [Lausn á leiðinni][Lausn](./lausn1/)

Taktu bankareikninginn úr æfingaverkefnum 4 [(sjá hér)](../v4/lausn2/), útfærðu `to_string()` fall fyrir klasann og bættu við eftirfarndi virkjum:
- `==` og `!=`, tveir reikningar eru eins ef eigandinn er sá sami.
- `<`, `>`, `<=` og `>=`, stjórnar fyrst af upphæðinni en ef upphæðirnar eru eins á að horfa til eigandans. Dæmi:
    - ("Geir", 1000) er minna en ("Geir", 2000)
    - ("Geir", 1000) er minna en ("Tskóli", 1000)
- `<<` virkinn fyrir cout þannig að cout kunni að skrifa út klasann.

#### 2 - Nemandi - [Lausn á leiðinni]

Taktu nemandann úr æfingaverkefnum 4 [(sjá hér)](../v4/lausn3/).

Byrjaðu á að breyta klasanum þannig að í stað þess að nemandi hafi fastar 5 einkunnir séu einkunnirnar geymdar í kviku fylki með upphafsstærðina 1 en stækkar svo um 1 í hvert sinn sem einkunn er bætt við (eigðu fall eins og t.d. `skra_einkunn(double einkunn)` sem bætir einkunn í fylkið). Útfærðu svo afritunarsmið (e. copy constructor) fyrir klasann.

Bættu svo við eftirfarndi virkjum:
- `==` og `!=`, tveir nemendur eru eins ef nafnið er það sama.
- `<`, `>`, `<=` og `>=`, stjórnar fyrst af meðaleinkunninn en ef meðaleinkunnin eru eins á að horfa til nafns. Dæmi:
    - ("Geir", 3.5) er minna en ("Geir", 4.5)
    - ("Geir", 5.0) er minna en ("Konni", 5.0)
- `<<` virkinn fyrir cout þannig að cout kunni að skrifa út klasann.
- `=` afritar klasann (passa að afrita ekki bara pointer á einkunnirnar)
