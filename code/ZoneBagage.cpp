#include <iostream>   
#include "ZoneBagage.hpp" 
#include "Map.hpp"
extern Map m;


ZoneBagage::ZoneBagage()
{

    
}

ZoneBagage::ZoneBagage(Position p){
    //compteur++;
    m.grille[p.getX()][p.getY()] = 4;
}


