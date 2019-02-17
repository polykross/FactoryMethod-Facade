//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "SeaLogistics.h"

SeaLogistics::SeaLogistics() : Logistics() {}

SeaLogistics::~SeaLogistics() = default;

Transport* SeaLogistics::createTransport() const {
	return new Ship();
}