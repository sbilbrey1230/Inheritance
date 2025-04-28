#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int towcapacity;
public:
	Truck();
	Truck(const string&, int, int);
	void settowcapacity(int);
	int gettowcapacity() const;
	void displayInfo() const override;

};
#endif