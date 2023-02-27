#include <iostream>
#include <string>
#include <unistd.h>
#include "Map.hpp"
#include "Personne.hpp"
#include "Position.hpp"
#include "Visiteur.hpp"
#include "Douanier.hpp"
#include "Random_MT.hpp"

using std::endl;
using std::cout;

Map m{};

int main(int, char **) {

    unsigned long         init[4]={0x123, 0x234, 0x345, 0x456},
                          length=4;

  Random_MT::init_by_array(init, length);

  Visiteur pers(Position(0,0));
  Douanier persd(Position(1,0));

  m.ajouterPers(&pers);
  m.ajouterPers(&persd);
  m.grille[12][8] = 3;
  m.grille[12][13] = 3;
  m.grille[12][13] = 3;
  m.grille[7][7] = 3;
  m.grille[2][19] = 4;
  m.grille[4][19] = 4;
  m.grille[15][19] = 5;
  m.grille[17][19] = 5;
  int temps = 0;

  int test;
  Position info[9];


  while (temps < 20)
  {
    persd.getVoisin(test, info);

      m.tabpers[0]->deplacerPersonne(Position(0,temps));
      //m.tabpers[1]->deplacerPersonne(Position(1,temps));
      m.tabpers[1]->Action();
      m.tabpers[0]->Action();

    system("clear");
    m.AfficherMap();
    std::cout << temps << std::endl;
    temps++;
    sleep(1);
  }
  
  
  
  return 0;
}