#ifndef _AEROPORT
#define _AEROPORT

#include "ZoneBagage.hpp"
#include "Boutique.hpp"
#include "ZoneEmbarquement.hpp"


class Aeroport
{
    std::string nom;
    ZoneBagage * zoneBagages;
    Boutique * boutiques;
    ZoneEmbarquement * zoneEmbarquements;

public:
    Aeroport(std::string, int, int, int);
    ~Aeroport();

public:
    std::string getNom();
};

#endif