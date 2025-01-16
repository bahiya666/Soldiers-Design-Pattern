#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

class Memento {

private:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

	

	public:
		int getHealthPerSoldier() const { return healthPerSoldier; }
    int getDamagePerSoldier() const { return damagePerSoldier; }
    int getDefencePerSoldier() const { return defencePerSoldier; }
    int getAmountOfSoldiersPerUnit() const { return amountOfSoldiersPerUnit; }
    std::string getUnitName() const { return unitName; }

	Memento(int value1, int value2, int value3, int value4, std::string value5)
	: healthPerSoldier(value1), damagePerSoldier(value2), defencePerSoldier(value3), amountOfSoldiersPerUnit(value4), unitName(value5) {};
};

#endif
