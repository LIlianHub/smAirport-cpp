#ifndef VIS_GUARD
#define VIS_GUARD

#include "Personne.hpp"

class Visiteur : public Personne {

    int nbBagage;
    int budget;


    public:
        int getBagage();
        int getBudget();
        setBudget(int bud);
        setBagage(int bag);
        Visiteur(std::string,std::string,int,int);
        Visiteur();

};

#endif