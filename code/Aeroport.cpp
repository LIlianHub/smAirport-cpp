#include <iostream>   
#include "Aeroport.hpp"


Aeroport::Aeroport(std::string leNom, int nbrZoneBagage, int nbrBoutique) : nom{leNom}, zoneBagages{new ZoneBagage[nbrZoneBagage]}, boutiques{new Boutique[nbrBoutique]}
{
}

std::string Aeroport::getNom(){
    return nom;
}

Aeroport::~Aeroport(){
    delete [] zoneBagages;
    delete [] boutiques;
}

