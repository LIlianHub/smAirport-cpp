#include <iostream>  // Inclusion d'un fichier standard
#include "Visiteur.hpp" // Inclusion d'un fichier du répertoire courant

int Visiteur::getBagage(){
    return nbBagage;
};


int Visiteur::getBudget(){
    return budget;
};

Visiteur::Visiteur(std::string name,std::string prename,int nbbag,int nbbud) : Personne(name,prename){

    nbBagage = nbbag;
    budget = nbbud;
}
void Visiteur::setBudget(int bud){
    budget = bud;
}

void Visiteur::setBagage(int bag){
    nbBagage = bag;
}

Visiteur::Visiteur(){
    
}

Visiteur::Visiteur(Position p):Personne(p){}

void Visiteur::Action(){
    std::cout << "HuplaVisteur" << std::endl;
}

Visiteur::~Visiteur(){}
