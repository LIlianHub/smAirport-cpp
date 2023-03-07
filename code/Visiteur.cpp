#include <iostream>  // Inclusion d'un fichier standard
#include "Visiteur.hpp" // Inclusion d'un fichier du répertoire courant
#include "Map.hpp"

extern Map m;

int Visiteur::getBagage(){
    return nbBagage;
};


int Visiteur::getBudget(){
    return budget;
};

Visiteur::Visiteur(std::string name,std::string prename,int nbbag,int nbbud) : Personne(name,prename){

    nbBagage = nbbag;
    budget = nbbud;
    aDeposeBagages=false;
}
void Visiteur::setBudget(int bud){
    budget = bud;
}

void Visiteur::setBagage(int bag){
    nbBagage = bag;
}

Visiteur::Visiteur(){
    
}

Visiteur::Visiteur(Position p):Personne(p){}

void Visiteur::Action(){
    int cpt;
    double rand;
    if(posBoutiqueVoulu.getX()==-1&&posBoutiqueVoulu.getY()==-1){
        cpt=0;
        Zone *tabBoutique[25];
        for(int i=0;i<m.nbzonne;i++){
            if(Boutique * d = dynamic_cast<Boutique*>(m.tabZone[i])){
                tabBoutique[cpt]=m.tabZone[i];
                cpt++;
            }
        }
        rand=Random_MT::genrand_real2();
        int rang=(cpt-1)*rand;
        posBoutiqueVoulu=tabBoutique[rang]->getPos();
    }
    if(posZEVoulu.getX()==-1&&posZEVoulu.getY()==-1){
        cpt=0;
        Zone *tabZE[25];
        for(int i=0;i<m.nbzonne;i++){
            if(Boutique *d=dynamic_cast<Boutique*>(m.tabZone[i])){
                
            }else{
                if(ZoneBagage *e=dynamic_cast<ZoneBagage*>(m.tabZone[i])){
                    
                }else{
                    tabZE[cpt]=m.tabZone[i];
                    cpt++;
                }
            }
        }
        rand=Random_MT::genrand_real2();
        int rang=(cpt-1)*rand;
        posZEVoulu=tabZE[rang]->getPos();
    }
    if(posBagagesVoulu.getX()==-1&&posBagagesVoulu.getY()==-1){
        cpt=0;
        Zone *tabBagage[25];
        for(int i=0;i<m.nbzonne;i++){
            if(ZoneBagage * d = dynamic_cast<ZoneBagage*>(m.tabZone[i])){
                tabBagage[cpt]=m.tabZone[i];
                cpt++;
            }
        }
        rand=Random_MT::genrand_real2();
        int rang=(cpt-1)*rand;
        posBagagesVoulu=tabBagage[rang]->getPos();
    }
    tempsAvantVol=40;
    rand=Random_MT::genrand_real2();
    if(tempsAvantVol>40){
        if(rand<=0.75){
            //std::cout << "Je go boutique" << std::endl;
            //std::cout<<"Pos X"<<posBoutiqueVoulu.getX()<<" Pos Y"<<posBoutiqueVoulu.getY()<<std::endl;
            deplacerPersonne(posBoutiqueVoulu);
        }else if(!aDeposeBagages){
            //std::cout << "Je go bagages" << std::endl;
            //std::cout<<"Pos X"<<posBagagesVoulu.getX()<<" Pos Y"<<posBagagesVoulu.getY()<<std::endl;
            deplacerPersonne(posBagagesVoulu);
            if(getPos().getX()==posBagagesVoulu.getX()&&getPos().getY()==posBagagesVoulu.getY()){
                aDeposeBagages=true;
            }
        }else{
            //std::cout << "Je go zone embarquement" << std::endl;
            //std::cout<<"Pos X"<<posZEVoulu.getX()<<" Pos Y"<<posZEVoulu.getY()<<std::endl;
            deplacerPersonne(posZEVoulu);
        }
    }else if(tempsAvantVol>20){
        if(!aDeposeBagages){
            //std::cout << "Je go bagages" << std::endl;
            //std::cout<<"Pos X"<<posBagagesVoulu.getX()<<" Pos Y"<<posBagagesVoulu.getY()<<std::endl;
            deplacerPersonne(posBagagesVoulu);
            if(getPos().getX()==posBagagesVoulu.getX()&&getPos().getY()==posBagagesVoulu.getY()){
                aDeposeBagages=true;
            }
        }else{
            //std::cout << "Je go zone embarquement" << std::endl;
            //std::cout<<"Pos X"<<posZEVoulu.getX()<<" Pos Y"<<posZEVoulu.getY()<<std::endl;
            deplacerPersonne(posZEVoulu);
        }
    }else{
        //std::cout << "Je go zone embarquement" << std::endl;
        //std::cout<<"Pos X"<<posZEVoulu.getX()<<" Pos Y"<<posZEVoulu.getY()<<std::endl;
        deplacerPersonne(posZEVoulu);

    }
    tempsAvantVol-=1;
    //std::cout << "HuplaVisteur" << std::endl;
}

Visiteur::~Visiteur(){}
