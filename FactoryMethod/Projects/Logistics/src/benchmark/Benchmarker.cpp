#include "Benchmarker.h"

Benchmarker::Benchmarker(
	Cargo& cargo, 
	Logistics& logistics, 
	Destination& destination, 
	Storage<Transport>& storage
) : _cargo(cargo),
	_logistics(logistics), 
	_destination(destination), 
	_storage(storage),
	_deliverNumber(0)
{}

void Benchmarker::deliver() {
	++_deliverNumber;
	_logistics.planDelivery(_cargo, _destination);
}

void Benchmarker::flushInfo() {
	_logFile << _deliverNumber << ' ' << _storage.getCapacity() << std::endl;
}