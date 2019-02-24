#ifndef BENCHMARKER_H_
#define BENCHMARKER_H_

#include "../logistic/Logistics.h"
#include "../storage/Storage.h"
#include "../Destination.h"
#include "../Cargo.h"
#include <fstream>

class Benchmarker {
public:
	Benchmarker(
		Cargo& cargo, 
		Logistics& logistics, 
		Destination& destination, 
		Storage<Transport>& storage
	);

	void deliver();
private:
	Cargo& _cargo;
	Logistics& _logistics;
	Destination& _destination;
	Storage<Transport>& _storage;
	std::ofstream _logFile;
};

#endif // BENCHMARKER_H_