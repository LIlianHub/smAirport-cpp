#ifndef _ZONEBAGAGE
#define _ZONEBAGAGE

#include "Zone.hpp"
#include "Position.hpp"

class ZoneBagage : public Zone 
{

public:
    ZoneBagage();
    ZoneBagage(Position p);
};

#endif