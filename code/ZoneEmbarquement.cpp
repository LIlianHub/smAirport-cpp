#include "ZoneEmbarquement.hpp"

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

ZoneEmbarquement::ZoneEmbarquement(int nbPersonne, string nom):nombrePersonneMax(nbPersonne),nombrePersonneActuelle(0),nomZoneEmbarquement(nom){
    
}
