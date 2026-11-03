#pragma once

#include <iostream>

class Retthyrningur {
    private:
        int breidd;
        int haed;
    public:
        Retthyrningur(int breidd, int haed);
        int flatarmal();
        int ummal();
        void prenta();
};