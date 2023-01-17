#ifndef BOUTIQUE_GUARD
#define BOUTIQUE_GUARD

#include <iostream>


using std::string;


class Boutique{
    int nombrePersonneMax;
    int nombrePersonneActuel;
    string nomBoutique;

    public:
        int getNbPersonneMax();
        int getNbPersonneActuelle();
        string getnomBoutique();
        Boutique(int nbPersonne, string nom);
};

#endif