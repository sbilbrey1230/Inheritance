#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
using namespace std;

class Vehicle {
private:
	string manufacturer;
	int year;
public:
	Vehicle();
	Vehicle(const string&, int);
	void setmanufacturer(const string&);
	void setyear(int);
	string getmanufacturer() const;
	int getyear() const;
	virtual void displayInfo() const;

};
#endif