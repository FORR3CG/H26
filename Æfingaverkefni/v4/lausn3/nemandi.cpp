#include "nemandi.hpp"

Nemandi::Nemandi(std::string nafn) {
    this->nafn = nafn;
    for(int i = 0; i < 5; i++) {
        this->einkunnir[i] = 5.0;
    }
}

void Nemandi::skra_einkunn(int nr, double einkunn) {
    if(nr >= 0 && nr < 5) this->einkunnir[nr] = einkunn;
}

double Nemandi::medaleinkunn() {
    double summa = 0.0;
    for(int i = 0; i < 5; i++) {
        summa += this->einkunnir[i];
    }
    return summa / 5.0;
}

void Nemandi::prenta() {
    std::cout << "Nafn: " << this->nafn << std::endl;
    std::cout << "Einkunnir:" << std::endl;
    for(int i = 0; i < 5; i++) {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << this->einkunnir[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Meðaleinkunn: " << this->medaleinkunn() << std::endl;
}
