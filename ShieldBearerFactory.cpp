#include "ShieldBearerFactory.h"

Soldiers* ShieldBearerFactory::createUnit() {
    soldiers = dynamic_cast<Soldiers*>(new ShieldBearer());
    return soldiers;
}

int ShieldBearerFactory::calculate_TotalHealthPerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getHealthPerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculate_TotalDamagePerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getDamagePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}

int ShieldBearerFactory::calculate_TotalDefencePerUnit() {
    if (!soldiers) return 0; // Ensure soldiers is not null
    return soldiers->getDefencePerSoldier() * soldiers->getAmountOfSoldiersPerUnit();
}
