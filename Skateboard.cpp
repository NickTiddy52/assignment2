//
// Created by Esteban Parra on 9/5/19.
//

#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;


double Skateboard::mileageEstimate(double time) {
	double mileage = (rand() % 5 + 1);
	mileage /= 10;
	if (time > 25 && time < 250)
	{
		double randomRange = rand() % 3 + 1;
		mileage *= randomRange;
	}
	return mileage;
}

string Skateboard::toString() {

	string s = "-> Skateboard\n\t";
	return "-> Skateboard\n" + Vehicle::toString();
}