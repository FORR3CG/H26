#include "hnit.hpp"

Hnit::Hnit() {
    this->x = 0;
    this->y = 0;
}

Hnit::Hnit(int x, int y) {
    this->x = x;
    this->y = y;
}

int Hnit::get_x() {
    return this->x;
}

void Hnit::set_x(int x) {
    this->x = x;
}

int Hnit::get_y() {
    return this->y;
}

void Hnit::set_y(int y) {
    this->y = y;
}

void Hnit::prenta() {
    std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}

std::string Hnit::to_string() {
    return std::to_string('(') +
           std::to_string(this->x) +
           ", " +
           std::to_string(this->y) +
           std::to_string(')');
}

bool Hnit::er_eins_og(Hnit& hitt) {
    if(this->x == hitt.x && this->y == hitt.y) {
        return true;
    } else {
        return false;
    }  
}

bool Hnit::operator==(Hnit& hitt) {
    return this->x == hitt.x && this->y == hitt.y; 
    /*  if(this->x == hitt.x && this->y == hitt.y) {
            return true;
        } else {
            return false;
        } */
}
        
bool Hnit::operator!=(Hnit& hitt) {
    // this (1,2), hitt (2,2) if(this != hitt)
    return !(*this == hitt);
}

bool Hnit::operator<(Hnit& hitt) {
    // skoðum x-in fyrst, ef þau eru eins skoðum við y-in
    if(this->x == hitt.x) {
        return this->y < hitt.y;
    } else {
        return this->x < hitt.x;
    }
}

bool Hnit::operator>(Hnit& hitt) {
    return hitt < *this;
}

bool Hnit::operator<=(Hnit& hitt) {
    return !(*this > hitt);
}

bool Hnit::operator>=(Hnit& hitt) {
    return !(*this < hitt);
}

std::ostream& operator<<(std::ostream& ostr, Hnit& hnit) {
    return ostr << hnit.to_string();
    // eða ef við eigum ekki to_string
    //return ostr << "(" << hnit.get_x() << ", " << hnit.get_y() << ")";
}
