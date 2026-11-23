#include "bill.hpp"

Bill::Bill(int id, std::string heiti, int saeti)
    : Okutaeki(id, heiti), saeti(saeti) {}

std::string Bill::to_string() {
    return Okutaeki::to_string() + " (" + std::to_string(saeti) + " sæti)";
}
