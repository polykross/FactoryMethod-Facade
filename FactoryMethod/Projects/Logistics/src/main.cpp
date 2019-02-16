#include "Cargo.h"
#include "Destination.h"
#include "Truck.h"

#include <iostream>

int main() {
	Cargo c1("water", 500);
	Cargo c2("juice", 1500);

	Destination d1("Ukraine", "Kyiv", "st. Illinska, 2", "01010");
	Destination d2("Ukraine", "Kyiv", "st. Sagaidachnogo, 12", "12345");

	Truck t1;
	Truck t2;

	t1.deliver(c1, d1);
	t2.deliver(c2, d2);

	return 0;
}