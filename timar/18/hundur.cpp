#include "hundur.hpp"

Hundur::Hundur(int id, std::string nafn, int einkunn)
    : Dyr(id, nafn), hlydnieinkunn(einkunn) {}

std::string Hundur::to_string() {
    return "Hundur, id: " + std::to_string(this->get_id()) + ", " + this->get_nafn()
           + ", einkunn: " + std::to_string(this->hlydnieinkunn);
}
