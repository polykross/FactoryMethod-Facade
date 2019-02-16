#include "Cargo.h"

#include <iostream>

int main() {
	Cargo c1("water", 500);
	Cargo c2("juice", 1500);

	std::cout << c1 << std::endl;
	std::cout << c2 << std::endl;

	return 0;
}