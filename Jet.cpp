//
// Created by Nicholas Tidwell on 9/20/19.
//

#include "Jet.h"

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("");
    setModel("");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEngines) {
    numberOfEngines = numberOfEngines;

}

double Jet::mileageEstimate(double time) {
    double random = rand() % 100 + 40;
    double mileage = random * time;
    if (fuelType == "Rocket" && numberOfEngines > 2) {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getNumberOfEngines();
}