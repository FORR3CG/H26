#pragma once

#include <iostream>
#include <string>

class Hnit {
    private:
        int x;
        int y;
    public:
        Hnit();
        Hnit(int x, int y);
        int get_x();
        void set_x(int x);
        int get_y();
        void set_y(int y);
        void prenta();
        std::string to_string();
        bool operator==(Hnit& hitt);
        bool operator!=(Hnit& hitt);
        bool operator<(Hnit& hitt);
        bool operator>(Hnit& hitt);
        bool operator<=(Hnit& hitt);
        bool operator>=(Hnit& hitt);
        bool er_eins_og(Hnit& hitt);
};

std::ostream& operator<<(std::ostream& ostr, Hnit& hnit);