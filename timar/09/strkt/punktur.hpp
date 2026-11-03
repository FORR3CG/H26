// punktur.hpp
#include <iostream>

class Punktur {
    private:
        int x;
        int y;
    public:
        Punktur();
        Punktur(int x, int y);
        int get_x();
        void set_x(int x);
        int get_y();
        void set_y(int y);
        int deiling();
        void prenta();
};