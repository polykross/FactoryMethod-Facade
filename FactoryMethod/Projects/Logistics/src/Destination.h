//
// Created by @PolinaShlepakova on 16.02.2019.
//

#ifndef LOGISTICS_DESTINATION_H
#define LOGISTICS_DESTINATION_H

#include <string>
#include <iostream>

class Destination {
public:
	Destination(const std::string& country, const std::string& city,
				const std::string& addressLine, const std::string& index = "");
	~Destination();
	Destination(const Destination& other);
	Destination& operator=(const Destination& other);

	const std::string& country() const;
	const std::string& city() const;
	const std::string& addressLine() const;
	const std::string& index() const;

private:
	std::string _country;
	std::string _city;
	std::string _addressLine;
	std::string _index;
};

std::ostream& operator<<(std::ostream& os, const Destination& destination);

#endif //LOGISTICS_DESTINATION_H
