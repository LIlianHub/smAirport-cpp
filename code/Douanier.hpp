#ifndef DOU_GUARD
#define DOU_GUARD

#include "Personne.hpp"
#include "Position.hpp"
#include "Map.hpp"
#include "Random_MT.hpp"

class Douanier : public Personne
{
        bool enControle;
        Position personneControlee;
        int dureeControleActu = 0;

public:
        Douanier();
        Douanier(std::string, std::string);
        Douanier(Position p);
        ~Douanier();
        int Action();
        

private:
        void getVoisin(int &, Position[]);
        bool getEnControle();
        void setEnControle(bool);
        void DeplacementAleatoire();
};

// Probabilité fin de controle en fonction du temps

const double probaControle[8] = {0.2, 0.3, 0.5, 1};

//la map
extern Map m;
#endif