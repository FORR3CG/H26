// stafli.cpp
#include "stafli.hpp"

Stafli::Stafli() {
    this->staerd = 5;
    this->staflinn = new int[this->staerd];
    this->stafla_visir = 0;
} 

Stafli::Stafli(int upphafsstaerd) {
    this->staerd = upphafsstaerd;
    this->staflinn = new int[this->staerd];
    this->stafla_visir = 0;
} 

void Stafli::push(int stak) {
    if(this->stafla_visir < this->staerd) {
        this->staflinn[this->stafla_visir++] = stak;
    } else {
        // þurfum að stækka fylkið
        std::cout << "Stækka staflann!!\n";
        int* temp = new int[this->staerd * 2];
        for(int i = 0; i < this->staerd; i++) {
            temp[i] = this->staflinn[i];
        }
        delete [] this->staflinn;
        this->staflinn = temp;
        this->staerd *= 2;
        this->push(stak);
        // eða
        // this->staflinn[this->stafla_visir++] = stak;
    }
}

int Stafli::pop() {
    if(this->stafla_visir > 0)
        return this->staflinn[--this->stafla_visir];
    return -1;
}

void Stafli::prenta() {
    std::cout << "------------------------------------\n";
    for(int i = 0; i < this->stafla_visir; i++) {
        std::cout << this->staflinn[i] << " ";
    }
    std::cout << std::endl;
}

Stafli::~Stafli() {
    delete [] this->staflinn;
}
