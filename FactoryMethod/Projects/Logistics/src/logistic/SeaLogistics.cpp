//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "SeaLogistics.h"

SeaLogistics::SeaLogistics(Storage<Ship>& storage) : Logistics(), _shipStorage(storage) {}

SeaLogistics::~SeaLogistics() = default;

Transport* SeaLogistics::getTransport() const {
	return _shipStorage.getResource();
}

void SeaLogistics::returnTransport(Transport* ship) const {
	_shipStorage.returnResource(static_cast<Ship*>(ship));
}
