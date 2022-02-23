
#include "SemiTruck.h"
#include "Vehicle.h"
SemiTruck::SemiTruck(const std::string& n) : Vehicle(n)
{
}
// SemiTruck::~SemiTruck()
// {
    
// }

void SemiTruck::setSpeed(int s)
{
    std::cout << "vroooooooooooom-ing" << std::endl;
    Vehicle::setSpeed(s);
}

void SemiTruck::pleaseDontShoot()
{
    std::cout << "pulling over, dont shoot" << std::endl;
}
