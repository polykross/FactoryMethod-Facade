#include "Cargo.h"
#include "Destination.h"

#include <iostream>

int main() {
	Destination d1("Ukraine", "Kyiv", "st. Illinska, 2", "01010");
	Destination d2("Ukraine", "Kyiv", "st. Sagaidachnogo, 12", "12345");
	Destination d3(d1);

	std::cout << d1 << std::endl;
	std::cout << d2 << std::endl;
	std::cout << d3 << std::endl;
	d3 = d2;
	std::cout << d3 << std::endl;

	return 0;
}