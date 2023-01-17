#include <iostream>  // Inclusion d'un fichier standard
#include "Visiteur.hpp" // Inclusion d'un fichier du répertoire courant

int Visiteur::getBagage(){
    return nbBagage;
};


int Visiteur::getBudget(){
    return budget;
};

Visiteur::Visiteur(std::string name,std::string prename,int nbbag,int nbbud):nom{name},prenom{prename},nbBagage{nbbag},budget{nbbud}{

}
Visiteur::Visiteur(){
    
}
