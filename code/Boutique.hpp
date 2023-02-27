#ifndef BOUTIQUE_GUARD
#define BOUTIQUE_GUARD

#include <iostream>
#include "Zone.hpp"
#include "Position.hpp"

using std::string;

class Boutique : public Zone
{
    int nombrePersonneMax;
    string nomBoutique;
    int nombrePersonneActuel;
    
public:
    int getNbPersonneMax();
    int getNbPersonneActuelle();
    string getnomBoutique();
    Boutique(int, string,Position);
    Boutique();
};

#endif