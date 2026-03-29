#include "Owner.h"
#include<iostream>
#include<fstream>
#include<string>
#include "Vehicle.h"
#include "Colecao.h"
using namespace std;



Owner::Owner(const string& name) : name(name) {}

Owner::~Owner() 
{
    for (Vehicle* vehicle : vehicles) 
    {
        delete vehicle;
    }
    vehicles.clear();
}

string Owner::getName() const {
    return name;
}

void Owner::setName(const string& name) {
    this->name = name;
}

void Owner::addVehicle(Vehicle* vehicle) {
    vehicles.insert(vehicle);
}

Colecao<Vehicle*>& Owner::getVehicles() {
    return vehicles;
}

void Owner::registerService(const string& licensePlate, int id, const string& date, const string& type, const string& notes, double cost)
{
    for (Vehicle* vehicle : vehicles) {
        if (vehicle->getLicensePlate() == licensePlate) {
            vehicle->registerService(id, date, type, notes, cost);
            return; // exiting if registered
        }
    }

    cout<<"Vehicle with this license plate "<< licensePlate << "wass not found.\n";
}


Colecao<Service*>& Owner::getAllServices() const {
    Colecao<Service*>* allServices = new Colecao<Service*>();
    for (Vehicle* vehicle : vehicles) {
        Colecao<Service*> vehicleServices = vehicle->getServices();
        for (Service* service : vehicleServices) {
            allServices->insert(service);
        }
    }

    return *allServices;
}

double Owner::getTotalCostOfServices() const {
    double totalCost = 0.0;
    for (Vehicle* vehicle : vehicles) {
        Colecao<Service*> vehicleServices = vehicle->getServices();
        for (Service* service : vehicleServices) {
            totalCost += service->getCost();
        }
    }

    return totalCost;
}

void Owner::listVehicles() const {
    if (vehicles.empty()) {
        cout<< "No vehicles registered.\n";
    }
    else {
        cout<< "Vehicles owned by "<<name<< ":\n";
        for (Vehicle* vehicle : vehicles) {
            cout<<"License Plate: "<<vehicle->getLicensePlate() << "\n";
            cout<<"Brand: "<<vehicle->getBrand() << "\n";
            cout<<"Model: "<<vehicle->getModel() << "\n";
            cout<<"Year: "<<vehicle->getYear() << "\n";
            cout<< "------------------------\n";
        }
    }
}

void Owner::listServices() const {
    Colecao<Service*> allServices = getAllServices();
    if (allServices.empty()) {
        cout<<"No services registered.\n";
    }
    else {
        cout << "Services performed by " << name << ":\n";
        for (Service* service : allServices) {
            cout<< "Service ID: " << service->getId() << "\n";
            cout<< "Date: "<< service->getDate() << "\n";
            cout<< "Type: "<< service->getType() << "\n";
            cout<< "Notes: "<< service->getNotes() << "\n";
            cout<< "Cost: $"<< service->getCost() << "\n";
            cout<< "------------------------\n";
        }
    }
}





