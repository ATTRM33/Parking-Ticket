#include "PoliceOfficer.h"

bool PoliceOfficer::examine(ParkedCar car, ParkingMeter meter) {
	
	return calcTime(car, meter) > 0;
}
ParkingTicket PoliceOfficer::makeTicket(ParkedCar car, ParkingMeter meter) {
	if (examine(car, meter)) {
		
	}

}
int PoliceOfficer::calcTime(ParkedCar car, ParkingMeter meter) {
	
	Time differnceTimeCar = car.getMinutesParked();
	Time differnceTimeMeter = meter.getMinPurchased();
	
	Time differnceTotal = differnceTimeCar - differnceTimeMeter;

	return differnceTotal.getTimeInMinutes();
}