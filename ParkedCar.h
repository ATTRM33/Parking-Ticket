#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
#include "Time.h"

class ParkedCar
{private:
	std::string make;
	std::string model;
	std::string color;
	std::string licenseNum;
	Time minutesParked;
public:
	ParkedCar();
	ParkedCar(std::string make, std::string model, std::string color, std::string licenseNum, Time minutesParked);
	std::string getMake();
	std::string getModel();
	std::string getColor();
	std::string getLicenseNum();
	Time getMinutesParked();
	void setMinutesParked(Time m);


};

#endif