#pragma once

#include <string>
#include "dyr.hpp"
#include "hundur.hpp"
#include "kottur.hpp"

class Dyragardur {
    private:
        Dyr** listinn;
        int staerd;
        int fjoldi;
        void staekka_um(int stakkun);
    public:
        Dyragardur();
        Dyragardur(Dyragardur& annar);
        Dyragardur& operator=(Dyragardur& annar);
        int finna_dyr_med_id(int id);
        bool setja_i_saeti(int saeti, Dyr* stak);
        bool skra_hund_aftast(int id, std::string nafn, int hlydnieinkunn);
        bool skra_kott_aftast(int id, std::string nafn, std::string eigandi);
        bool fjarlaegja_eftir_id(int id, Dyr*& stak);
        ~Dyragardur();
};
