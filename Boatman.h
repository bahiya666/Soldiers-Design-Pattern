#ifndef BOATMAN_H
#define BOATMAN_H

#include <string>
#include "Soldiers.h"

class Boatman : public Soldiers{

// private:
// 	int healthPerSoldier;
// 	int damagePerSoldier;
// 	int defencePerSoldier;
// 	int amountOfSoldiersPerUnit;
// 	std::string unitName;

public:
	Boatman();

	Soldiers * clonis();

	// void engage();

	// void disengage();

private:
	void prepare();

	void execute();

	void retreat();

	void rest();
};

#endif
