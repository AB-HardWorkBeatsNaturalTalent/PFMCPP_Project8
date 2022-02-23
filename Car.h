#pragma once
#include "Vehicle.h"
struct Car :  Vehicle
{
    ~Car() override = default;
    Car(const std::string& s);
    Car(const Car& c) override = default;
    Car& operator=(const Car& ref) = default;
    void closeWindows();
    void setSpeed(int s) override;
    void tryToEvade() override;
};

