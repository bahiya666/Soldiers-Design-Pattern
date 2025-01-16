Soldier Design Patterns - README
Description
This project demonstrates the use of Design Patterns in a game scenario involving different types of soldiers. It includes implementations for several design patterns such as Factory, Prototype, Template Method, and Memento. The soldiers (Infantry, ShieldBearer, Boatman) have various attributes like health, damage, and defense, and the patterns help in organizing the creation, behavior, and state management of these soldier units.

Features
Factory Pattern: Demonstrates the creation of different types of soldiers using separate factories for each unit type (Infantry, ShieldBearer, Boatman).
Prototype Pattern: Shows how soldier units can be cloned to create new instances with the same initial attributes.
Template Method Pattern: Implements a predefined structure for soldier actions like engaging and disengaging in combat, where each unit can provide its own implementation of these actions.
Memento Pattern: Demonstrates saving and restoring the state of soldier objects (e.g., health, damage, and defense values) using a caretaker to hold the memento.

Requirements
C++ compiler that supports C++11 or later.
Standard C++ libraries (iostream, etc.)

Files
InfantryFactory.h - Defines the factory for creating Infantry units.
ShieldBearerFactory.h - Defines the factory for creating ShieldBearer units.
BoatmanFactory.h - Defines the factory for creating Boatman units.
CareTaker.h - Implements the CareTaker for the Memento pattern, responsible for storing and restoring soldier states.
Soldiers.h - Contains the Soldier base class, with attributes like health, damage, and defense.
Main.cpp - Contains the main() function and tests the various design patterns by calling functions like testFactory(), testPrototype(), testTemplate(), and testMemento().

testFactory()
This function tests the Factory Pattern by creating instances of Infantry, ShieldBearer, and Boatman units using their respective factories. It then prints the total health, damage, and defense for each unit type.

testPrototype()
This function tests the Prototype Pattern by creating an Infantry unit and cloning it. It prints the health of both the original and cloned units to demonstrate that they are identical.

testTemplate()
This function tests the Template Method Pattern by creating instances of Infantry, ShieldBearer, and Boatman units. It simulates engaging and disengaging each unit, showing that each unit can define its own implementation for these actions.

testMemento()
This function tests the Memento Pattern by creating an Infantry unit, engaging it, and saving its state using the militusMemento() method. It then changes the unit's attributes and restores the saved state to demonstrate how the Memento pattern works.
