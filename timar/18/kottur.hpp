#pragma once

#include <string>
#include "dyr.hpp"

class Kottur : public Dyr {
private:
    std::string eigandi;

public:
    Kottur();
    Kottur(int id, std::string nafn, std::string eigandi);
    std::string to_string();
    Kottur* afrita() { return new Kottur(*this); }
    ~Kottur();
};
