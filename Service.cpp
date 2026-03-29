#include<iostream>
#include<fstream>
#include<string>
#include "Service.h"
using namespace std;


Service::Service(int id, const string& date, const string& type, const string& notes, double cost)
    : id(id), date(date), type(type), notes(notes), cost(cost) {}

int Service::getId() const {
    return id;
}

string Service::getDate() const {
    return date;
}

string Service::getType() const {
    return type;
}

string Service::getNotes() const {
    return notes;
}

double Service::getCost() const {
    return cost;
}

