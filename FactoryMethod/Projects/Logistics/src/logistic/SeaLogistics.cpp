//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "SeaLogistics.h"

SeaLogistics::SeaLogistics() : Logistics(), _shipPool(TransportPool<Ship>::getInstance()) {}

SeaLogistics::~SeaLogistics() = default;

Transport* SeaLogistics::getTransport() const {
	return _shipPool.getResource();
}

void SeaLogistics::returnTransport(Transport* ship) const {
	_shipPool.returnResource(static_cast<Ship*>(ship));
}
