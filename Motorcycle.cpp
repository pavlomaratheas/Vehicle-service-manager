#include <iostream>
#include <fstream>
#include <string>
#include "Vehicle.h"
#include "Motorcycle.h"
using namespace std;


Motorcycle::Motorcycle(const string& brand, const string& model, int year, const string& licensePlate, int numWheels)
    : Vehicle(brand, model, year, licensePlate), numWheels(numWheels) {}



int Motorcycle::getNumWheels() const
{
    return numWheels;
}

void Motorcycle::setNumWheels(int numWheels)
{
    this->numWheels = numWheels;
}
