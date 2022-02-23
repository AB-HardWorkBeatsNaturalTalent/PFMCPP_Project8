
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

void SemiTruck::pullOver()
{
    std::cout << "i choose to pull myself over and fight my case in court" << std::endl;
}

void SemiTruck::honkIfYoureHappy(bool happiness)
{
    if(happiness) std::cout << "beep" << std::endl;
}

