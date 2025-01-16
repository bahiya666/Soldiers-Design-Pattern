#include "BoatmanFactory.h"

Soldiers* BoatmanFactory::createUnit() {
    soldiers = dynamic_cast<Soldiers*>(new Boatman());
    return soldiers;
}

int BoatmanFactory::calculate_TotalHealthPerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculate_TotalDamagePerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int BoatmanFactory::calculate_TotalDefencePerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}