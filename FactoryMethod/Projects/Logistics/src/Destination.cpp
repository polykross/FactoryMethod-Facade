//
// Created by @PolinaShlepakova on 16.02.2019.
//

#include "Destination.h"

Destination::Destination(const std::string& country, const std::string& city,
						 const std::string& addressLine, const std::string& index)
	: _country(country), _city(city), _addressLine(addressLine), _index(index)
{}

Destination::Destination(const Destination& other)
	: _country(other.country()), _city(other.city()),
	  _addressLine(other.addressLine()), _index(other.index())
{}

Destination& Destination::operator=(const Destination& other) {
	if (this == &other) {
		return *this;
	}
	_country = other.country();
	_city = other.city();
	_addressLine = other.addressLine();
	_index = other.index();
	return *this;
}

const std::string& Destination::country() const {
	return _country;
}

const std::string& Destination::city() const {
	return _city;
}

const std::string& Destination::addressLine() const {
	return _addressLine;
}

const std::string& Destination::index() const {
	return _index;
}

Destination::~Destination() = default;

std::ostream& operator<<(std::ostream& os, const Destination& destination) {
	return os << destination.country() << ", " << destination.city() << ", " <<
				 destination.addressLine() << ", " <<
				 destination.index();
}
