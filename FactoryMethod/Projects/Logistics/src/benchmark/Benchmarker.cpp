#include "Benchmarker.h"

Benchmarker::Benchmarker(
	Cargo& cargo, 
	Logistics& logistics, 
	Destination& destination, 
	Storage<Transport>& storage
) : _cargo(cargo),
	_logistics(logistics), 
	_destination(destination), 
	_storage(storage) 
{}

void Benchmarker::deliver() {
	_logistics.planDelivery(_cargo, _destination);
}