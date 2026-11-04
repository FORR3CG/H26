# FORR3CG - Skilaverkefni 2 (2,5%)

- **Skilafrestur** er til miðnættis þriðjudaginn 10. nóvember.
- **Sein skil**, ekki er hægt að bjóða upp á sein skil fyrir verkefnið, lausn verður birt í tímanum miðvikudaginn 11. nóvember.
- **Ekki er heimilt** að nota tilbúnar lausnir fyrir fylkin (t.d. std::vector eða std::stack).
- **Skiptu klösunum upp** í cpp og hpp skrár.

## Verkefnalýsing - Spilastokkur (stafli)

Þú átt að útfæra spilabunka með stafla. Nýtt spil fer efst á bunkann og aðeins má taka efsta spilið af honum: **síðast inn, fyrst út (LIFO)**.

Staflinn byrjar með pláss fyrir tvö spil og stækkar sjálfkrafa þegar það pláss fyllist, tvöfaldaðu stærðina þegar þarf að stækka.

### 1. Klasinn `Spil`

Búðu til klasann `Spil` með private gagnabreytunum `sort` og `gildi`. Bæði eru heiltölur.

Sortir eru táknaðar með tölum:

| Tala | Sort |
|---|---|
| 0 | Hjarta |
| 1 | Spaði |
| 2 | Tígull |
| 3 | Lauf |

Gildi eru frá 1 til og með 13. Ás hefur gildið 1, gosi 11, drottning 12 og kóngur 13.

Notaðu þessa klasaskilgreiningu:

```cpp
class Spil {
    private:
        int sort;
        int gildi;

    public:
        Spil();
        Spil(int sort, int gildi);

        int saekja_sort();
        void setja_sort(int sort);
        int saekja_gildi();
        void setja_gildi(int gildi);

        void prenta();
};
```

Klasinn á að virka svona:

- Sjálfgefinn constructor býr til hjartaás.
- Hinn constructorinn tekur við sort og gildi.
- `saekja_sort()` og `saekja_gildi()` skila gildum gagnabreytanna.
- `setja_sort()` breytir sort spilsins.
- `setja_gildi()` breytir gildi spilsins.
- `prenta()` prentar sort og gildi spilsins á snirtilegan hátt.

Gera má ráð fyrir að constructor og setter-föllin fái lögleg gildi.

Í `prenta()` á að nota `switch` til að velja hvað birtist.  Texta má prenta beint með `cout`.

Dæmi um úttak:

```text
Hjarta as
Spadi 7
Lauf kongur
```

### 2. Klasinn `Spilastafli`

Búðu til klasann `Spilastafli` sem geymir **tilvik af `Spil` í kviku fylki**.

Notaðu þessa klasaskilgreiningu:

```cpp
class Spilastafli {
    private:
        Spil* spil;
        int staflavisir;
        int staerd;
    public:
        Spilastafli();
        void setja(Spil spil);
        void setja(int sort, int gildi);
        bool taka(Spil& spil);
        bool skoda(Spil& spil);
        void prenta();
        ~Spilastafli();
};
```

- Smiðurinn býr til staflann með pláss fyrir tvö spil.
- Setja föllin (e. push) bæta spili aftast í staflann og stækka staflann ef þarf.
    - Ef stækka þarf á að tvöfalda stærðina.
- `taka` (e. pop) fallið tekur inn vísun á Spil og afritar í það efsta spilið í staflanum, fjarlægir það og skilar true ef það er eitthvað spil í staflanum annars skilar fallið false.
- `skoda` (e. peek) fallið gerir það sama og `taka` fyrir utan að það fjarlægir ekki spil úr staflanum.
- `prenta` fallið prentar út öll spilin í staflanum (notar prenta fallið úr Spil klasanum).
- Eyðirinn (e. destructor) gerir það sem eyðar eiga að gera.

### 3. Forrit sem sýnir virkni

Skrifaðu forrt sem sýnir virkni klasanna.
- Búðu til tvö tilvik af Spil klasanum, t.d. Hjarta sjöa og Laufa gosi og settu í staflann með setja(Spil) fallinu.
- Bættu svo tveimur spilum í viðbót við staflann með því að nota setja(sort, gildi) fallið.
- Notaðu sækja og taka föllin.
- Prentaðu staflann.

## Skil

Skilaðu öllum kóða (ætti að vera 2 hpp skrár og 3 cpp skrár) í zip skrá á canvas,
