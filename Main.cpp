// Sean Bilbrey
// CIS 1202 501
// 4/27/2025

#include<iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;
int main() {
	string manufacturer;
	int year;
	int doornum;
	int towcapacity;

	cout << "Vehicle Program" << endl;
	cout << "\nVehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cin.ignore();

	Vehicle vehicle(manufacturer, year);
	cout << endl;
	vehicle.displayInfo();
	cout << endl;

	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doornum;
	cin.ignore();

	Car car(manufacturer, year, doornum);
	cout << endl;
	car.displayInfo();
	cout << endl;

	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towcapacity;

	Truck truck(manufacturer, year, towcapacity);
	cout << endl;
	truck.displayInfo();
	cout << endl;

	return 0;
}