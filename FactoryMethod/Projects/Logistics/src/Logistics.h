//
// Created by @PolinaShlepakova on 16.02.2019.
//

#ifndef LOGISTICS_LOGISTICS_H
#define LOGISTICS_LOGISTICS_H

#include "Truck.h"
#include "Cargo.h"
#include "Destination.h"


class Logistics {
public:
	Logistics();
	~Logistics();
	Logistics(const Logistics&) = delete;
	Logistics& operator=(const Logistics&) = delete;

	void planDelivery(const Cargo& cargo, const Destination& dest) const;

private:
	Truck* createTruck() const;

};


#endif //LOGISTICS_LOGISTICS_H
