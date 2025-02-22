#pragma once
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);

    ~SemiTruck() override;
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;
    
    void pleaseDontShoot();
    void honkIfYoureHappy(bool h);
    void pullOver();    
};

