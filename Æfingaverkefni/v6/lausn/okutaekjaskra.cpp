#include "okutaekjaskra.hpp"

Okutaekjaskra::Okutaekjaskra()
    : staerd(2), fjoldi(0), listinn(new Okutaeki*[staerd]) {}

void Okutaekjaskra::staekka() {
    int ny_staerd = staerd * 2;
    Okutaeki** nyr_listi = new Okutaeki*[ny_staerd];

    for (int i = 0; i < fjoldi; ++i)
        nyr_listi[i] = listinn[i];

    delete[] listinn;
    listinn = nyr_listi;
    staerd = ny_staerd;
}

void Okutaekjaskra::skra_bil(int id, std::string heiti, int saeti) {
    if (fjoldi == staerd)
        staekka();

    listinn[fjoldi] = new Bill(id, heiti, saeti);
    ++fjoldi;
}

void Okutaekjaskra::skra_motorhjol(int id, std::string heiti, int rummal) {
    if (fjoldi == staerd)
        staekka();

    listinn[fjoldi] = new Motorhjol(id, heiti, rummal);
    ++fjoldi;
}

bool Okutaekjaskra::fjarlaegja_stak(int id, Okutaeki*& stak) {
    int saeti = 0;
    while (saeti < fjoldi && listinn[saeti]->get_id() != id)
        ++saeti;

    if (saeti == fjoldi)
        return false;

    stak = listinn[saeti];
    for (int i = saeti + 1; i < fjoldi; ++i)
        listinn[i - 1] = listinn[i];

    --fjoldi;
    listinn[fjoldi] = nullptr;
    return true;
}

void Okutaekjaskra::prenta() {
    for (int i = 0; i < fjoldi; ++i)
        std::cout << listinn[i]->to_string() << '\n';
}

Okutaekjaskra::~Okutaekjaskra() {
    for (int i = 0; i < fjoldi; ++i)
        delete listinn[i];
    delete[] listinn;
}