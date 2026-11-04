// stafli.hpp
#pragma once

#include <iostream>

class Stafli {
    private:
        int* staflinn;
        int stafla_visir; // index
        int staerd; // stærðin á fylkinu
    public:
        Stafli(); // default smiðurinn (e. constructor)
        Stafli(int upphafsstaerd); // aukasmiður, overloaded smiður
        void push(int stak);
        int pop();
        void prenta();
        ~Stafli(); // eyðir (e. destructor), 
                   // keyrður sjálfkrafa þegar líftíma klasa líkur
};