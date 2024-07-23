#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include "PoliceOfficer.h"


class ParkingTicket
{private:
	double fine;
	ParkedCar parkedCar;
	PoliceOfficer officer;
public:
	double getFine();
	void setFine(double f);
	ParkingTicket(ParkedCar car, PoliceOfficer officer, double fine);
	friend std::ostream& operator<<(std::ostream& strm, const ParkedCar& obj);
	static double calcFine(int min);
};

#endif