#include <iostream>
#include "punktur.hpp"

using namespace std;

int main() {
    Punktur p1 = Punktur(20, 30);
    Punktur p2 = Punktur();
    //p2.y = 0;
    p2.set_x(30);
    cout << "deiling: " << p2.deiling() << endl;
    //Punktur p1 = {10, 20};
    //prenta_punkt(p1);
    Punktur* p3 = new Punktur;
    (*p3).set_x(50);
    p3->set_x(50);
    //(*p3).y = 60;
    //p3->y = 60;
    
    return 0;
}  

/* class Punktur {
    // public: // ósýnilegt í struct
    // private: // ósýnilegt í class
    private: // bara hægt að nota inn í klasanum
    int x;
    int y;
    public: // hægt að nota allsstaðar
    
    Punktur() { // default smiður
    this->x = 1;
    this->y = 1;
}

Punktur(int x, int y) { // custom smiður
this->x = x;
this->y = y;
}

int get_x() {
    return this->x;
}

void set_x(int x_gildi) {
    this->x = x_gildi;
}

int get_y() {
    return this->y;
}

void set_y(int y) {
    if(y != 0) {
        this->y = y;
    } else {
        // kasta villu eða hvað sem hentar að gera
        this->y = 1;
    }
}

int deiling() {
    return this->x / this->y;
}

void prenta() {
    cout << "x: " << this->x << ", y: " << this->y << endl;
}
};
*/

/* void prenta_punkt(Punktur& punktur) {
    cout << "x: " << punktur.get_x() << ", y: " << punktur.y << endl;
} */