#ifndef _AEROPORT
#define _AEROPORT

#include "ZoneBagage.hpp"

class Aeroport
{
    std::string nom;
    ZoneBagage * zoneBagages;

public:
    Aeroport(std::string, int);
    ~Aeroport();

public:
    std::string getNom();
};

#endif