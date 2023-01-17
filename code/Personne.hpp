#ifndef PERS_GUARD
#define PERS_GUARD

#include "Position.hpp"



class Personne {

    std::string nom;
    std::string prenom;
    int id;
    Position pos;

     public:
        std::string getnom();
        std::string getprenom();
        int getid();
        Personne(std::string name,std::string prename);

    };

#endif