#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "CareTaker.h"
#include <iostream>

void testInfantry();
void testInfantryFactory();
void testShieldBearer();
void testShieldBearerFactory();
void testBoatman();
void testBoatmanFactory();
void testCareTaker();
void runGameSimulation();

int main() {
    std::cout << "Running all tests...\n\n";

    testInfantry();
    testInfantryFactory();
    testShieldBearer();
    testShieldBearerFactory();
    testBoatman();
    testBoatmanFactory();
    testCareTaker();
    runGameSimulation();

    std::cout << "\nAll tests completed.\n";
    return 0;
}

void testInfantry() {
    Infantry infantry(100, 20, 10, 50, "Test Infantry");
    std::cout << "Testing Infantry:\n";
    infantry.prepare();
    infantry.execute();
    infantry.engage();
    infantry.disengage();
    infantry.retreat();
    Soldiers* clonedInfantry = infantry.clonis();
    std::cout << "Cloned Infantry: " << clonedInfantry->getUnitName() << "\n";
    infantry.rest();
  
    clonedInfantry=nullptr;
    delete clonedInfantry;
}

void testInfantryFactory() {
    InfantryFactory infantryFactory;
    Soldiers* infantryUnit = infantryFactory.createUnit();
    std::cout << "Testing InfantryFactory:\n";
    std::cout << "Created Infantry: " << infantryUnit->getUnitName() << "\n";

    infantryUnit->engage();
    std::cout << "Testing calculation methods for InfantryFactory:\n";
    std::cout << "Infantry Total Health: " << infantryFactory.calculateTotalHealthPerUnit(infantryUnit) << "\n";
    std::cout << "Infantry Total Damage: " << infantryFactory.calculateTotalDamagePerUnit(infantryUnit) << "\n";
    std::cout << "Infantry Total Defence: " << infantryFactory.calculateTotalDefencePerUnit(infantryUnit) << "\n\n";
    infantryUnit->disengage();

    infantryUnit=nullptr;
    delete infantryUnit;

}

void testShieldBearer() {
    ShieldBearer shieldBearer(120, 40, 90, 10, "Test ShieldBearer");
    std::cout << "Testing ShieldBearer:\n";
    shieldBearer.prepare();
    shieldBearer.execute();
    shieldBearer.engage();
    shieldBearer.disengage();
    shieldBearer.retreat();



    Soldiers* clonedShieldBearer = shieldBearer.clonis();
    std::cout << "Cloned ShieldBearer: " << clonedShieldBearer->getUnitName() << "\n";

    // Engage with the cloned unit
    std::cout << "Testing cloned ShieldBearer engaging in battle:\n";
    clonedShieldBearer->engage();
shieldBearer.rest();
       clonedShieldBearer=nullptr;
    delete clonedShieldBearer;


}

void testShieldBearerFactory() {
    ShieldBearerFactory shieldBearerFactory;
    Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();
    std::cout << "Testing ShieldBearerFactory:\n";
    std::cout << "Created ShieldBearer: " << shieldBearerUnit->getUnitName() << "\n";

    shieldBearerUnit->engage();

    std::cout << "ShieldBearer's Total Health: " << shieldBearerFactory.calculateTotalHealthPerUnit(shieldBearerUnit) << "\n";
    std::cout << "ShieldBearer's Total Damage: " << shieldBearerFactory.calculateTotalDamagePerUnit(shieldBearerUnit) << "\n";
    std::cout << "ShieldBearer's Total Defense: " << shieldBearerFactory.calculateTotalDefencePerUnit(shieldBearerUnit) << "\n";

    shieldBearerUnit=nullptr;
    delete shieldBearerUnit;
}

void testBoatman() {
    Boatman boatman(250, 140, 50, 20, "Test Boatman");
    std::cout << "Testing Boatman:\n";
    boatman.execute();
    boatman.engage();
    boatman.disengage();
    boatman.prepare();
    boatman.retreat();


    Soldiers* clonedBoatman = boatman.clonis();
    std::cout << "Cloned Boatman: " << clonedBoatman->getUnitName() << "\n";

    // Engage with the cloned unit
    std::cout << "Testing cloned Boatman engaging in battle:\n";
    clonedBoatman->engage();
    boatman.rest();
clonedBoatman=nullptr;
    delete clonedBoatman;
}

void testBoatmanFactory() {
    BoatmanFactory boatmanFactory;
    Soldiers* boatmanUnit = boatmanFactory.createUnit();
    std::cout << "Testing BoatmanFactory:\n";
    std::cout << "Created Boatman: " << boatmanUnit->getUnitName() << "\n";

    boatmanUnit->engage();

    std::cout << "Boatman's Total Health: " << boatmanFactory.calculateTotalHealthPerUnit(boatmanUnit) << "\n";
    std::cout << "Boatman's Total Damage: " << boatmanFactory.calculateTotalDamagePerUnit(boatmanUnit) << "\n";
    std::cout << "Boatman's Total Defense: " << boatmanFactory.calculateTotalDefencePerUnit(boatmanUnit) << "\n";
    boatmanUnit=nullptr;
    delete boatmanUnit;
}

void testCareTaker() {
    Infantry infantry(100, 20, 10, 50, "Infantry");
    ShieldBearer shieldBearer(120, 40, 90, 10, "ShieldBearer");
    Boatman boatman(250, 140, 50, 20, "Boatman");

    CareTaker caretaker;
    caretaker.addMemento(infantry.militusMemento());
    caretaker.addMemento(shieldBearer.militusMemento());
    caretaker.addMemento(boatman.militusMemento());

    std::cout << "Testing CareTaker:\n";
    std::cout << "States saved!\n";

    infantry.disengage();
    shieldBearer.disengage();
    boatman.disengage();

    infantry.vivificaMemento(caretaker.undo());
    shieldBearer.vivificaMemento(caretaker.undo());
    boatman.vivificaMemento(caretaker.undo());

    std::cout << "States restored!\n";
}

void runGameSimulation() {
    std::cout << "\nRunning game simulation...\n";

    // Create factories
    InfantryFactory infantryFactory;
    ShieldBearerFactory shieldBearerFactory;
    BoatmanFactory boatmanFactory;

    // Create units using factories
    Soldiers* infantryUnit = infantryFactory.createUnit();
    Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();
    Soldiers* boatmanUnit = boatmanFactory.createUnit();

    std::cout << "Units created:\n";
    std::cout << "Infantry: " << infantryUnit->getUnitName() << "\n";
    std::cout << "Shield Bearer: " << shieldBearerUnit->getUnitName() << "\n";
    std::cout << "Boatman: " << boatmanUnit->getUnitName() << "\n\n";

    // Engage units in battle
    infantryUnit->engage();
    shieldBearerUnit->engage();
    boatmanUnit->engage();

    std::cout << "\nUnits have engaged in battle.\n\n";

    // Clone the infantry unit
    Soldiers* clonedInfantry = infantryUnit->clonis();
    std::cout << "Infantry unit cloned!\n";
    std::cout << "Cloned Infantry: " << clonedInfantry->getUnitName() << "\n\n";

    // Use Memento pattern to save the state of the game
    CareTaker caretaker;
    caretaker.addMemento(infantryUnit->militusMemento());
    caretaker.addMemento(shieldBearerUnit->militusMemento());
    caretaker.addMemento(boatmanUnit->militusMemento());

    std::cout << "Game state saved!\n\n";

    // Modify units
    std::cout << "Infantry unit now retreats!\n";
    infantryUnit->disengage();

    // Restore the game state
    infantryUnit->vivificaMemento(caretaker.undo());
    shieldBearerUnit->vivificaMemento(caretaker.undo());
    boatmanUnit->vivificaMemento(caretaker.undo());

    std::cout << "\nGame state restored!\n";
    std::cout << "Infantry, Shield Bearer, and Boatman units ready for battle again.\n\n";

    // Clean up
    infantryUnit=nullptr;
    delete infantryUnit;
      shieldBearerUnit=nullptr;
    delete shieldBearerUnit;
      boatmanUnit=nullptr;
    delete boatmanUnit;
      clonedInfantry=nullptr;
    delete clonedInfantry;

    std::cout << "Game simulation complete.\n";
}
