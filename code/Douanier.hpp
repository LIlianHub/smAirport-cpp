#ifndef DOU_GUARD
#define DOU_GUARD

#include "Personne.hpp"
#include "Position.hpp"

class Douanier : public Personne
{
        bool enControle;

public:
        Douanier();
        Douanier(std::string, std::string);
        

public:
        void getVoisin(int &, Position&);
        bool getEnControle();
        void setEnControle(bool);
};

const double probaControle[8] = {0.6, 0.2, 0.1, 0.05, 0.05};

#endif