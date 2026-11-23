#include "kottur.hpp"

Kottur::Kottur() = default;

Kottur::Kottur(int id, std::string nafn, std::string eigandi)
    : Dyr(id, nafn), eigandi(eigandi) {}

std::string Kottur::to_string() {
    return "Köttur, id: " + std::to_string(this->get_id()) + ", nafn: "
           + this->get_nafn() + ", eigandi: " + this->eigandi;
}
