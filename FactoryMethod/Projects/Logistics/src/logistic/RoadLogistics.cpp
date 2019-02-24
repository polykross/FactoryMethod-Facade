//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "RoadLogistics.h"

RoadLogistics::RoadLogistics() : Logistics(), _truckPool(TransportPool<Truck>::getInstance()) {}

RoadLogistics::~RoadLogistics() = default;

Transport* RoadLogistics::getTransport() const {
	return _truckPool.getResource();
}

void RoadLogistics::returnTransport(Transport* transport) const {
	_truckPool.returnResource(static_cast<Truck*>(transport));
}
