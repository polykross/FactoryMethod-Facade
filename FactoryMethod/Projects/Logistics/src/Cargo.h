//
// Created by @PolinaShlepakova on 16.02.2019.
//

#ifndef LOGISTICS_CARGO_H
#define LOGISTICS_CARGO_H

#include <string>
#include <iostream>

class Cargo {
public:
	Cargo(const std::string& name, double weight);
	~Cargo();
	Cargo(const Cargo& other) = delete;
	Cargo& operator=(const Cargo& other) = delete;

	const std::string& name() const;
	double weight() const;

private:
	std::string _name;
	double _weight;
};

std::ostream& operator<<(std::ostream& os, const Cargo& cargo);

#endif //LOGISTICS_CARGO_H
