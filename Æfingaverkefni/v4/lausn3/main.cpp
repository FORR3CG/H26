#include <iostream>
#include "nemandi.hpp"

using namespace std;

int main() {
    Nemandi geir = Nemandi("Geir");
    geir.prenta();
    double einkunn = 3.5;
    for(int i = 0; i < 5; i++, einkunn+=1.5) {
        geir.skra_einkunn(i, einkunn);
    }
    geir.prenta();
    return 0;
}