#ifndef POS_GUARD
#define POS_GUARD

class Position
{

    int x;
    int y;

public:
    int getX();
    int getY();
    void setX(int posX);
    void setY(int posY);
    Position(int x, int y);
    Position();
};

#endif