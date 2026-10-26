### Æfingaverkefni 2 - Bendar

Muna:
- `&` fyrir breytu skilar vistfangingu (e. address).
- Pointer er breyta sem geymir númer á minnishólfi (vistfang) en ekki gildi.
- `*` fyrir framan pointer-breytu, dereference-ar pointer og veitir aðgang að gildinu í breytunni sem pointerinn bendir á. Dæmi:
    - `cout << *a_ptr` skrifar út gildið sem breytan sem a_ptr vísar á geymir.
    - `*a_ptr = 20` skrifar 20 í breytuna sem a_ptr bendir á.

        Breyta | Gildi | Vistfang
        --- | :-: | --:
        a | 10 | 0xFF00
        a_ptr | 0xFF00 | 0xAA00

#### 1. Gildi og vistfang - [Lausn](./lausn_1/main.cpp)

Búðu til heiltölubreytu `tala` með gildið `25` og benda `tala_ptr` sem bendir á hana. 

Prentaðu út:

1. Gildið á `tala`.
2. Vistfangið á `tala`.
3. Vistfangið sem `tala_ptr` geymir.
4. Gildið sem `tala_ptr` bendir á.

#### 2. Breytt í gegnum benda - [Lausn](./lausn_2/main.cpp)

Byrjaðu með:

```cpp
int tala = 8;
int* tala_ptr = &tala;
```

Notaðu `tala_ptr` til að:

1. Breyta `tala` í `20`.
2. Hækka gildið um `5`.
3. Tvöfalda gildið.

Prentaðu út `tala` eftir hvert skref. 

#### 3. Hvað skrifast út?

Skoðaðu kóðann hér fyrir neðan og reyndu að finna út hvað skrifast út án þess að keyra kóðann.

```cpp
int fyrri = 3;
int seinni = 9;
int* bendir = &fyrri;

*bendir = 7;
bendir = &seinni;
*bendir = *bendir + 2;

cout << fyrri << ' -> ' << seinni << endl;
```
Settu svo kóðann í `main` fall og keyrðu til að sjá hvort þú svaraði rétt.

#### 4. Færa benda afturábak og áfram - [Lausn](./lausn_4/main.cpp)

Byrjaðu með:

```cpp
int tolur[5] = {10, 20, 30, 40, 50};
int* tolur_ptr = tolur;
```

Prentaðu fyrst gildið sem bendirinn bendir á. Færðu hann svo með `++`, `--`, `+=` og `-=` þannig að gildin prentist út í þessari röð:

```
10 50 30 20 40
```

Notaðu allar fjórar aðgerðirnar að minnsta kosti einu sinni. 

#### 5. Rekja bendareikning

Skoðaðu kóðann hér fyrir neðan og reyndu að finna út hvað skrifast út án þess að keyra kóðann.

```cpp
int tolur[6] = {3, 6, 9, 12, 15, 18};
int* tolur_ptr = tolur;

tolur_ptr++;
tolur_ptr += 4;
tolur_ptr -= 3;
tolur_ptr--;
tolur_ptr += 2;

cout << *tolur_ptr << endl;
```
Settu svo kóðann í `main` fall og keyrðu til að sjá hvort þú svaraði rétt.

#### 6. Summa fylkis - [Lausn](./lausn_6/main.cpp)

Skrifaðu fall `summa` sem tekur bendi á fylki ásamt stærð þess og skilar summu allra stakanna. Notaðu lykkju og bendareikning (++) til að færa þig á milli stakanna.

```cpp
int summa(int* fylki, int staerd);

int main() {
    int tolur[] = {1, 2, 3, 4, 5, 6};
    int staerd = sizeof(tolur) / sizeof(*tolur);

    cout << summa(tolur, staerd) << endl;
    // ætti að prenta út 21

    return 0;
}
```

#### 7. Önnur summa fylkis - [Lausn](./lausn_7/main.cpp)

Breyttu útfærslunni á fallinu hér fyrir ofan þannig að fallið skili ekki summunni heldur taki inn breytu sem fær svo summuna.

```cpp
void summa(int* fylki, int staerd, int& summan);

int main() {
    int tolur[] = {1, 2, 3, 4, 5, 6};
    int staerd = sizeof(tolur) / sizeof(*tolur);
    int samtals = 0;

    summa(tolur, staerd, samtals);

    cout << samtals << endl;
    // ætti að prenta út 21

    return 0;
}
```

#### 8. Númerið á stakinu með hæsta gildið - [Lausn](./lausn_8/main.cpp)

Skrifaðu fall sem tekur inn bendi á unsigend int fylki og skilar til baka númerinu (e. index) á stakinu með hæsta gildið.

```cpp
int index_a_staersta_staki(unsigned int* fylki, int staerd);

int main() {
    unsigned int tolur[] = {10, 7, 3, 20, 8, 9};
    int staerd = sizeof(tolur) / sizeof(*tolur);

    int staersti_idx = index_a_staersta_staki(tolur, staerd);
    cout << "stærsta talan er: " << tolur[staersti_idx] << endl;
    // ætti að skrifa út "stærsta talan er: 20"
    return 0;
}
```