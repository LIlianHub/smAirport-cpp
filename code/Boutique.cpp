#include "Boutique.hpp"

int Boutique::getNbPersonneMax()
{
    return nombrePersonneMax;
}

int Boutique::getNbPersonneActuelle()
{
    return nombrePersonneActuel;
}

string Boutique::getnomBoutique()
{
    return nomBoutique;
}

Boutique::Boutique(int nbPersonne, string nom) : nombrePersonneMax(nbPersonne), nomBoutique(nom), nombrePersonneActuel(0)
{
}

Boutique::Boutique()
{
}