#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
private:
	int doornum;
public:
	Car();
	Car(const string&, int, int);
	void setdoornum(int);
	int getdoornum() const;
	void displayInfo() const override;

};
#endif