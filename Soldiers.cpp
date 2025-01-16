#include "Soldiers.h"
#include "Memento.h"

Memento* Soldiers::militusMemento() {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}

void Soldiers::vivificaMemento(Memento* mem) {
    if (mem) {
        healthPerSoldier = mem->getHealthPerSoldier();
        damagePerSoldier = mem->getDamagePerSoldier();
        defencePerSoldier = mem->getDefencePerSoldier();
        amountOfSoldiersPerUnit = mem->getAmountOfSoldiersPerUnit();
        unitName = mem->getUnitName();
    }
}
