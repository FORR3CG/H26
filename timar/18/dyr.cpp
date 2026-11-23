#include "dyr.hpp"

Dyr::Dyr() : id(-1), nafn("") {}

Dyr::Dyr(int id, std::string nafn) : id(id), nafn(nafn) {}

int Dyr::get_id() {
    return this->id;
}

std::string Dyr::get_nafn() {
    return this->nafn;
}

std::string Dyr::to_string() {
    return std::to_string(this->id) + " " + this->nafn;
}
