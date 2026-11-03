### Æfingaverkefni 3 - `new` - `delete`

#### 1 – Heiltala í kvikminni (e. heap) - [Lausn](./lausn1/main.cpp)

Skrifaðu forrit sem:

1. Býr til heiltölu í kvikminni með `new`.
2. Gefur henni gildið 25.
3. Prentar gildið.
4. Breytir gildinu í 50 og prentar aftur.
5. Losar minnið með `delete`.

#### Verkefni 2 – Samlagningarfylki - [Lausn](./lausn2/main.cpp)

Skrifaðu forrit sem leggur saman tölur sem notandi slær inn.

Forritið á að byrja á að spyrja hversu margar tölur (heiltölur) notandinn vill leggja saman. Forritð býr svo til fylki á heap sem er jafn stórt og fjöldi talnanna sem notandinn vill leggja saman. Næst slær notandinn inn tölurnar (eina i einu) og leggur þær saman. Næst sýnir forritið allar tölurnar sem notandinn sló inn og sýnir loks summu talnanna og losar loks minnið.

#### 3 – Fall sem skilar bendi - [Lausn](./lausn3/main.cpp)

Skrifaðu fallið:

```cpp
int* bua_til_fylki(int fjoldi);
```

Fallið á að búa til kvikt fylki með tölunum frá 1 upp í `fjoldi` og skila bendi á fylkið.

Prentaðu fylkið í `main()` og losaðu minnið.

## Verkefni 4 – Stækka fylki - [Lausn](./lausn4/main.cpp)

Gefið er fylkið:

```cpp
int* tolur = new int[3]{10, 20, 30};
```

Stækkaðu fylkið úr þremur stökum í sex stök. Afritaðu gömlu gildin og bættu við 40, 50 og 60. Skrifaðu svo tölurnar út.

