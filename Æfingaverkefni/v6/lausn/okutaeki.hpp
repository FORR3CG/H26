#pragma once

#include <string>

class Okutaeki {
private:
    int id;
    std::string heiti;

public:
    Okutaeki(int id, std::string heiti);
    virtual ~Okutaeki() = default;
    int get_id();
    virtual std::string to_string();
};
