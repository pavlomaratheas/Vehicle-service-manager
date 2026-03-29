
#include <iostream>

#include <fstream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
using namespace std;



Car::Car(const string& brand, const string& model, int year, const string& licensePlate, int numDoors)
    : Vehicle(brand, model, year, licensePlate), numDoors(numDoors) {}


int Car::getNumDoors() const
{
    return numDoors;
}

void Car::setNumDoors(int numDoors)
{
    this->numDoors = numDoors;
}
