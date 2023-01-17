#include "FileAttente.hpp"

FileAttente::FileAttente(int size) : liste(nullptr), taille(size)
{
    liste = new Visiteur[taille];
}

FileAttente::FileAttente(){}

FileAttente::~FileAttente()
{
    if (liste)
        delete[] liste;
}