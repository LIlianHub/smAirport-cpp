#include <iostream>
#include <string>
#include <unistd.h>
#include "Map.hpp"
#include "Personne.hpp"
#include "Position.hpp"
#include "Visiteur.hpp"
#include "Douanier.hpp"
#include "Random_MT.hpp"
#include "ZoneEmbarquement.hpp"
#include "ZoneBagage.hpp"
#include "Boutique.hpp"

using std::endl;
using std::cout;

Map m{};

int main(int, char **) {

    unsigned long         init[4]={0x123, 0x234, 0x345, 0x456},
                          length=4;

  Random_MT::init_by_array(init, length);

  Visiteur pers(Position(0,0));
  Douanier persd(Position(1,0));
  ZoneEmbarquement ze1(100,"zonne emba 1",Position(15,19));
  ZoneEmbarquement ze2(100,"zonne emba 2",Position(17,19));
  ZoneBagage zb1(Position(2,19));
  ZoneBagage zb2(Position(4,19));
  Boutique b1(100,"boutique 1",Position(12,8));
  Boutique b2(100,"boutique 2",Position(12,13));
  Boutique b3(100,"boutique 3",Position(7,7));
  m.ajouterPers(&pers);
  m.ajouterPers(&persd);

  int temps = 0;

  int test;
  Position info[9];


  while (temps < 50)
  {
    //persd.getVoisin(test, info);

      //m.tabpers[0]->deplacerPersonne(Position(0,temps));
      //m.tabpers[1]->deplacerPersonne(Position(1,temps));
      //m.tabpers[1]->Action();
      m.tabpers[0]->Action();

    //system("clear");
    m.AfficherMap();
    //std::cout << temps << std::endl;
    temps++;
    sleep(1);
  }
  
  
  
  return 0;
}