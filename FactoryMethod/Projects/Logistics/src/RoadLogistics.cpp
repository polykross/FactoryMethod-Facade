//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "RoadLogistics.h"

RoadLogistics::RoadLogistics() : Logistics() {}

RoadLogistics::~RoadLogistics() = default;

Transport* RoadLogistics::getTransport() const {
	return new Truck();
}

void RoadLogistics::returnTransport(Transport* transport) const {
	delete transport;
}
