#include "FileAttente.hpp"

FileAttente::FileAttente(int size) : liste(nullptr), taille(size),nombreActuelle(0)
{
    liste = new Visiteur[taille];
}

FileAttente::FileAttente():liste(nullptr),taille(100),nombreActuelle(0){
}

FileAttente::~FileAttente()
{
    if (liste)
        delete[] liste;
}

void FileAttente::ajouterVisiteur(Visiteur v){
    liste[nombreActuelle]=v;
    nombreActuelle++;
}

void FileAttente::SupprimerVisiteur(int place){
    for(int i=place; i<nombreActuelle;i++){
        liste[i]=liste[i+1];
    }
    nombreActuelle--;
}

Visiteur FileAttente::prendrePremierFile(){
    Visiteur v=liste[0];
    SupprimerVisiteur(0);
    return v;
}