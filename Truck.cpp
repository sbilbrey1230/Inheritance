#include "Truck.h"
#include<iostream>

using namespace std;

Truck::Truck() : Vehicle() {
	towcapacity = 0;
}
Truck::Truck(const string& m, int y, int t) : Vehicle(m, y) {
	towcapacity = t;
}
void Truck::settowcapacity(int t) {
	towcapacity = t;
}
int Truck::gettowcapacity() const {
	return towcapacity;
}
void Truck::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towcapacity << endl;
}