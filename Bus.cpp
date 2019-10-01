//
// Created by Nicholas Tidwell on 10/1/19.
//

#include "Bus.h"

Bus::Bus() {
	setBrand("Custom");
	setModel("VTx");
	setNumberOfStops(1);
}

Bus::Bus(string brand, string model, string fuelType, int numberOfStops) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfStops(numberOfStops);
}

Bus::~Bus() = default;

int Bus::getNumberOfStops() {
	return numberOfStops;
}

void Bus::setNumberOfStops(int numberOfStops) {
	numberOfStops = numberOfStops;

}

double Bus::mileageEstimate(double time) {
	double mileage = 10 * time;
	if (numberOfStops < 15){
		mileage += mileage * 0.10;
	}
	return mileage;
}

string Bus::toString() {
	return "-> Bus\n" + PoweredVehicle::toString() + "\n\tNumber of Stops " +
		std::to_string(getNumberOfStops());
}