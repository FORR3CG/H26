#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Nemandi {
    private:
        std::string nafn;
        double einkunnir[5];
    public:
        Nemandi(std::string nafn);
        void skra_einkunn(int nr, double einkunn);
        double medaleinkunn();
        void prenta();  
};