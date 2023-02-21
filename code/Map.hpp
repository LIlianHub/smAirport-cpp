#ifndef _MAP
#define _MAP

#include "Personne.hpp"

class Map
{
    public :
    int nbpersonne;
    int grille[20][20];
    Personne tabpers[25];

    public:
        Map();
        void AfficherMap();
        int OnthisCase(int,int);
};

extern Map p;
#endif