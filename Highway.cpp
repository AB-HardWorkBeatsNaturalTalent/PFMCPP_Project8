#include "Highway.h"
#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"
#include "SemiTruck.h"
#include <cassert>

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    //assert(false);
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
    if(Motorcycle* m = dynamic_cast<Motorcycle*>(v))
    {
        m->setSpeed(speedLimit);
    }
    if(Car* c = dynamic_cast<Car*>(v))
    {
        c->setSpeed(speedLimit);
    }
    if(SemiTruck* t = dynamic_cast<SemiTruck*>(v))
    {
        t->setSpeed(speedLimit);
    }
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    /*
    depending on the derived type, call the member function that tries to evade the cops. 
    trucks pull over, but cars and bikes try to evade!!
    */
    if(Motorcycle* m = dynamic_cast<Motorcycle*>(v))
    {
        m->tryToEvade();
    }
    if(Car* c = dynamic_cast<Car*>(v))
    {
        c->tryToEvade();
    }
    if(SemiTruck* t = dynamic_cast<SemiTruck*>(v))
    {
        t->tryToEvade();
    }
    
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}

void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}

