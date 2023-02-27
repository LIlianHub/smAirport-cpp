#ifndef ZONEEMBARQUEMENT_GUARD
#define ZONEEMBARQUEMENT_GUARD
#include <iostream>
#include "FileAttente.hpp"
#include "Zone.hpp"

using std::string;

class ZoneEmbarquement : public Zone{
    int nombrePersonneMax;
    int nombrePersonneActuelle;
    string nomZoneEmbarquement;
    FileAttente file;

    public:
        int getNombrePersonneMax();
        int getNbPersonneActuelle();
        string getnomZoneEmarquement();
        ZoneEmbarquement(int nombrePersonne, string nom);
        ZoneEmbarquement();
};

#endif