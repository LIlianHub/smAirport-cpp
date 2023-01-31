#include <iostream>
#include <string>
#include <unistd.h>
#include "Map.hpp"

using std::endl;
using std::cout;

int main(int, char **) {


  Map p{};
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