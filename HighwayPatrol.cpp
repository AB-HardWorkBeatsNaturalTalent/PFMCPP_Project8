#include "HighwayPatrol.h"
#include <iostream>
#include "Highway.h"
#include "Vehicle.h"
#include "Car.h"
#include "SemiTruck.h"
#include "Motorcycle.h"
#include <typeinfo>

HighwayPatrol::HighwayPatrol() : Vehicle("highway patrol")
{
}

void HighwayPatrol::scanHighway(Highway* h)
{
    std::cout << name << ": scanning highway for speeders" << std::endl;

    for( size_t i = h->vehicles.size(); i-- > 0; )
    {
        auto* v = h->vehicles[i];
        if( v->speed > h->speedLimit + 5 )
        {
            pullOver(v, v->speed > (h->speedLimit + 15), h );
            h->changeSpeed(50); //slow down for the highway patrol
        }
    }
}

void HighwayPatrol::pullOver( Vehicle* v, bool willArrest, Highway* h )
{
    std::cout << "\n\n";
    std::cout << name << ": vehicle is traveling " << v->speed - h->speedLimit << " miles per hour over the speed limit" << std::endl;
    if( willArrest )
    {    std::string carType = "";
        if(auto* c = dynamic_cast<Car*>(v))
        {
            carType = " car ";
        }
        else if(auto* d = dynamic_cast<Motorcycle*>(v))
        {
            carType = " moto ";
        }
        else if(auto* hw = dynamic_cast<HighwayPatrol*>(v))
        {
            carType = " highway patrolcar ";
        }
        else if(auto* st = dynamic_cast<SemiTruck*>(v))    
        {
            carType = " semitruck ";
        }
        //print the vehicle type in this std::cout between "THE [" and "] PULL". 
        std::cout << name << ": YOU IN THE [ " << carType << " ] PULL OVER AND SHOW YOUR HANDS" << std::endl;
        std::cout << "EVERYONE ELSE, SLOW DOWN!! \n\n\n";
        h->removeVehicle(v);
    }
}

void HighwayPatrol::setSpeed(int s)
{
    std::cout << "weewooweewooweewoo" << std::endl;
    Vehicle::setSpeed(s);
}
    
void HighwayPatrol::tryToEvade()
{
    
}

void HighwayPatrol::eatDonuts()
{
    std::cout << "i love donuts" << std::endl;
}

