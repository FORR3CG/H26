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

std::string Bankareikningur::to_string() {
    std::string eigandi = this->eigandi;
    std::string innistaeda = std::to_string(this->innistaeda);
    return eigandi + " " + innistaeda;
}

bool Bankareikningur::operator==(Bankareikningur& hinn) {
    return this->eigandi == hinn.eigandi;
}

bool Bankareikningur::operator!=(Bankareikningur& hinn) {
    return !(*this == hinn);
}

bool Bankareikningur::operator<(Bankareikningur& hinn) {
    if(this->innistaeda == hinn.innistaeda) {
        return this->eigandi < hinn.eigandi;
    } else {
        return this->innistaeda < hinn.innistaeda;
    }
}

bool Bankareikningur::operator>(Bankareikningur& hinn) {
    return hinn < *this;
}

bool Bankareikningur::operator<=(Bankareikningur& hinn) {
    return !(*this > hinn);
}

bool Bankareikningur::operator>=(Bankareikningur& hinn) {
    return !(*this < hinn);
}

std::ostream& operator<<(std::ostream& ostr, Bankareikningur& bankareikningur) {
    return ostr << bankareikningur.to_string();
} 


