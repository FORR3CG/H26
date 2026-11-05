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
