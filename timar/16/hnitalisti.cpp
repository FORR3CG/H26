#include "hnitalisti.hpp"

Hnitalisti::Hnitalisti() {
    this->staerd = 3;
    this->fjoldi = 0;
    this->listinn = new Hnit[this->staerd];
}

Hnitalisti::~Hnitalisti() {
    delete [] this->listinn;
}

void Hnitalisti::staekka_um(int staekkun) {
    Hnit* nyr_listi = new Hnit[this->staerd + staekkun];
    for(int i = 0; i < this->fjoldi; i++)
        nyr_listi[i] = this->listinn[i];
    delete [] this->listinn;
    this->listinn = nyr_listi;
    this->staerd += staekkun;
}

void Hnitalisti::setja_aftast(Hnit stak) {
    if(this->fjoldi >= this->staerd)
        this->staekka_um(10);
    this->listinn[this->fjoldi++] = stak;
}

bool Hnitalisti::setja_i_saeti(int saeti, Hnit stak) {
    if(saeti < 0 || saeti > this->fjoldi)
        return false;
    if(this->fjoldi >= this->staerd)
        this->staekka_um(10);
    for(int i = this->fjoldi; i > saeti; i--)
        this->listinn[i] = this->listinn[i - 1];
    this->listinn[saeti] = stak;
    this->fjoldi++;
    return true;
}

bool Hnitalisti::setja_fremst(Hnit stak) {
    return this->setja_i_saeti(0, stak);
}

bool Hnitalisti::fjarlaegja_saeti(int saeti, Hnit& stak) {
    if(saeti < 0 || saeti >= this->fjoldi)
        return false;
    stak = this->listinn[saeti];
    for(int i = saeti; i < this->fjoldi - 1; i++)
        this->listinn[i] = this->listinn[i + 1];
    this->fjoldi--;
    return true;
}

bool Hnitalisti::fjarlaegja_fremsta(Hnit& stak) {
    return this->fjarlaegja_saeti(0, stak);
}

bool Hnitalisti::fjarlaegja_aftasta(Hnit& stak) {
    return this->fjarlaegja_saeti(this->fjoldi - 1, stak);
}

int Hnitalisti::finna_hnit(Hnit hnit) {
    for(int i = 0; i < this->fjoldi; i++) {
        if(this->listinn[i] == hnit)
            return i;
    }
    return -1;
}

bool Hnitalisti::fjarlaegja_stak(Hnit hnit) {
    int idx = this->finna_hnit(hnit);
    if(idx != -1) {
        Hnit dummy;
        return this->fjarlaegja_saeti(idx, dummy);
    }
    return false;
}

void Hnitalisti::prenta() {
    for(int i = 0; i < this->fjoldi; i++)
        std::cout << this->listinn[i] << " ";
    std::cout << std::endl;
}
