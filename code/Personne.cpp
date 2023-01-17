#include <iostream>  // Inclusion d'un fichier standard
#include "Personne.hpp" // Inclusion d'un fichier du répertoire courant

Personne::Personne(std::string name,std::string prename):nom{name},prenom{prename}{
    std::cout << "Constructeur de personne" << std::endl;
}

std::string Personne::getnom(){
    return nom;
};



std::string Personne::getprenom(){
    return prenom;
};


int Personne::getid(){
    return id;
};