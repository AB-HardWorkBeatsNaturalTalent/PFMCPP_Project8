#pragma once 

#include "Vehicle.h"

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h);

    void setSpeed(int s) override;
    
    void tryToEvade() override;

};


