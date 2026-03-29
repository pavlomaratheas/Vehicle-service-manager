#include<iostream>
#include<fstream>
#include<string>
#include "Service.h"
#include "Colecao.h"
#include "Vehicle.h"
using namespace std;


Vehicle::Vehicle(const string& brand, const string& model, int year, const string& licensePlate)
    : brand(brand), model(model), year(year), licensePlate(licensePlate) {}


std::string Vehicle::getBrand() const {
    return brand;
}

std::string Vehicle::getModel() const {
    return model;
}

int Vehicle::getYear() const {
    return year;
}

std::string Vehicle::getLicensePlate() const {
    return licensePlate;
}

Colecao<Service*>& Vehicle::getServices() {
    return services;
}

void Vehicle::registerService(int id, const string& date, const string& type, const string& notes, double cost) {
    Service* service = new Service(id, date, type, notes, cost);

    services.insert(service);

}


