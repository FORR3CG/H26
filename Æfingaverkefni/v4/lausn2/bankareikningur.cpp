#include "bankareikningur.hpp"

Bankareikningur::Bankareikningur(std::string eigandi, double innistaeda) {
    this->eigandi = eigandi;
    this->innistaeda = innistaeda;
}

bool Bankareikningur::leggja_inn(double upphaed) {
    if(upphaed >= 0) {
        this->innistaeda += upphaed;
        return true;
    }
    return false;
}

bool Bankareikningur::taka_ut(double upphaed) {
    if(this->innistaeda - upphaed >= 0) {
        this->innistaeda -= upphaed;
        return true;
    }
    return false;
}

double Bankareikningur::sja_innistaedu() {
    return this->innistaeda;
}

void Bankareikningur::prenta() {
    std::cout << "Reikningshafi: " << this->eigandi << ", innistæða: " << this->innistaeda << std::endl;
}
