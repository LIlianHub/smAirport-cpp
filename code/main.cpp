#include <iostream>
#include <string>
#include <unistd.h>
#include "Map.hpp"
#include "Personne.hpp"
#include "Position.hpp"

using std::endl;
using std::cout;

Map p{};

int main(int, char **) {

  Personne pers(Position(0,0));
  p.grille[12][13] = 3;
  p.grille[pers.getPos().getX()][pers.getPos().getY()] = 1;
  int temps = 0;
  while (temps < 20)
  {
    system("clear");
    p.AfficherMap();
    std::cout << temps << std::endl;
    temps++;
    sleep(1);
  }
  
  
  
  return 0;
}