// punktur.cpp
#include "punktur.hpp"

Punktur::Punktur() {
    this->x = 1;
    this->y = 1;
}

Punktur::Punktur(int x, int y) {
    this->x = x;
    this->y = y;
}

int Punktur::get_x() {
    return this->x;
}

void Punktur::set_x(int x) {
    this->x = x;
}

int Punktur::get_y() {
    return this->y;
}

void Punktur::set_y(int y) {
    this->y = y;
}

int Punktur::deiling() {
    if(this->y != 0)
        return this->x / this->y;
    else return 1;
}

void Punktur::prenta() {
    std::cout << "x: " << this->x << ", y: " << this->y << std::endl;
}

