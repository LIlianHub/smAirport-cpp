#ifndef _MAP
#define _MAP

class Map
{
    public :
    int grille[20][20];


    public:
        Map();
        void AfficherMap();
        int OnthisCase(int,int);
};

extern Map p;

#endif