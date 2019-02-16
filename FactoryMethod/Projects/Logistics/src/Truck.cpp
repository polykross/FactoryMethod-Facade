//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "Truck.h"

unsigned int Truck::freeId = 0;

Truck::Truck() : _id(++freeId) {}

Truck::~Truck() = default;

unsigned int Truck::id() const {
	return _id;
}

void Truck::deliver(const Cargo& cargo, const Destination& dest) {
	std::cout << "Deliver " << cargo << " to " << dest << " by " << *this << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Truck& truck) {
	return os << "Truck #" << truck.id();
}
