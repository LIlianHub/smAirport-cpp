#include <iostream>     // Inclusion d'un fichier standard
#include "Douanier.hpp" // Inclusion d'un fichier du répertoire courant

// Constructeur

Douanier::Douanier(std::string nom, std::string prenom) : Personne(nom, prenom), enControle{false}
{
}
Douanier::Douanier() {}

// Fonction

void Douanier::getVoisin(int &nombreVoisin, Position voisin[])
{
    // tableau voisin de taille 8 = taille max des voisins possibles
    int curseur = 0;
    Position posDounier = getPos();
    int info;

    for (int i = posDounier.getY() - 1; i <= posDounier.getY() + 1; i++)
    {
        for (int j = posDounier.getX(); j <= posDounier.getX() + 1; j++)
        {
            info = p.OnthisCase(i, j);
            if (info == 1 && i != posDounier.getY() && j != posDounier.getX())
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