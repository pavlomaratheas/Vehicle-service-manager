
//Mihaela Radu 312644
//Paolo Maratheas 312566

#include<iostream>
#include<string>
#include "Owner.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Service.h"
#include "Colecao.h"

using namespace std;

int main() {

    Owner owner("Alessandra Penza" );

    Car  car1("BMW", "X7", 2020, "RO88ZX", 4);
    owner.addVehicle(&car1);

    Motorcycle motorcycle1("Honda", "CBR", 2019, "IT7777", 2);
    owner.addVehicle(&motorcycle1);

    owner.registerService("RO88ZX", 1, "09.12.2019", "Oil Changing", "Problems with oil change", 53.7);
    owner.registerService("IT7777", 3, "01.10.2021", "Broke Window", "Changing Window", 22.1);

    cout<< "Vehicles:\n";
    owner.listVehicles();

    cout<< "\nServices:\n";
    owner.listServices();

    cout<< "\nTotal Cost of Services: " << owner.getTotalCostOfServices() << "\n";

    return 0;
}



///////
// We were not sure if we need to create an interface for the project so we created this just to be sure, it is compiling too
//////

/*
int main() {

    Owner* owner = nullptr;

    int choice;

    while (true) {
        cout<< "==== MENU ====\n";
        cout<< "1. Register Owner\n";
        cout<< "2. Register Vehicle\n";
        cout<< "3. Register Service\n";
        cout<< "4. List Vehicles\n";
        cout<< "5. List Services\n";
        cout<< "6. Total Cost of Services\n";
        cout<< "0. Exit\n";
        cout<< "Enter your choice: ";
        cin>>choice;

        switch (choice) {

        case 0:
            cout<< "EXIT\n";
            return 0;

        case 1: {
            string name;
            cout<< "Enter owner name: ";
            cin>> name;
            owner = new Owner(name);
            cout<< "Owner registered!\n";
            break;
        }

        case 2: {
            if (!owner) {
                cout<< "You have no owner registered. Please register an owner first.\n";
                break;
            }

            string brand, model, licensePlate;
            int year, numberOfDoors;
            int vehicleType;
            cout <<"Enter vehicle type (1 for Car, 2 for Motorcycle): ";
            cin>> vehicleType;
            cout<<"Enter vehicle brand: ";
            cin>>brand;
            cout<< "Enter vehicle model: ";
            cin>>model;
            cout<< "Enter vehicle year: ";
            cin>>year;
            cout<< "Enter vehicle license plate: ";
            cin>> licensePlate;

            if (vehicleType==1) 
            {
                cout<<"Enter number of doors: ";
                cin >> numberOfDoors;
                Car* car = new Car(brand, model, year, licensePlate, numberOfDoors);
                owner->addVehicle(car);
            }
            else if (vehicleType == 2) 
            {
                int numberOfWheels;
                cout << "Enter numbr of wheels: ";
                cin >> numberOfWheels;
                Motorcycle* motorcycle = new Motorcycle(brand, model, year, licensePlate, numberOfWheels);
                owner->addVehicle(motorcycle);
            }

            cout<<"Vehicle registered!\n";
            break;
        }
        case 3: {
            if (!owner) {
                cout << "You have no owner registered. Please register an owner first.\n";
                break;
            }

            string licensePlate, date, type, notes;
            int id;
            double cost;
            cout<< "Enter license plate of the vehicle: ";
            cin>> licensePlate;
            cout<< "Enter service ID: ";
            cin>> id;
            cout<<"Enter service date: ";
            cin>>date;
            cout<<"Enter service type: ";
            cin>>type;
            cout<< "Enter service notes: ";
            cin>>notes;
            cout <<"Enter service cost: ";
            cin >>cost;
            owner->registerService(licensePlate, id, date, type, notes, cost);
            cout <<"Service registered!\n";
            break;
        }
        case 4:
            if (!owner) {
                cout<< "You have no owner registered. Please register an owner first.\n";
                break;
            }

            owner->listVehicles();
            break;
        case 5:
            if (!owner) {
                cout<< "You have no owner registered. Please register an owner first.\n";
                break;
            }

            owner->listServices();
            break;
        case 6:
            if (!owner) {
                cout<< "You have no owner registered. Please register an owner first.\n";
                break;
            }

            cout <<"Total Cost of Services: " << owner->getTotalCostOfServices() << "\n";
            break;
        default:
            cout <<"This choice doesn't exist. Please try again.\n";
            break;
        }

        cout << "=====================\n\n";
    }

    return 0;
}

*/