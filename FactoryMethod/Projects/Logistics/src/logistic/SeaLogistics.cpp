//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "SeaLogistics.h"
#include "../storage/TransportPool.h"

SeaLogistics::SeaLogistics() : Logistics(), _shipStorage(TransportPool<Ship>::getInstance()) {}

SeaLogistics::~SeaLogistics() = default;

Transport* SeaLogistics::getTransport() const {
	return _shipStorage.getResource();
}

void SeaLogistics::returnTransport(Transport* ship) const {
	_shipStorage.returnResource(static_cast<Ship*>(ship));
}
