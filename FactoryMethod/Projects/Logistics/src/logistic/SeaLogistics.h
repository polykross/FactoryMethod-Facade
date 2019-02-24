//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef LOGISTICS_SEALOGISTICS_H
#define LOGISTICS_SEALOGISTICS_H

#include "../transport/Ship.h"
#include "../Cargo.h"
#include "../Destination.h"
#include "Logistics.h"
#include "../storage/Storage.h"

class SeaLogistics : public Logistics {
public:
	SeaLogistics(Storage<Ship>&);
	~SeaLogistics() override;
	SeaLogistics(const SeaLogistics&) = delete;
	SeaLogistics& operator=(const SeaLogistics&) = delete;

	Transport* getTransport() const override;
	void returnTransport(Transport*) const override;
private:
	Storage<Ship>& _shipStorage;
};


#endif //LOGISTICS_SEALOGISTICS_H
