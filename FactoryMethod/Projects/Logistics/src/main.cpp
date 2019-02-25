#include "logistic/RoadLogistics.h"
#include "logistic/SeaLogistics.h"
#include "storage/TransportPool.h"
#include "storage/TransportStorage.h"
#include "benchmark/Benchmarker.h"

#include <iostream>

void simpleExample();
void benchmarking();

int main() {
	simpleExample();
	benchmarking();
	return 0;
}

void simpleExample() {
	RoadLogistics roadLog(TransportPool<Truck>::getInstance());
	SeaLogistics seaLog(TransportPool<Ship>::getInstance());

	Cargo c1("water", 500);
	Cargo c2("juice", 1500);

	Destination d1("Ukraine", "Kyiv", "st. Illinska, 2", "01010");
	Destination d2("Ukraine", "Kyiv", "st. Sagaidachnogo, 12", "12345");

	roadLog.planDelivery(c1, d1);
	seaLog.planDelivery(c2, d2);
}

void benchmarking() {
	RoadLogistics roadLog(TransportPool<Truck>::getInstance());
	SeaLogistics seaLog(TransportStorage<Ship>::getInstance());
	Cargo c1("water", 500);
	Destination d1("Ukraine", "Kyiv", "st. Illinska, 2", "01010");

	Benchmarker<Truck> poolBench(c1, roadLog, d1, TransportPool<Truck>::getInstance());
	Benchmarker<Ship> storageBench(c1, seaLog, d1, TransportStorage<Ship>::getInstance());

	std::cout << "Object pool benchmarking: " << std::endl;
	poolBench.simulateDelivering(50);
	std::cout << "Storage benchmarking: " << std::endl;
	storageBench.simulateDelivering(50);

	TransportPool<Truck>::getInstance().reset();
}