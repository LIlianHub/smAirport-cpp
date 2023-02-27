#include <iostream>     // Inclusion d'un fichier standard
#include "Douanier.hpp" // Inclusion d'un fichier du répertoire courant

// Constructeur

Douanier::Douanier(std::string nom, std::string prenom) : Personne(nom, prenom), enControle{false}
{
}
Douanier::Douanier() {}

Douanier::Douanier(Position p) : Personne(p)
{
}

// Fonction

void Douanier::getVoisin(int &nombreVoisin, Position voisin[])
{
    // tableau voisin de taille 8 = taille max des voisins possibles
    nombreVoisin = 0;
    int curseur = 0;
    Position posDounier = getPos();
    for (int i = posDounier.getY() - 1; i <= posDounier.getY() + 1; i++)
    {
        for (int j = posDounier.getX() - 1; j <= posDounier.getX() + 1; j++)
        {
            std::cout << "x : " << j << " y : " << i << std::endl;

            if (i >= 0 && j >= 0 && i < 20 && j < 20 && m.OnthisCase(j, i) == 1)
            {
                voisin[curseur] = Position(j, i);
                curseur++;
            }
        }
    }
    nombreVoisin = curseur;
}

bool Douanier::getEnControle()
{
    return enControle;
}

void Douanier::setEnControle(bool valControle)
{
    enControle = valControle;
}

void Douanier::Action()
{
    std::cout << "HuplaDouanier" << std::endl;
    Position voisin[8];
    int nbVoisin = 0;

    getVoisin(nbVoisin, voisin);

    for (int i = 0; i < nbVoisin; i++)
    {
        std::cout << "Voisin : " << voisin[i].getX() << " " << voisin[i].getY() << std::endl;
    }

    if(nbVoisin != 0){
        setEnControle(true);
        personneControlee = voisin[0];
    }
}

Douanier::~Douanier() {}