#include "Vehicle.h"
#include<iostream>

using namespace std;

Vehicle::Vehicle() {
	manufacturer = "";
	year = 0;
}
Vehicle::Vehicle(const string& m, int y) {
	manufacturer = m;
	year = y;
}
void Vehicle::setmanufacturer(const string& m) {
	manufacturer = m;
}
void Vehicle::setyear(int y) {
	year = y;
}
string Vehicle::getmanufacturer() const {
	return manufacturer;
}
int Vehicle::getyear() const {
	return year;
}
void Vehicle::displayInfo() const {
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;

}