#ifndef BOATMANFACTORY_H
#define BOATMANFACTORY_H

#include "Soldiers.h"
#include "Boatman.h"
#include "SoldierFactory.h"

class BoatmanFactory:public SoldierFactory {


public:
	Soldiers * createUnit();

	int calculate_TotalHealthPerUnit();

	int calculate_TotalDamagePerUnit();

	int calculate_TotalDefencePerUnit();
};

#endif
