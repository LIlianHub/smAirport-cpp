#ifndef VIS_GUARD
#define VIS_GUARD

#include "Personne.hpp"

class Visiteur : public Personne {

    int nbBagage;
    int budget;


    public:
        int getBagage();
        int getBudget();
        void setBudget(int bud);
        void setBagage(int bag);
        Visiteur(std::string name,std::string prename,int,int);
        Visiteur();
        void Action();

};

#endif