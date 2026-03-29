#pragma once
#include<iostream>
#include <fstream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Motorcycle : public Vehicle {
private:
    int numWheels;

public:
    Motorcycle(const string& brand, const string& model, int year, const string& licensePlate, int numWheels);

    int getNumWheels() const;

    void setNumWheels(int numWheels);

};
