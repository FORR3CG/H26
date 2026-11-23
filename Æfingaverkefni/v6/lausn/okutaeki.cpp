#include "okutaeki.hpp"

Okutaeki::Okutaeki(int id, std::string heiti) : id(id), heiti(heiti) {}

int Okutaeki::get_id() {
    return id;
}

std::string Okutaeki::to_string() {
    return std::to_string(id) + " – " + heiti;
}
