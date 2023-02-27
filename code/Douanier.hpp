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

public:
        Douanier();
        Douanier(std::string, std::string);
        Douanier(Position p);
        ~Douanier();
        void Action();
        

private:
        void getVoisin(int &, Position[]);
        bool getEnControle();
        void setEnControle(bool);
        void DeplacementAleatoire();
};

const double probaControle[8] = {0.6, 0.2, 0.1, 0.05, 0.05};
extern Map m;
#endif