#ifndef DOU_GUARD
#define DOU_GUARD

#include "Personne.hpp"
#include "Position.hpp"
#include "Map.hpp"
#include "Random_MT.hpp"
#include "Visiteur.hpp"

class Douanier : public Personne
{
        bool enControle = false;
        Visiteur * personneControle = nullptr;
        int dureeControleActu = 0;
        Visiteur * dejaControlle[50];
        int nbPersonneControlle = 0;

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
        Personne *  getVisiteurWithPos(Position);
        bool checkAlreadyControle(Visiteur *);
};

// Probabilité fin de controle en fonction du temps

const double probaControle[8] = {0.2, 0.3, 0.5, 1};

//la map
extern Map m;
#endif