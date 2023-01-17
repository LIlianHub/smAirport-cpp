#include <iostream>  // Inclusion d'un fichier standard
#include "Position.hpp" // Inclusion d'un fichier du répertoire courant


int Position::getX() {
  return x;
}

int Position::getY() {
  return y;
}

Position::Position(){}



Position::Position(int a,int b):x{a},y{b}{
    
}