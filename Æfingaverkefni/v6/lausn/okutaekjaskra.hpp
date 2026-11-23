#pragma once

#include <iostream>
#include "okutaeki.hpp"
#include "bill.hpp"
#include "motorhjol.hpp"

class Okutaekjaskra {
private:
Okutaeki** listinn;
    int staerd;
    int fjoldi;

    void staekka();

public:
    Okutaekjaskra();
    
    void skra_bil(int id, std::string heiti, int saeti);
    void skra_motorhjol(int id, std::string heiti, int rummal);

    bool fjarlaegja_stak(int id, Okutaeki*& stak);
    void prenta();
    ~Okutaekjaskra();
};
