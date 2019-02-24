//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "RoadLogistics.h"
#include "../storage/TransportPool.h"

RoadLogistics::RoadLogistics() : Logistics(), _truckStorage(TransportPool<Truck>::getInstance()) {}

RoadLogistics::~RoadLogistics() = default;

Transport* RoadLogistics::getTransport() const {
	return _truckStorage.getResource();
}

void RoadLogistics::returnTransport(Transport* transport) const {
	_truckStorage.returnResource(static_cast<Truck*>(transport));
}
