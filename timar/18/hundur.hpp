#pragma once

#include <string>
#include "dyr.hpp"

class Hundur : public Dyr {
private:
    int hlydnieinkunn;

public:
    Hundur(int id, std::string nafn, int einkunn);
    std::string to_string();
    ~Hundur();
};
