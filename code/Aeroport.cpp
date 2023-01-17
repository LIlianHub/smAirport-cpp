#include <iostream>   
#include "Aeroport.hpp"


Aeroport::Aeroport(std::string leNom, int nbrZoneBagage) : nom{leNom}, zoneBagages{new ZoneBagage[nbrZoneBagage]}
{
}

std::string Aeroport::getNom(){
    return nom;
}

Aeroport::~Aeroport(){
    delete [] zoneBagages;
}

