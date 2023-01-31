#include <iostream>
#include <string>
#include <unistd.h>
#include "Map.hpp"
#include "Personne.hpp"

using std::endl;
using std::cout;

Map p{};

int main(int, char **) {


  p.grille[12][13] = 3;
  p.grille[0][0] = 1;
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