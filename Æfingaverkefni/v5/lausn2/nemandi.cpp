#include "nemandi.hpp"

Nemandi::Nemandi(std::string nafn) {
    this->nafn = nafn;
    this->fjoldi_einkunna = 1;
    this->einkunna_visir = 0;
    this->einkunnir = new double[this->fjoldi_einkunna];
}

void Nemandi::skra_einkunn(double einkunn) {
    if(this->einkunna_visir < this->fjoldi_einkunna) {
        this->einkunnir[this->einkunna_visir++] = einkunn;
    } else {
        double* nyjar_einkunnir = new double[this->fjoldi_einkunna + 1];
        for(int i = 0; i < this->fjoldi_einkunna; i++) {
            nyjar_einkunnir[i] = this->einkunnir[i];
        }
        delete [] this->einkunnir;
        this->einkunnir = nyjar_einkunnir;
        this->fjoldi_einkunna++;
        this->skra_einkunn(einkunn);
    }
}

double Nemandi::medaleinkunn() {
    double summa = 0.0;
    for(int i = 0; i < this->einkunna_visir; i++) {
        summa += this->einkunnir[i];
    }
    if(this->einkunna_visir == 0) {
        return 1.0;
    } else {
        return summa / this->fjoldi_einkunna;
    }
}

void Nemandi::prenta() {
    std::cout << "Nafn: " << this->nafn << std::endl;
    std::cout << "Einkunnir:" << std::endl;
    for(int i = 0; i < this->einkunna_visir; i++) {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << this->einkunnir[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Meðaleinkunn: " << this->medaleinkunn() << std::endl;
}

std::string Nemandi::to_string() {
    std::string haus = std::string("Nafn: ") + this->nafn + std::string(", einkunnir: ");
    std::string einkunnir = "";
    for(int i = 0; i < this->einkunna_visir; i++) {
        einkunnir += std::to_string(this->einkunnir[i]) + ", ";
    }
    return haus + einkunnir + std::string(", meðaltal: ") + std::to_string(this->medaleinkunn());     
}

bool Nemandi::operator==(Nemandi& hinn) {
    return this->nafn == hinn.nafn;
}

bool Nemandi::operator!=(Nemandi& hinn) {
    return !(*this == hinn);
}

bool Nemandi::operator<(Nemandi& hinn) {
    if(this->medaleinkunn() == hinn.medaleinkunn()) {
        return this->nafn < hinn.nafn;
    } else {
        return this->medaleinkunn() < hinn.medaleinkunn();
    }
}

bool Nemandi::operator>(Nemandi& hinn) {
    return hinn < *this;
}

bool Nemandi::operator<=(Nemandi& hinn) {
    return !(*this > hinn);
}

bool Nemandi::operator>=(Nemandi& hinn) {
    return !(*this < hinn);
}

Nemandi::~Nemandi() {
    delete [] this->einkunnir;
}

std::ostream& operator<<(std::ostream& ostr, Nemandi& nemandi) {
    return ostr << nemandi.to_string();
}
