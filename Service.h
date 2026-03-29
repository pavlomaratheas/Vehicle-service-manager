#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Service {

private:
    int id;
    string date;
    string type;
    string notes;
    double cost;

public:
    Service(int id, const string& date, const string& type, const string& notes, double cost);

   
    int getId() const;  

    string getDate() const;

    string getType() const;

    string getNotes() const;

    double getCost() const;
   
};