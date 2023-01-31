#include <iostream>   
#include "Map.hpp"


Map::Map(){
}

void Map::AfficherMap(){
    for(int i = 0; i < 20 ; i++){
        for(int j = 0; j < 20 ; j++){
            std::cout << " . ";
        } 
        std::cout << std::endl;
    }
}