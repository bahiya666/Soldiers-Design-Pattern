#include "Boatman.h"
#include "Soldiers.h"
#include <string>
#include <iostream>

Boatman::Boatman() {
    unitName = "Boatman";
    healthPerSoldier = 100;
    damagePerSoldier = 90;
    defencePerSoldier = 20;
    amountOfSoldiersPerUnit = 10;  
}


Soldiers* Boatman::clonis() {
    Boatman* clone = new Boatman();
    clone->setHealthPerSoldier(getHealthPerSoldier());
    clone->setDamagePerSoldier(getDamagePerSoldier());
    clone->setDefencePerSoldier(getDefencePerSoldier());
    clone->setAmountOfSoldiersPerUnit(getAmountOfSoldiersPerUnit());
    clone->setUnitName(getUnitName());
    return clone;
}

// void Boatman::engage() {
// 	// TODO - implement Boatman::engage
// 	throw "Not yet implemented";
// }

// void Boatman::disengage() {
// 	// TODO - implement Boatman::disengage
// 	throw "Not yet implemented";
// }

void Boatman::prepare() {
	std::cout<< "Boatman preparation: maneuvers boats into strategic positions" << std::endl;
}

void Boatman::execute() {
	std::cout<< "Boatman execution: swarm the enemy" << std::endl;
}

void Boatman::retreat() {
	std::cout<< "Boatman retreat: rows home" << std::endl;
}

void Boatman::rest() {
	std::cout<< "Boatman rest: sleeps with the fishes" << std::endl;
}
