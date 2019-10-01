//
// Created by Nicholas Tidwell on 9/20/19.
//

#ifndef DRIVINGSIMULATOR_BUS_H
#define DRIVINGSIMULATOR_BUS_H

#include "PoweredVehicle.h"

class Bus : public PoweredVehicle {

private:
	int numberOfStops = 1;
public:
	Bus();

	explicit Bus(string brand, string model, string fuelType,
		int numberOfStops = 1);

	virtual ~Bus();
	int getNumberOfStops();
	void setNumberOfStops(int numberOfStops);
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_CAR_H
