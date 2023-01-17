#ifndef FILEATTENTE_GUARD
#define FILEATTENTE_GUARD
#include <iostream>
#include "Visiteur.hpp"

class FileAttente{
    Visiteur * liste;
    int taille;
    int nombreActuelle;

    public:
        FileAttente(int size);
        FileAttente();
        ~FileAttente();
        void ajouterVisiteur(Visiteur v);
        void SupprimerVisiteur(int place);
        Visiteur prendrePremierFile();

};

#endif