//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "RoadLogistics.h"

RoadLogistics::RoadLogistics() : Logistics() {}

RoadLogistics::~RoadLogistics() = default;

Transport* RoadLogistics::createTransport() const {
	return new Truck();
}
