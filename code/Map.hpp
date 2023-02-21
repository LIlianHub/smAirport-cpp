#ifndef _MAP
#define _MAP

#include "Personne.hpp"
#include "Visiteur.hpp"

class Map
{
    public :
    int nbpersonne;
    int grille[20][20];
    Personne *tabpers[25];

    public:
        Map();
        void AfficherMap();
        int OnthisCase(int,int);
        bool ajouterPers(Personne * p);
};

#endif