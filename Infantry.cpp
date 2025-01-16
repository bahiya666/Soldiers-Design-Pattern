#include "Infantry.h"
#include <iostream>

Infantry::Infantry() {
    unitName = "Infantry";
    healthPerSoldier = 100;
    damagePerSoldier = 50;
    defencePerSoldier = 70;
    amountOfSoldiersPerUnit = 10;  
}

Soldiers* Infantry::clonis() {
    Infantry* clone = new Infantry();
    clone->setHealthPerSoldier(getHealthPerSoldier());
    clone->setDamagePerSoldier(getDamagePerSoldier());
    clone->setDefencePerSoldier(getDefencePerSoldier());
    clone->setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit());
    clone->setUnitName(getUnitName());
    return clone;
}

// void Infantry::engage() {
// 	// TODO - implement Infantry::engage
// 	throw "Not yet implemented";
// }

// void Infantry::disengage() {
// 	// TODO - implement Infantry::disengage
// 	throw "Not yet implemented";
// }

void Infantry::prepare() {
	std::cout<< "Infantry preparation: forms a tight defensive formation" << std::endl;
}

void Infantry::execute() {
	std::cout<< "Infantry execution: attacks the enemy" << std::endl;
}

void Infantry::retreat() {
	std::cout<< "Infantry retreat: runs away" << std::endl;
}

void Infantry::rest() {
	std::cout<< "Infantry rest: takes a nap" << std::endl;
}
