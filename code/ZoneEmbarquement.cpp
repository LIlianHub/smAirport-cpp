#include "ZoneEmbarquement.hpp"
#include "Map.hpp"
extern Map m;

int ZoneEmbarquement::getNombrePersonneMax(){
    return nombrePersonneMax;
}

int ZoneEmbarquement::getNbPersonneActuelle(){
    return nombrePersonneActuelle;
}

string ZoneEmbarquement::getnomZoneEmarquement(){
    return nomZoneEmbarquement

    ;
}

ZoneEmbarquement::ZoneEmbarquement(){
    nombrePersonneMax=100;
    nombrePersonneActuelle=0;
    nomZoneEmbarquement="Boutique"/*+compteur*/;
}

ZoneEmbarquement::ZoneEmbarquement(int nbPersonne, string nom,Position p):nombrePersonneMax(nbPersonne),nombrePersonneActuelle(0),nomZoneEmbarquement(nom){
    //compteur++;
    m.grille[p.getX()][p.getY()] = 5;
}
