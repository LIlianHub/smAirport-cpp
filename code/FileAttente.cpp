#include "FileAttente.hpp"

FileAttente::FileAttente(int size):liste(nullptr),taille(size){
    list=new Visiteur[taille];
}

FileAttente::~FileAttente(){
    if(liste)
        delete [] liste;
}