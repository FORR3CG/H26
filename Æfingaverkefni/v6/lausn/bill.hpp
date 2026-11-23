#pragma once

#include "okutaeki.hpp"

class Bill : public Okutaeki {
private:
    int saeti;

public:
    Bill(int id, std::string heiti, int saeti);
    std::string to_string() override;
};
