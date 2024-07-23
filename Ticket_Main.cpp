//Zach Brown
//Date: 7/23/2024
//CS2 Ticket

#include <iostream>
#include "ParkedCar.h"
#include "Time.h"

using namespace std;

int main() {
	Time time(1, 32, 58);
	cout << time.getTimeInMinutes() << " minutes" << endl;
};