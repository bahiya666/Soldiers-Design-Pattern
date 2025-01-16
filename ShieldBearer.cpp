#include "ShieldBearer.h"
#include <iostream>

ShieldBearer::ShieldBearer() {
    unitName = "ShieldBearer";
    healthPerSoldier = 100;
    damagePerSoldier = 30;
    defencePerSoldier = 90;
    amountOfSoldiersPerUnit = 10;  
}

Soldiers* ShieldBearer::clonis() {
    ShieldBearer* clone = new ShieldBearer();
    clone->setHealthPerSoldier(getHealthPerSoldier());
    clone->setDamagePerSoldier(getDamagePerSoldier());
    clone->setDefencePerSoldier(getDefencePerSoldier());
    clone->setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit());
    clone->setUnitName(getUnitName());
    return clone;
}

// void ShieldBearer::engage() {
// 	// TODO - implement ShieldBearer::engage
// 	throw "Not yet implemented";
// }

// void ShieldBearer::disengage() {
// 	// TODO - implement ShieldBearer::disengage
// 	throw "Not yet implemented";
// }

void ShieldBearer::prepare() {
	std::cout<< "ShieldBearer preparation: cleans their shields" << std::endl;
}

void ShieldBearer::execute() {
	std::cout<< "ShieldBearer execution: charges the enemy" << std::endl;
}

void ShieldBearer::retreat() {
	std::cout<< "ShieldBearer retreat: back away slowly" << std::endl;
}

void ShieldBearer::rest() {
	std::cout<< "ShieldBearer rest: drinks some tea" << std::endl;
}
