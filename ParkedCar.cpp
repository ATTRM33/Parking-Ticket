#include "ParkedCar.h"

ParkedCar::ParkedCar() {

}

ParkedCar::ParkedCar(std::string make, std::string model, std::string color, std::string licenseNum, Time minutesParked) :
make(make), model(model), color(color), licenseNum(licenseNum), minutesParked(minutesParked) {

}

std::string ParkedCar::getMake() {
	return make;
}

std::string ParkedCar::getModel() {
	return model;
}

std::string ParkedCar::getColor() {
	return color;
}

std::string ParkedCar::getLicenseNum() {
	return licenseNum;
}

Time ParkedCar::getMinutesParked() {
	return minutesParked;
}

void ParkedCar::setMinutesParked(Time m) {
	minutesParked = m;
}