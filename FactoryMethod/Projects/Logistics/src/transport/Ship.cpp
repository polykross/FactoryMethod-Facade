//
// Created by @PolinaShlepakova on 17.02.2019.
//

#include "Ship.h"

unsigned int Ship::freeId = 0;

Ship::Ship() : Transport(), _id(++freeId) {}

Ship::~Ship() = default;

unsigned int Ship::id() const {
	return _id;
}

void Ship::deliver(const Cargo& cargo, const Destination& dest) {
	// std::cout << "Deliver " << cargo << " to " << dest << " by " << *this << " using the sea" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Ship& truck) {
	return os << "Ship #" << truck.id();
}
