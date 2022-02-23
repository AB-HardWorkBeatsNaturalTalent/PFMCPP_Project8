#pragma once 
#include <string>
#include "Vehicle.h"
struct Highway;
struct HighwayPatrol : Vehicle
{
    HighwayPatrol();
    HighwayPatrol(const HighwayPatrol& hwp);
    ~HighwayPatrol() override;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;
    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h);

    void setSpeed(int s) override;
    
    void tryToEvade() override;

    
};


