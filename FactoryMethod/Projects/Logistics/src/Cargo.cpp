//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "Cargo.h"

Cargo::Cargo(const std::string& name, double weight): _name(name), _weight(weight) {}

Cargo::~Cargo() = default;

const std::string& Cargo::name() const {
	return _name;
}

double Cargo::weight() const {
	return _weight;
}

std::ostream& operator<<(std::ostream& os, const Cargo& cargo) {
	return os << cargo.name() << " : " << cargo.weight() << " kg";
}
