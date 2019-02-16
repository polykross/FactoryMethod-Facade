//
// Created by polia on 17.02.2019.
//

#include "Logistics.h"

Logistics::Logistics() = default;

Logistics::~Logistics() = default;

void Logistics::planDelivery(const Cargo& cargo, const Destination& dest) const {
	Transport* transport = createTransport();
	transport->deliver(cargo, dest);
	delete transport;
}