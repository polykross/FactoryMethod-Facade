//
// Created by @PolinaShlepakova on 17.02.2019.
//

#ifndef LOGISTICS_SEALOGISTICS_H
#define LOGISTICS_SEALOGISTICS_H

#include "Ship.h"
#include "Cargo.h"
#include "Destination.h"
#include "Logistics.h"

class SeaLogistics : public Logistics {
public:
	SeaLogistics();
	~SeaLogistics() override;
	SeaLogistics(const SeaLogistics&) = delete;
	SeaLogistics& operator=(const SeaLogistics&) = delete;

	Transport* getTransport() const override;
	void returnTransport(Transport*) const override;

};


#endif //LOGISTICS_SEALOGISTICS_H
