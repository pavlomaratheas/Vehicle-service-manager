#pragma once
#include<iostream>
#include<fstream>
#include <string>
#include "Vehicle.h"
using namespace std;


class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(const string& brand, const string& model, int year, const string& licensePlate, int numDoors);

    int getNumDoors() const;
    void setNumDoors(int numDoors);

};