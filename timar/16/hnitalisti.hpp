#pragma once

#include "hnit.hpp"

class Hnitalisti {
    private:
        Hnit* listinn;
        int staerd;
        int fjoldi;
        void staekka_um(int staekkun);
    public:
        Hnitalisti();
        ~Hnitalisti();
        void setja_aftast(Hnit stak);
        bool setja_i_saeti(int saeti, Hnit stak);
        bool setja_fremst(Hnit stak);
        bool fjarlaegja_saeti(int saeti, Hnit& stak);
        bool fjarlaegja_fremsta(Hnit& stak);
        bool fjarlaegja_aftasta(Hnit& stak);
        int finna_hnit(Hnit hnit);
        bool fjarlaegja_stak(Hnit& hnit);
        void prenta();
};
