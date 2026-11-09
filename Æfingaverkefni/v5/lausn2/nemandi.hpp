#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Nemandi {
    private:
        std::string nafn;
        int fjoldi_einkunna;
        int einkunna_visir;
        double* einkunnir;
    public:
        Nemandi(std::string nafn);
        void skra_einkunn(double einkunn);
        double medaleinkunn();
        void prenta();
        std::string to_string();
        bool operator==(Nemandi& hinn);
        bool operator!=(Nemandi& hinn);
        bool operator<(Nemandi& hinn);
        bool operator>(Nemandi& hinn);
        bool operator<=(Nemandi& hinn);
        bool operator>=(Nemandi& hinn);
        ~Nemandi();
};

std::ostream& operator<<(std::ostream& ostr, Nemandi& nemandi);