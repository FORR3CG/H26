#include "motorhjol.hpp"

Motorhjol::Motorhjol(int id, std::string heiti, int rummal)
    : Okutaeki(id, heiti), rummal(rummal) {}

std::string Motorhjol::to_string() {
    return Okutaeki::to_string() + " (" + std::to_string(rummal) + " cm³)";
}
