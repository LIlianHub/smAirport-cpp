#ifndef PERS_GUARD
#define PERS_GUARD

#include "Position.hpp"
class Map;

class Personne {

    std::string nom;
    std::string prenom;
    int id;
    Position pos;

    public:
        Personne(std::string name,std::string prename);
        Personne(Position p);
        Personne();

        std::string getnom();
        std::string getprenom();
        int getid();
        Position getPos();
        virtual void Action();
        virtual ~Personne();


        bool deplacerPersonne(Position p1);
    
    private:
        void setNom(std::string n);
        void setPrenom(std::string p);
        void setPos(Position p);

};

#endif