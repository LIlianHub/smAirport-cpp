#include <iostream>  // Inclusion d'un fichier standard
#include "Douanier.hpp" // Inclusion d'un fichier du répertoire courant

//Constructeur

Douanier::Douanier(std::string nom, std::string prenom) : Personne(nom, prenom){}
Douanier::Douanier(){}

// Fonction

void Douanier::getVoisin(int &nombreVoisin, Position &voisin){
    //tableau voisin de taille 8 = taille max des voisins possibles
    int curseur = 0;
    Position posDounier = getPos();
    for(int i = 0; i < 9; i++){
        
    }

    nombreVoisin = curseur;
}

bool Douanier::getEnControle(){
    return enControle;
}

void Douanier::setEnControle(bool valControle){
    enControle = valControle;
}