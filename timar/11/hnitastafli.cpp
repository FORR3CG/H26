#include "hnitastafli.hpp"

Hnitastafli::Hnitastafli() {
    this->staerd = 2;
    this->staflavisir = 0;
    this->staflinn = new Hnit[this->staerd];
}

void Hnitastafli::setja(Hnit hnit) {
    if(this->staflavisir < this->staerd) {
        this->staflinn[this->staflavisir++] = hnit;
    } else {
        Hnit* nyr_stafli = new Hnit[this->staerd * 2];
        for(int i = 0; i < this->staerd; i++) 
            nyr_stafli[i] = this->staflinn[i];
        delete [] this->staflinn;
        this->staflinn = nyr_stafli;
        this->staerd *= 2;
        this->setja(hnit);
    }
}

void Hnitastafli::setja(int x, int y) {
    Hnit h = Hnit(x, y);
    this->setja(h);
    // eða
    // this->setja(Hnit(x, y));
}

bool Hnitastafli::taka(Hnit& hnit) {
    if(this->staflavisir > 0) {
        hnit = this->staflinn[--this->staflavisir];
        return true;
    }
    return false;
}

bool Hnitastafli::skoda(Hnit& hnit) {
    if(this->staflavisir > 0) {
        hnit = this->staflinn[this->staflavisir - 1];
        return true;
    }
    return false;
}

void Hnitastafli::prenta() {
    for(int i = 0; i < this->staflavisir; i++)
        this->staflinn[i].prenta();
}

Hnitastafli::~Hnitastafli() {
    delete [] this->staflinn;
}
