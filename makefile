# Target to compile the final executable and run it
run: TestingMain
	./TestingMain

# Target to compile the final executable
TestingMain: Boatman.o BoatmanFactory.o Infantry.o InfantryFactory.o Memento.o ShieldBearer.o ShieldBearerFactory.o Soldiers.o TestingMain.o
	g++ -std=c++11 Boatman.o BoatmanFactory.o Infantry.o InfantryFactory.o Memento.o ShieldBearer.o ShieldBearerFactory.o Soldiers.o TestingMain.o -o TestingMain

# Targets to compile each source file into an object file
Boatman.o: Boatman.cpp Boatman.h
	g++ -c -std=c++11 Boatman.cpp

BoatmanFactory.o: BoatmanFactory.cpp BoatmanFactory.h
	g++ -c -std=c++11 BoatmanFactory.cpp

Infantry.o: Infantry.cpp Infantry.h
	g++ -c -std=c++11 Infantry.cpp

InfantryFactory.o: InfantryFactory.cpp InfantryFactory.h
	g++ -c -std=c++11 InfantryFactory.cpp

Memento.o: Memento.cpp Memento.h
	g++ -c -std=c++11 Memento.cpp

ShieldBearer.o: ShieldBearer.cpp ShieldBearer.h
	g++ -c -std=c++11 ShieldBearer.cpp

ShieldBearerFactory.o: ShieldBearerFactory.cpp ShieldBearerFactory.h
	g++ -c -std=c++11 ShieldBearerFactory.cpp

Soldiers.o: Soldiers.cpp Soldiers.h
	g++ -c -std=c++11 Soldiers.cpp

TestingMain.o: TestingMain.cpp
	g++ -c -std=c++11 TestingMain.cpp

# Target to clean up generated files
clean: 
	rm -f *.o TestingMain
