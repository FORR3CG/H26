#pragma once

#include "hnit.hpp"

class Hnitastafli {
    private:
        Hnit* staflinn;
        int staerd;
        int staflavisir;
    public:
        Hnitastafli();
        void setja(Hnit hnit); // push
        void setja(int x, int y); // push
        bool taka(Hnit& hnit); // pop
        bool skoda(Hnit& hnit); // peek
        void prenta();
        ~Hnitastafli();
};