#include "Cargo.h"
#include "Destination.h"
#include "Truck.h"
#include "Logistics.h"

#include <iostream>

int main() {
	Logistics logistics;

	Cargo c1("water", 500);
	Cargo c2("juice", 1500);

	Destination d1("Ukraine", "Kyiv", "st. Illinska, 2", "01010");
	Destination d2("Ukraine", "Kyiv", "st. Sagaidachnogo, 12", "12345");

	logistics.planDelivery(c1, d1);
	logistics.planDelivery(c2, d2);

	return 0;
}