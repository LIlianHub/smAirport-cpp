#ifndef POS_GUARD
#define POS_GUARD

class Position
{

    int x;
    int y;

public:
    int getX();
    int getY();
    Position(int x, int y);
    Position();
};

#endif