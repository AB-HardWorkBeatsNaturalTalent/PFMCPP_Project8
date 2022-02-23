#include "Highway.h"
#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"
#include "SemiTruck.h"
#include "HighwayPatrol.h"

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
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
    if(auto* m = dynamic_cast<Motorcycle*>(v))
    {
        m->lanesplitAndRace();
    }
    else if(auto* c = dynamic_cast<Car*>(v))
    {
        c->closeWindows();
    }
    else if(auto* t = dynamic_cast<SemiTruck*>(v))
    {
        t->pleaseDontShoot();
    }
    else if(auto* hwy = dynamic_cast<HighwayPatrol*>(v))
    {
        hwy->eatDonuts();
    }
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    /*
    depending on the derived type, call the member function that tries to evade the cops. 
    trucks pull over, but cars and bikes try to evade!!
    */
    if(auto* m = dynamic_cast<Motorcycle*>(v))
    {
        m->tryToEvade();
    }
    else if(auto* c = dynamic_cast<Car*>(v))
    {
        c->tryToEvade();
    }
    else if(auto* t = dynamic_cast<SemiTruck*>(v) )
    {
        t->pleaseDontShoot();
    }
    else if(auto* hwp = dynamic_cast<HighwayPatrol*>(v))
    {
        hwp->eatDonuts();
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

