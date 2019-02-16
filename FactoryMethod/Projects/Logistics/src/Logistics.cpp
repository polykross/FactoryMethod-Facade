//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "Logistics.h"

Logistics::Logistics() = default;

Logistics::~Logistics() = default;

void Logistics::planDelivery(const Cargo& cargo, const Destination& dest) const {
	Truck* truck = createTruck();
	truck->deliver(cargo, dest);
	delete truck;
}

Truck* Logistics::createTruck() const {
	return new Truck();
}
