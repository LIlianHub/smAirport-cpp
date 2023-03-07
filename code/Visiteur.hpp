#ifndef VIS_GUARD
#define VIS_GUARD

#include "Personne.hpp"
#include "Random_MT.hpp"
#include "Boutique.hpp"
#include "ZoneBagage.hpp"

class Map;

class Visiteur : public Personne {

    int nbBagage;
    int budget;
    int tempsAvantVol;
    bool aDeposeBagages;
    Position posBoutiqueVoulu{-1,-1};
    Position posBagagesVoulu{-1,-1};
    Position posZEVoulu{-1,-1};
    bool estControlle;
    bool arrive=false;


    public:
        int getBagage();
        int getBudget();
        void setBudget(int bud);
        void setBagage(int bag);
        Visiteur(std::string name,std::string prename,int,int);
        Visiteur();
        Visiteur(Position p);
        int Action();
        ~Visiteur();
        bool getEstControl();
        void setEstControl(bool);

};


#endif