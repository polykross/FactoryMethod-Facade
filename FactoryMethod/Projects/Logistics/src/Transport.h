//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef LOGISTICS_TRANSPORT_H
#define LOGISTICS_TRANSPORT_H

#include "Cargo.h"
#include "Destination.h"

class Transport {
public:
	Transport();
	virtual ~Transport() = 0;
	Transport(const Transport&) = delete;
	Transport& operator=(const Transport&) = delete;

	virtual unsigned int id() const = 0;
	virtual void deliver(const Cargo& cargo, const Destination& dest) = 0;

};

#endif //LOGISTICS_TRANSPORT_H
