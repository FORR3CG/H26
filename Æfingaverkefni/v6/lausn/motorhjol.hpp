#pragma once

#include "okutaeki.hpp"

class Motorhjol : public Okutaeki {
private:
    int rummal;

public:
    Motorhjol(int id, std::string heiti, int rummal);
    std::string to_string() override;
};
