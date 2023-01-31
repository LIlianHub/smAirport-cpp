#include <iostream>  // Inclusion d'un fichier standard
#include "Personne.hpp" // Inclusion d'un fichier du répertoire courant


Personne::Personne(std::string name,std::string prename):nom{name},prenom{prename}{
    std::cout << "Constructeur de personne" << std::endl;
}

Personne::Personne(){}

std::string Personne::getnom(){
    return nom;
};

void Personne::setNom(std::string n){
    nom=n;
}

std::string Personne::getprenom(){
    return prenom;
};

void Personne::setPrenom(std::string p){
    prenom=p;
}

int Personne::getid(){
    return id;
};

void Personne::Position getPos(){
    return pos;
}

void Personne::setPos(Position p){
    pos=p;
}

bool Personne::deplacerPersonne(Position p){
    bool retour;
    if(p.getX()>=0&&p.getY()>=0&&p.getX()<=20&&p.getY()<=20){
        // if(m.contientPersonne(p)==true){
        //     retour=false;
        // }else{
        //     setPos(p);
        //     retour=true;
        // }
    }else{
        retour=false;
    }
    return retour;
}