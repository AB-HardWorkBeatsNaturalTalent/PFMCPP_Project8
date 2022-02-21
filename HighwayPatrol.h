#pragma once 
#include <string>
struct Vehicle;
struct Highway;
struct HighwayPatrol
{
    HighwayPatrol();

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h);

private:
    std::string name;
};


