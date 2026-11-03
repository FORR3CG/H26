### Æfingaverkefni 4 - Klasar

#### 1 – RettHyrningur - [Lausn](./lausn1/)

Búðu til klasann `Retthyrningur` með:

- Private breytunum `breidd` og `haed`.
- Smið (e. constructor) sem tekur við breidd og hæð.
- Aðferðinni `flatarmal()`.
- Aðferðinni `ummal()`.
- Aðferðinni `prenta()`, sem skrifar út breidd, hæð, flatarmal og ummál.

Skiptu klasanum í .cpp og .hpp skrár.

Búðu til tvo rétthyrninga í `main()` og prentaðu upplýsingar um þá.

#### 2 – Bankareikningur - [Lausn](./lausn2/)

Búðu til klasann `Bankareikningur` með private breytunum `eigandi` (string) og `innistaeda` (double).

Ekki má leggja inn neikvæða upphæð eða taka út meira en sem nemur innistæðu.

Skiptu klasanum í .cpp og .hpp skrár.

Klasinn á að hafa aðferðirnar:

- Smið sem tekur inn nafn og upphafs innistæðu.
- `leggja_inn(double upphaed)`
    - skilar true ef upphæð er 0 eða stærri annars false
- `taka_ut(double upphaed)`
    - skilar true ef innisstæða er hærri en upphæð
- `sja_innistaedu()`
    - skilar innistæðunni
- `prenta()`

Skrifaðu svo forrit sem sýnir virkni klasans.

#### 3 – Einkunnir - [Lausn](./lausn3/)

Búðu til klasann `Nemandi` sem geymir nafn nemanda og fimm einkunnir.

Skiptu klasanum í .cpp og .hpp skrár.

Klasinn á að innihalda:
- `string nafn`
- `double einkunnir[5]`
- Smið sem tekur við nafni og frumstillir allar einkunnir í 5.0.
- `skra_einkunn(int nr, double einkunn)`
- `medaleinkunn()`
- `prenta()`

Gerðu ráð fyrir að allar fimm einkunnir séu skráðar áður en meðaltalið er notað.

Skrifaðu svo forrit sem sýnir virkni klasans.

