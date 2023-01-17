#ifndef _AEROPORT
#define _AEROPORT

#include "ZoneBagage.hpp"
#include "Boutique.hpp"


class Aeroport
{
    std::string nom;
    ZoneBagage * zoneBagages;
    Boutique * boutiques;

public:
    Aeroport(std::string, int, int);
    ~Aeroport();

public:
    std::string getNom();
};

#endif