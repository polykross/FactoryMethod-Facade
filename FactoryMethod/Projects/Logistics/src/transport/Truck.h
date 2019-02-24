//
// Created by @PolinaShlepakova on 16.02.2019.
//

#ifndef LOGISTICS_TRUCK_H
#define LOGISTICS_TRUCK_H

#include <string>
#include <iostream>

#include "../Cargo.h"
#include "../Destination.h"
#include "Transport.h"

class Truck : public Transport {
public:
	Truck();
	~Truck() override;
	Truck(const Truck&) = delete;
	Truck& operator=(const Truck&) = delete;

	unsigned int id() const override;
	void deliver(const Cargo& cargo, const Destination& dest) override;

private:
	static unsigned int freeId;
	const unsigned int _id;
};

std::ostream& operator<<(std::ostream& os, const Truck& truck);

#endif //LOGISTICS_TRUCK_H
