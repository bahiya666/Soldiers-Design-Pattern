#ifndef INFANTRY_H
#define INFANTRY_H

#include <string>
#include "Soldiers.h"

class Infantry : public Soldiers{

// private:
// 	int healthPerSoldier;
// 	int damagePerSoldier;
// 	int defencePerSoldier;
// 	int amountOfSoldiersPerUnit;
// 	std::string unitName;

public:
	Infantry();

	Soldiers * clonis() ;

	// void engage();

	// void disengage();

private:
	void prepare();

	void execute();

	void retreat();

	void rest();
};

#endif
