#include <iostream>  // Inclusion d'un fichier standard
#include "Personne.hpp" // Inclusion d'un fichier du répertoire courant


Personne::Personne(std::string name,std::string prename):nom{name},prenom{prename}{
    std::cout << "Constructeur de personne" << std::endl;
}

Personne::Personne(Position p):Personne("",""){
    pos=p;
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

Position Personne::getPos(){
    return pos;
}

void Personne::setPos(Position p){
    pos=p;
}

bool Personne::deplacerPersonne(Position p1){
    bool retour;
    Position futurpos=pos;
    if(p1.getX()>=0&&p1.getY()>=0&&p1.getX()<=20&&p1.getY()<=20){
        if(pos.getX()!=p1.getX()){
            if(pos.getX()-p1.getX()<0){
                futurpos.setX(futurpos.getX()+1);
            }else{
                futurpos.setX(futurpos.getX()-1);
            }
        }else if(pos.getY()!=p1.getY()){
            if(pos.getY()-p1.getY()<0){
                futurpos.setY(futurpos.getY()+1);
            }else{
                futurpos.setY(futurpos.getY()-1);
            }
        }
        if(p.OnthisCase(futurpos.getX(),futurpos.getY())==1){
            retour=false;
        }else{
            setPos(p1);
            retour=true;
        }
    }else{
        retour=false;
    }
    return retour;
}

void Personne::Action(){
}

