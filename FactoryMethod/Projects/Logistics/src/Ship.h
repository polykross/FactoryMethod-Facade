//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef LOGISTICS_SHIP_H
#define LOGISTICS_SHIP_H


#include <string>
#include <iostream>

#include "Cargo.h"
#include "Destination.h"
#include "Transport.h"

class Ship : public Transport {
public:
	Ship();
	~Ship() override;
	Ship(const Ship&) = delete;
	Ship& operator=(const Ship&) = delete;

	unsigned int id() const override;
	void deliver(const Cargo& cargo, const Destination& dest) override;

private:
	static unsigned int freeId;
	const unsigned int _id;
};

std::ostream& operator<<(std::ostream& os, const Ship& truck);


#endif //LOGISTICS_SHIP_H
