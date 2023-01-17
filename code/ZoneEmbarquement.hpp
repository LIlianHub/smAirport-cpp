#ifndef ZONEEMBARQUEMENT_GUARD
#define ZONEEMBARQUEMENT_GUARD
#include <iostream>

using std::string;

class ZoneEmbarquement{
    int nombrePersonneMax;
    int nombrePersonneActuelle;
    string nomZoneEmbarquement;
    FileAttente file;

    public:
        int getNombrePersonneMax();
        int getNbPersonneActuelle();
        string getnomZoneEmarquement();
        ZoneEmbarquement(int nombrePersonne, string nom);
}

#endif