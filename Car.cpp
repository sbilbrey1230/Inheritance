#include "Car.h"
#include<iostream>

using namespace std;

Car::Car() : Vehicle() {
	doornum = 0;
}
Car::Car(const string& m, int y, int d) : Vehicle(m, y) {
	doornum = d;
}
void Car::setdoornum(int d) {
	doornum = d;
}
int Car::getdoornum() const {
	return doornum;
}
void Car::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Doors: " << doornum << endl;

}