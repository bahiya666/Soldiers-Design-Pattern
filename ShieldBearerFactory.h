#ifndef SHIELDBEARERFACTORY_H
#define SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"
#include "ShieldBearer.h"
#include "SoldierFactory.h"

class ShieldBearerFactory : public SoldierFactory {


public:
	Soldiers * createUnit();

	int calculate_TotalHealthPerUnit();

	int calculate_TotalDamagePerUnit();

	int calculate_TotalDefencePerUnit();
};

#endif
