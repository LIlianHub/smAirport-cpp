#include <iostream>   
#include "Aeroport.hpp"


Aeroport::Aeroport(std::string leNom, int nbrZoneBagage, int nbrBoutique, int nbrZoneEmbarquement) : nom{leNom}, zoneBagages{new ZoneBagage[nbrZoneBagage]}, boutiques{new Boutique[nbrBoutique]}, zoneEmbarquements{new ZoneEmbarquement[nbrZoneEmbarquement]}
{
}

std::string Aeroport::getNom(){
    return nom;
}

Aeroport::~Aeroport(){
    delete [] zoneBagages;
    delete [] boutiques;
    delete [] zoneEmbarquements;
}

