#ifndef FILEATTENTE_GUARD
#define FILEATTENTE_GUARD
#include <iostream>
#include "Visiteur.hpp"

class FileAttente{
    Visiteur * liste;
    int taille;

    public:
        FileAttente(int size);
        FileAttente();
        ~FileAttente();

};

#endif