#ifndef INFANTRYFACTORY_H
#define INFANTRYFACTORY_H

#include "Soldiers.h"
#include "Infantry.h"
#include "SoldierFactory.h"

class InfantryFactory:public SoldierFactory {

public:
	Soldiers* createUnit();

	int calculate_TotalHealthPerUnit();

	int calculate_TotalDamagePerUnit();

	int calculate_TotalDefencePerUnit();
};

#endif
