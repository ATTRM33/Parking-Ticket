#ifndef POLICEOFFFICER_H
#define POLICEOFFFICER_H

#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

class PoliceOfficer
{private:
	std::string name;
	int badgeNum;
public:
	bool examine(ParkedCar car, ParkingMeter meter);
	ParkingTicket makeTicket(ParkedCar car, ParkingMeter meter);
	int calcTime(ParkedCar car, ParkingMeter meter);
};

#endif