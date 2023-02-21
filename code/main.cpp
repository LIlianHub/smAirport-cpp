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
  Douanier persd(Position(1,0));
  m.ajouterPers(&pers);
  m.ajouterPers(&persd);
  m.grille[12][13] = 3;
  int temps = 0;

  int test;
  Position info[9];


  while (temps < 20)
  {
    persd.getVoisin(test, info);
    std::cout << test << std::endl;
    for(int i=0;i<m.nbpersonne;i++){
      //m.tabpers[i]->deplacerPersonne(Position(0,temps));
      //m.tabpers[i]->Action();
    }
    //system("clear");
    m.AfficherMap();
    std::cout << temps << std::endl;
    temps++;
    sleep(1);
  }
  
  
  
  return 0;
}