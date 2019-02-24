//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "RoadLogistics.h"

RoadLogistics::RoadLogistics(Storage<Truck>& storage) : Logistics(), _truckStorage(storage) {}

RoadLogistics::~RoadLogistics() = default;

Transport* RoadLogistics::getTransport() const {
	return _truckStorage.getResource();
}

void RoadLogistics::returnTransport(Transport* transport) const {
	_truckStorage.returnResource(static_cast<Truck*>(transport));
}
