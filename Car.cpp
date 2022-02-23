#include "Car.h"

#include <iostream>

Car::Car(const std::string& n) : Vehicle(n) {}
// Car::Car(Car const& c) : Vehicle(c.name)
// {
    
// }
// Car::~Car()
// {
    
// }
void Car::setSpeed(int s)
{
    std::cout << "setting car speed" << std::endl;
    Vehicle::setSpeed(s);
}
void Car::closeWindows()
{
    setSpeed(70);
    std::cout << name << ": closing the windows!" << std::endl;
}

void Car::tryToEvade()
{
    setSpeed(0);
    std::cout << name << ": hello officer, what seems to be the problem?" << std::endl;
}

