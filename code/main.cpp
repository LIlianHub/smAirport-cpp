#include <iostream>
#include <string>
#include <unistd.h>
#include "Map.hpp"
#include "Personne.hpp"
#include "Position.hpp"
#include "Visiteur.hpp"
#include "Douanier.hpp"

using std::endl;
using std::cout;

Map m{};

int main(int, char **) {

  Visiteur pers(Position(0,0));
  m.ajouterPers(pers);
  // m.tabpers[m.nbpersonne] = pers;
  // m.nbpersonne++;
  m.grille[12][13] = 3;
  m.grille[pers.getPos().getX()][pers.getPos().getY()] = 1;
  int temps = 0;
  while (temps < 20)
  {
    system("clear");
    m.AfficherMap();
    std::cout << temps << std::endl;
    temps++;
    sleep(1);
  }
  
  
  
  return 0;
}