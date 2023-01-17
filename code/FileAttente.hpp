#ifndef FILEATTENTE_GUARD
#define FILEATTENTE_GUARD
#include <iostream>
#include "Visiteur.cpp"

class FileAttente{
    Visiteur * liste;
    int taille;

    public:
        FileAttente(int size);
        ~FileAttente();

}

#endif