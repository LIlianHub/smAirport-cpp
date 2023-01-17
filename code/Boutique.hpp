#ifndef BOUTIQUE_GUARD
#define BOUTIQUE_GUARD

#include <iostream>

using std::string;

class Boutique
{
    int nombrePersonneMax;
    string nomBoutique;
    int nombrePersonneActuel;
    
public:
    int getNbPersonneMax();
    int getNbPersonneActuelle();
    string getnomBoutique();

public:
    Boutique(int, string);
};

#endif