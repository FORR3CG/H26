#pragma once

#include <iostream>

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
};