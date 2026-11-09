#pragma once

#include <iostream>
#include <string>

class Bankareikningur {
    private:
        std::string eigandi;
        double innistaeda;
    public:
        Bankareikningur(std::string eigandi, double innistaeda);
        bool leggja_inn(double upphaed);
        bool taka_ut(double upphaed);
        double sja_innistaedu();
        void prenta();

        std::string to_string();
        bool operator==(Bankareikningur& hinn);
        bool operator!=(Bankareikningur& hinn);
        bool operator<(Bankareikningur& hinn);
        bool operator>(Bankareikningur& hinn);
        bool operator<=(Bankareikningur& hinn);
        bool operator>=(Bankareikningur& hinn);
};

std::ostream& operator<<(std::ostream& ostr, Bankareikningur& bankareikningur); 
