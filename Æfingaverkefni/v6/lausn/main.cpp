#include "okutaekjaskra.hpp"
#include <iostream>

int main() {
    Okutaekjaskra skra;

    skra.skra_bil(1, "Toyota Yaris", 5);
    skra.skra_motorhjol(2, "Honda CB500", 471);
    skra.skra_bil(3, "Mazda MX-5", 2);
    skra.prenta();

    Okutaeki* stak = nullptr;
    if (skra.fjarlaegja_stak(2, stak)) {
        std::cout << "\nFjarlægt: " << stak->to_string() << "\n\n";
        delete stak;
    }

    skra.prenta();
}
