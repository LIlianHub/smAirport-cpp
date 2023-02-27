#ifndef _ZONE
#define _ZONE   

#include "Position.hpp"

class Zone
{
    public:
        Position pos;

    public:
        Position getPos();
        void setPos(Position);
        virtual ~Zone();
};

#endif