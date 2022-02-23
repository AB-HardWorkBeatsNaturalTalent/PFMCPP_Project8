
#include "SemiTruck.h"
#include "Vehicle.h"
SemiTruck::SemiTruck(const std::string& n) : Vehicle(n)
{
}

SemiTruck::~SemiTruck() = default;

void SemiTruck::pleaseDontShoot()
{
    std::cout << "pulling over, dont shoot" << std::endl;
}
