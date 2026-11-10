#include <iostream>

#include "hnit.hpp"
#include "hnitastafli.hpp"

using namespace std;

int main() {
    Hnitastafli hs;
    Hnit h = Hnit(2,3);
    Hnit h2 = Hnit(3,3);
    cout << h << " -> " << h2 << endl;
    if(1.0 == 1.0) cout << "eitthvað" << endl;
    // if(h.==(h2)) {
    if(h == h2) {
        cout << "hnitin eru eins" << endl;
    } else {
        cout << "hnitin eru ekki eins" << endl;
    }
    if(h.er_eins_og(h2)) {
        cout << "hnitin eru eins" << endl;
    } else {
        cout << "hnitin eru ekki eins" << endl;
    }
    if(h < h2) {
        // gera eitthvað
    }
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

/*
class Hnit:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __eq__(self, hitt):
        return self.x == hitt.x and self.y == hitt.y

    def __ne__(self, hitt):
        return not (self == hitt)


h1 = Hnit(1,2)
h2 = Hnit(2,2)
print((h1 == h2))
*/