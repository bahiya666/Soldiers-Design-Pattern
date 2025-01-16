#ifndef SOLDIERS_H
#define SOLDIERS_H

#include <string>
#include "Memento.h"

class Soldiers {

protected:
	int healthPerSoldier;
	int damagePerSoldier;
	int defencePerSoldier;
	int amountOfSoldiersPerUnit;
	std::string unitName;

	virtual void prepare() = 0;

	virtual void execute() = 0;

	virtual void retreat() = 0;

	virtual void rest() = 0;

public:
	virtual Soldiers * clonis()  = 0;

	virtual void engage(){

		prepare();
		execute();
	}

	virtual void disengage() {

		retreat();
		rest();
	}

	virtual ~Soldiers() = default;

	int getHealthPerSoldier() const { return healthPerSoldier; }
    int getDamagePerSoldier() const { return damagePerSoldier; }
    int getDefencePerSoldier() const { return defencePerSoldier; }
    int getAmountOfSoldiersPerUnit() const { return amountOfSoldiersPerUnit; }
	std::string getUnitName() const{return unitName;}

	void setHealthPerSoldier(int health) { healthPerSoldier = health; }
    void setDamagePerSoldier(int damage) { damagePerSoldier = damage; }
    void setDefencePerSoldier(int defence) { defencePerSoldier = defence; }
    void setAmountOfSoldiersPerUnit(int amount) { amountOfSoldiersPerUnit = amount; }
    void setUnitName(const std::string& name) { unitName = name; }

	Memento * militusMemento();
	void vivificaMemento(Memento* mem);


	
};

#endif
