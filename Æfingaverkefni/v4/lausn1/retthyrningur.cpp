#include "retthyrningur.hpp"

Retthyrningur::Retthyrningur(int breidd, int haed) {
    this->breidd = breidd;
    this->haed = haed;
}

int Retthyrningur::flatarmal() {
    return this->breidd * this->haed;
}

int Retthyrningur::ummal() {
    return 2 * (this->breidd + this->haed);
}

void Retthyrningur::prenta() {
    std::cout << "B: " << this->breidd << ", H: " << this->haed 
              << ", flatarmál: " << this->flatarmal() 
              << ", ummál: " << this->ummal() << std::endl;
}
