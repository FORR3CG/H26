# FORR3CG - Skilaverkefni 3 (2,5%)

- **Skilafrestur** er til miðnættis þriðjudaginn 24. nóvember.
- **Sein skil**, ekki er hægt að bjóða upp á sein skil fyrir verkefnið, lausn verður birt í tímanum miðvikudaginn 25. nóvember.
- **Ekki er heimilt** að nota tilbúnar lausnir fyrir fylkið (t.d. std::vector eða std::stack).
- **Skiptu klösunum upp** í cpp og hpp skrár.

# Verkefnalýsing – Spilunarlisti

Útfærðu spilunarlista sem geymir lög í fylki sem stækkar eftir þörfum. Þú átt að geta sett lag fremst, aftast eða á tiltekinn stað, leitað að ákveðnu lagi og eytt ákveðnu lagi. 

## Klasinn `Lag`

Lag geymir titil og flytjanda sem `string`. Útfærðu default smið sem býr til lag án titils ("") og flytjanda ("") og svo annan sem tekur við heitinu og flytjandanum. Klasinn þarf að eiga getters og setters fyrir gagnabreyturnar ásamt því að eiga `to_string()` fall. Útfærðu `==` virkjann þannig að tvö lög eru eins ef bæði titill og flytjandi er eins. Kenndu svo `cout` (ostream) að skrifa út klasann.

Dæmi um notkun:

```c++
Lag lag1("Tskólabandið", "Skólasöngurinn");
cout << lag1 << endl;
// skrifar út: Tskólabandið - Skólasöngurinn
Lag lag1("Tskólabandið", "Skólasöngurinn");
if(lag1 == lag2) cout << "Þetta er sama lagið" << endl;
```

## Klasinn `Spilunarlisti`

Klasinn þarf að halda utan um tilvik af Lag klasanum í kviklegu fylki (e. dynamic array). Upphafsstærð fylkisins á að vera 5 stök og stærðin tvöfaldast þegar stækka þarf.

Það þarf að vera hægt að:
- Setja lag fremst í listann.
- Setja lag aftast í listann.
- Setja lag á áveðinn stað í listann.
- Finna ákveðið lag (skilar indexnum).
- Eyða ákveðnu lagi.

Láttu föll skila true/false eftir því hvort aðgerð tekst þar sem það á við.

Setja föllin þurfa að vera til í tveimur útgáfum, önnur tekur inn tilvik af `Lag` og hin tekur inn titil og flytjanda.

Útfærðu eyði (e. destructor) og kenndu `cout` að nota klasann.

Dæmi um notkun:
```c++
Spilunarlisti sl;
sl.setja_fremst("Tskólabandið", "Skólasöngurinn");
sl.setja_fremst("TBRDúó", "Keppnin");
Lag nytt_lag("Tskólabandið", "Nýja lagið");
sl.setja_fremst(nytt_lag);
cout << sl << endl;
// skrifar út:
// 1. Tskólabandið - Nýja lagið
// 2. TBRDúó - Keppnin
// 3. Tskólabandið - Skólasöngurinn
```

## Skil

Skilaðu `lag.hpp`, `lag.cpp`, `spilunarlisti.hpp`, `spilunarlisti.cpp` og `main.cpp`. 
