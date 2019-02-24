#ifndef BENCHMARKER_H_
#define BENCHMARKER_H_

#include "../logistic/Logistics.h"
#include "../storage/Storage.h"
#include "../Destination.h"
#include "../Cargo.h"
#include <fstream>

template <class T>
class Benchmarker {
public:
	Benchmarker(
		Cargo& cargo,
		Logistics& logistics,
		Destination& destination,
		Storage<T>& storage
	);

	void simulateDelivering(const size_t times);
	void deliver();
	void flushInfo();
private:
	size_t _deliverNumber;
	Cargo& _cargo;
	Logistics& _logistics;
	Destination& _destination;
	Storage<T>& _storage;
};

template <class T>
Benchmarker<T>::Benchmarker(
	Cargo& cargo,
	Logistics& logistics,
	Destination& destination,
	Storage<T>& storage
) : _cargo(cargo),
_logistics(logistics),
_destination(destination),
_storage(storage),
_deliverNumber(0)
{}

template <class T>
void Benchmarker<T>::simulateDelivering(const size_t times) {
	for (size_t i = 0; i < times; ++i) {
		deliver();
		flushInfo();
	}
}

template <class T>
void Benchmarker<T>::deliver() {
	++_deliverNumber;
	_logistics.planDelivery(_cargo, _destination);
}

template <class T>
void Benchmarker<T>::flushInfo() {
	std::cout << _deliverNumber << ' ' << _storage.getCapacity() * sizeof(T) << std::endl;
}

#endif // BENCHMARKER_H_