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
    int curseur = 0;
    Position posDounier = getPos();
    for (int i = posDounier.getY() - 1; i <= posDounier.getY() + 1; i++)
    {
        for (int j = posDounier.getX() - 1; j <= posDounier.getX() + 1; j++)
        {
            if (i >= 0 && j >= 0 && i < 20 && j < 20 && m.OnthisCase(i, j) == 1)
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
    std::cout << "Hupla" << std::endl;
}

Douanier::~Douanier() {}