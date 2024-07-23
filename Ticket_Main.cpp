//Zach Brown
//Date: 7/23/2024
//CS2 Ticket

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include "Time.h"

using namespace std;

int main() {
	Time myPurchasedTime(1, 35);
	ParkedCar myCar("Ford", "F-150", "Black", "P01FR", myPurchasedTime );
	ParkingMeter meter;
	Time meterTime(0, 60);
	meter.setMinPurchased(meterTime);

	
	
};