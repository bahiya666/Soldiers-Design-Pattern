#include "InfantryFactory.h"
// #include "Infantry.h"

Soldiers* InfantryFactory::createUnit() {
    soldiers = dynamic_cast<Soldiers*>(new Infantry());
    return soldiers;
}

int InfantryFactory::calculate_TotalHealthPerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculate_TotalDamagePerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int InfantryFactory::calculate_TotalDefencePerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}
