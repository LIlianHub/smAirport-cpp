#include <iostream>   
#include "Map.hpp"


Map::Map(){
}

void Map::AfficherMap(){
    for(int i = 0; i < 20 ; i++){
        for(int j = 0; j < 20 ; j++){

            switch (grille[i][j])
            {
            case 0:
                std::cout << " . ";
                break;

            case 1:
                std::cout << " X ";
                break;

            case 2:
                std::cout << " D ";
                break;

            case 3:
                std::cout << " B ";
                break;

            case 4:
                std::cout << " L ";
                break;

            case 5:
                std::cout << " Z ";
                break;
            
            default:
                break;
            }
            
        } 
        std::cout << std::endl;
    }
}