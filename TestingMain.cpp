#include <iostream>
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "CareTaker.h"

void testFactory(){
    // Creating factories
    SoldierFactory* infantryFactory = new InfantryFactory();
    SoldierFactory* shieldBearerFactory = new ShieldBearerFactory();
    SoldierFactory* boatmanFactory = new BoatmanFactory();

    // Creating units
    Soldiers* infantryUnit = infantryFactory->createUnit();
    Soldiers* shieldBearerUnit = shieldBearerFactory->createUnit();
    Soldiers* boatmanUnit = boatmanFactory->createUnit();

    // Displaying total attributes for each unit
    std::cout << "Infantry Total Health: " << infantryFactory->calculate_TotalHealthPerUnit() << std::endl;
    std::cout << "Infantry Total Damage: " << infantryFactory->calculate_TotalDamagePerUnit() << std::endl;
    std::cout << "Infantry Total Defence: " << infantryFactory->calculate_TotalDefencePerUnit() << std::endl;

    std::cout << "ShieldBearer Total Health: " << shieldBearerFactory->calculate_TotalHealthPerUnit() << std::endl;
    std::cout << "ShieldBearer Total Damage: " << shieldBearerFactory->calculate_TotalDamagePerUnit() << std::endl;
    std::cout << "ShieldBearer Total Defence: " << shieldBearerFactory->calculate_TotalDefencePerUnit() << std::endl;

    std::cout << "Boatman Total Health: " << boatmanFactory->calculate_TotalHealthPerUnit() << std::endl;
    std::cout << "Boatman Total Damage: " << boatmanFactory->calculate_TotalDamagePerUnit() << std::endl;
    std::cout << "Boatman Total Defence: " << boatmanFactory->calculate_TotalDefencePerUnit() << std::endl;

    // Clean up
    delete infantryUnit;
    delete shieldBearerUnit;


    delete boatmanUnit;
    delete infantryFactory;
    delete shieldBearerFactory;
    delete boatmanFactory;
    
}

void testPrototype(){
     // Create an Infantry unit
    Soldiers* infantry = new Infantry();

    // Clone the Infantry unit
    Soldiers* infantryClone = infantry->clonis();

    std::cout << "Original Infantry Health: " << infantry->getHealthPerSoldier() << std::endl;
    std::cout << "Cloned Infantry Health: " << infantryClone->getHealthPerSoldier() << std::endl;

    // Clean up
    delete infantry;
    delete infantryClone;

}

void testTemplate(){
    Soldiers* infantry = new Infantry();
    Soldiers* shieldBearer = new ShieldBearer();
    Soldiers* boatman = new Boatman();

    std::cout << "Engaging Infantry:" << std::endl;
    infantry->engage();
    std::cout << "Disengaging Infantry:" << std::endl;
    infantry->disengage();

    std::cout << "\nEngaging ShieldBearer:" << std::endl;
    shieldBearer->engage();
    std::cout << "Disengaging ShieldBearer:" << std::endl;
    shieldBearer->disengage();

    std::cout << "\nEngaging Boatman:" << std::endl;
    boatman->engage();
    std::cout << "Disengaging Boatman:" << std::endl;
    boatman->disengage();

    delete infantry;
    delete shieldBearer;
    delete boatman;

}

void testMemento(){
    CareTaker careTaker;

    Soldiers* infantry = new Infantry();
    infantry->engage();  // Engage infantry
    careTaker.addMemento(infantry->militusMemento());  // Save state

    // Change state
    infantry->setHealthPerSoldier(80);
    infantry->setDamagePerSoldier(40);
    infantry->setDefencePerSoldier(60);

    std::cout << "Changed Infantry State:" << std::endl;
    std::cout << "Health: " << infantry->getHealthPerSoldier() << std::endl;
    std::cout << "Damage: " << infantry->getDamagePerSoldier() << std::endl;
    std::cout << "Defence: " << infantry->getDefencePerSoldier() << std::endl;

    // Restore previous state
    infantry->vivificaMemento(careTaker.getMemento(0));

    std::cout << "\nRestored Infantry State:" << std::endl;
    std::cout << "Health: " << infantry->getHealthPerSoldier() << std::endl;
    std::cout << "Damage: " << infantry->getDamagePerSoldier() << std::endl;
    std::cout << "Defence: " << infantry->getDefencePerSoldier() << std::endl;

    delete infantry;

}

int main() {
    std::cout<<"***Testing Factory Method***"<<std::endl;
    std::cout<<""<<std::endl;
    testFactory();
    std::cout<<""<<std::endl;
    std::cout<<"***Testing Prototype***"<<std::endl;
    std::cout<<""<<std::endl;
    testPrototype();
    std::cout<<""<<std::endl;
    std::cout<<"***Testing Template Method***"<<std::endl;
    std::cout<<""<<std::endl;
    testTemplate();
    std::cout<<""<<std::endl;
    std::cout<<"***Testing Memento***"<<std::endl;
    std::cout<<""<<std::endl;
    testMemento();
    std::cout<<""<<std::endl;

    return 0;
}
