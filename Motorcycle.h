#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"

struct Motorcycle : Vehicle
{
    ~Motorcycle() override;
    Motorcycle& operator=(const Motorcycle&) = default;

    Motorcycle(const std::string& n);
    Motorcycle(const Motorcycle& m);
    void lanesplitAndRace( int topSpeed = std::numeric_limits<int>::max() );
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};

