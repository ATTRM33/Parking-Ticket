#ifndef PARKINGMETER_H
#define PARKINGMETER_H

#include "Time.h"

class ParkingMeter
{private:
	Time minPurchased;
public:
	Time getMinPurchased();
	void setMinPurchased(Time m);
};

#endif // !PARKINGMETER_H