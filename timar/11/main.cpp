#include <iostream>

#include "hnit.hpp"
#include "hnitastafli.hpp"

using namespace std;

int main() {
    Hnitastafli hs;
    Hnit h = Hnit(2,3);
    hs.setja(h);
    hs.setja(3,4);
    hs.setja(6,8);
    hs.prenta();
    if(hs.skoda(h)) {
        cout << "Kíkti á hnitið: ";
        h.prenta();
    } else {
        cout << "ekkert hnit í staflanum" << endl;
    }
    hs.prenta();
    for(int i = 0; i < 5; i++) {
        Hnit k;
        if(hs.taka(k)) {
            cout << "tók á hnitið: ";
            k.prenta();
        } else {
            cout << "ekkert hnit í staflanum" << endl;
        }
    }
    return 0;
}