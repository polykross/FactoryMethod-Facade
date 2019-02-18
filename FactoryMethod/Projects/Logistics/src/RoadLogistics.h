//
// Created by @PolinaShlepakova on 16.02.2019.
//

#ifndef LOGISTICS_ROAD_LOGISTICS_H
#define LOGISTICS_ROAD_LOGISTICS_H

#include "Truck.h"
#include "Cargo.h"
#include "Destination.h"
#include "Logistics.h"
#include "TransportPool.h"

class RoadLogistics : public Logistics {
public:
	RoadLogistics();
	~RoadLogistics() override;
	RoadLogistics(const RoadLogistics&) = delete;
	RoadLogistics& operator=(const RoadLogistics&) = delete;

	Transport* getTransport() const override;
	void returnTransport(Transport*) const override;
private:
	TransportPool<Truck>& _truckPool;
};

#endif //LOGISTICS_ROAD_LOGISTICS_H
