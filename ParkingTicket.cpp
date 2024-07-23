#include "ParkingTicket.h"


double ParkingTicket::getFine() {
	return fine;
}
void ParkingTicket::setFine(double f) {
	fine = f;

}

ParkingTicket::ParkingTicket(ParkedCar car, PoliceOfficer officer, double fine) :
parkedCar(car),officer(officer), fine(fine) {
	
}

std::ostream& operator<<(std::ostream& strm, const ParkedCar& obj) {

}

double ParkingTicket::calcFine(int min) {
	double fine;
	
	if (min > 0) {
		int hours = min / 60 + 1;
		fine = 25 + (10 * (hours - 1));
	}
	return fine;
}