
#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include "Vehicle.h"
#include "Colecao.h"
using namespace std;

class Owner {
private:
    string name;
    Colecao<Vehicle*> vehicles;

public:
    Owner(const string& name);
    ~Owner();

    string getName() const;

    void setName(const string& name);

    void addVehicle(Vehicle* vehicle);

    Colecao<Vehicle*>& getVehicles();

    void registerService(const string& licensePlate, int id, const string& date, const string& type, const string& notes, double cost);

    Colecao<Service*>& getAllServices() const;

    double getTotalCostOfServices() const;

    void listVehicles() const;

    void listServices() const;
};





