#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include "Service.h"
#include "Colecao.h"
using namespace std;

class Vehicle {
private:
    string brand;
    string model;
    int year;
    string licensePlate;
    Colecao<Service*> services;

public:
    Vehicle(const string& brand, const string& model, int year, const string& licensePlate);

    string getBrand() const;

    string getModel() const;

    int getYear() const;

    string getLicensePlate() const;

    Colecao<Service*>& getServices();

    void registerService(int id, const string& date, const string& type, const string& notes, double cost);
};




