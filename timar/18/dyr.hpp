#pragma once

#include <string>

class Dyr {
private:
    int id;
    std::string nafn;

public:
    Dyr();
    Dyr(int id, std::string nafn);
    int get_id();
    std::string get_nafn();
    std::string to_string();
    ~Dyr();
};
