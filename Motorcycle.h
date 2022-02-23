#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"

struct Motorcycle : Vehicle
{
    ~Motorcycle() override = default;
    Motorcycle& operator=(const Motorcycle&) = default;

    Motorcycle(const std::string& n);
    Motorcycle(const Motorcycle& m) = default;
    void lanesplitAndRace( int topSpeed = std::numeric_limits<int>::max() );
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};

