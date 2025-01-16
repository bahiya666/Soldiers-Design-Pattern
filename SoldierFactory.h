#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory{

protected:
	Soldiers * soldiers;

public:

	virtual Soldiers * createUnit() = 0;

	virtual int calculate_TotalHealthPerUnit() = 0;

	virtual int calculate_TotalDamagePerUnit() = 0;

	virtual int calculate_TotalDefencePerUnit() = 0;

	virtual ~SoldierFactory() = default;
};

#endif
