//
// Created by polia on 17.02.2019.
//

#ifndef LOGISTICS_LOGISTICS_H
#define LOGISTICS_LOGISTICS_H

#include "../transport/Transport.h"
#include "../Cargo.h"
#include "../Destination.h"

class Logistics {
public:
	Logistics();
	virtual ~Logistics() = 0;
	Logistics(const Logistics&) = delete;
	Logistics& operator=(const Logistics&) = delete;

	void planDelivery(const Cargo& cargo, const Destination& dest) const;
	virtual Transport* getTransport() const = 0;
	virtual void returnTransport(Transport*) const = 0;

};

#endif //LOGISTICS_LOGISTICS_H
