#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "CareTaker.h"
#include <iostream>

// Function prototypes for testing various components of the system
void testInfantry();
void testInfantryFactory();
void testShieldBearer();
void testShieldBearerFactory();
void testBoatman();
void testBoatmanFactory();
void testCareTaker();
void runGameSimulation();

int main() {
    // Start the test suite
    std::cout << "Running all tests...\n\n";

    // Testing each component
    testInfantry();
    std::cout<<"===============================\n";
    testInfantryFactory();
    std::cout<<"===============================\n";
    testShieldBearer();
    std::cout<<"===============================\n";
    testShieldBearerFactory();
    std::cout<<"===============================\n";
    testBoatman();
    std::cout<<"===============================\n";
    testBoatmanFactory();
    std::cout<<"===============================\n";
    testCareTaker();
    std::cout<<"===============================\n";

    // Simulate a full game scenario
    runGameSimulation();

    // All tests completed
    std::cout << "\nAll tests completed.\n";
    return 0;
}

// Test the Infantry class
void testInfantry() {
    // Create an Infantry unit with specified attributes
    Infantry infantry(100, 20, 10, 50, "Test Infantry");

    // Test the behavior of the Infantry unit
    std::cout << "Testing Infantry:\n";
    infantry.prepare();
    infantry.execute();
    infantry.engage();
    infantry.disengage();
    infantry.retreat();

    // Test cloning functionality
    Soldiers* clonedInfantry = infantry.clonis();
    std::cout << "Cloned Infantry: " << clonedInfantry->getUnitName() << "\n";
    infantry.rest();
  
    // Clean up
    delete clonedInfantry;
    clonedInfantry = nullptr;
}

// Test the InfantryFactory class
void testInfantryFactory() {
    InfantryFactory infantryFactory;

    // Create an Infantry unit using the factory
    Soldiers* infantryUnit = infantryFactory.createUnit();
    std::cout << "Testing InfantryFactory:\n";
    std::cout << "Created Infantry: " << infantryUnit->getUnitName() << "\n";

    // Engage the Infantry unit in battle
    infantryUnit->engage();

    // Test and display the calculated statistics for the Infantry unit
    std::cout << "Testing calculation methods for InfantryFactory:\n";
    std::cout << "Infantry Total Health: " << infantryFactory.calculateTotalHealthPerUnit(infantryUnit) << "\n";
    std::cout << "Infantry Total Damage: " << infantryFactory.calculateTotalDamagePerUnit(infantryUnit) << "\n";
    std::cout << "Infantry Total Defence: " << infantryFactory.calculateTotalDefencePerUnit(infantryUnit) << "\n\n";
    infantryUnit->disengage();

    // Clean up
    delete infantryUnit;
    infantryUnit = nullptr;
}

// Test the ShieldBearer class
void testShieldBearer() {
    // Create a ShieldBearer unit with specified attributes
    ShieldBearer shieldBearer(120, 40, 90, 10, "Test ShieldBearer");

    // Test the behavior of the ShieldBearer unit
    std::cout << "Testing ShieldBearer:\n";
    shieldBearer.prepare();
    shieldBearer.execute();
    shieldBearer.engage();
    shieldBearer.disengage();
    shieldBearer.retreat();

    // Test cloning functionality
    Soldiers* clonedShieldBearer = shieldBearer.clonis();
    std::cout << "Cloned ShieldBearer: " << clonedShieldBearer->getUnitName() << "\n";

    // Engage with the cloned unit
    std::cout << "Testing cloned ShieldBearer engaging in battle:\n";
    clonedShieldBearer->engage();
    shieldBearer.rest();

    // Clean up
    delete clonedShieldBearer;
    clonedShieldBearer = nullptr;
}

// Test the ShieldBearerFactory class
void testShieldBearerFactory() {
    ShieldBearerFactory shieldBearerFactory;

    // Create a ShieldBearer unit using the factory
    Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();
    std::cout << "Testing ShieldBearerFactory:\n";
    std::cout << "Created ShieldBearer: " << shieldBearerUnit->getUnitName() << "\n";

    // Engage the ShieldBearer unit in battle
    shieldBearerUnit->engage();

    // Test and display the calculated statistics for the ShieldBearer unit
    std::cout << "ShieldBearer's Total Health: " << shieldBearerFactory.calculateTotalHealthPerUnit(shieldBearerUnit) << "\n";
    std::cout << "ShieldBearer's Total Damage: " << shieldBearerFactory.calculateTotalDamagePerUnit(shieldBearerUnit) << "\n";
    std::cout << "ShieldBearer's Total Defense: " << shieldBearerFactory.calculateTotalDefencePerUnit(shieldBearerUnit) << "\n";

    // Clean up
    delete shieldBearerUnit;
    shieldBearerUnit = nullptr;
}

// Test the Boatman class
void testBoatman() {
    // Create a Boatman unit with specified attributes
    Boatman boatman(250, 140, 50, 20, "Test Boatman");

    // Test the behavior of the Boatman unit
    std::cout << "Testing Boatman:\n";
    boatman.execute();
    boatman.engage();
    boatman.disengage();
    boatman.prepare();
    boatman.retreat();

    // Test cloning functionality
    Soldiers* clonedBoatman = boatman.clonis();
    std::cout << "Cloned Boatman: " << clonedBoatman->getUnitName() << "\n";

    // Engage with the cloned unit
    std::cout << "Testing cloned Boatman engaging in battle:\n";
    clonedBoatman->engage();
    boatman.rest();

    // Clean up
    delete clonedBoatman;
    clonedBoatman = nullptr;
}

// Test the BoatmanFactory class
void testBoatmanFactory() {
    BoatmanFactory boatmanFactory;

    // Create a Boatman unit using the factory
    Soldiers* boatmanUnit = boatmanFactory.createUnit();
    std::cout << "Testing BoatmanFactory:\n";
    std::cout << "Created Boatman: " << boatmanUnit->getUnitName() << "\n";

    // Engage the Boatman unit in battle
    boatmanUnit->engage();

    // Test and display the calculated statistics for the Boatman unit
    std::cout << "Boatman's Total Health: " << boatmanFactory.calculateTotalHealthPerUnit(boatmanUnit) << "\n";
    std::cout << "Boatman's Total Damage: " << boatmanFactory.calculateTotalDamagePerUnit(boatmanUnit) << "\n";
    std::cout << "Boatman's Total Defense: " << boatmanFactory.calculateTotalDefencePerUnit(boatmanUnit) << "\n";

    // Clean up
    delete boatmanUnit;
    boatmanUnit = nullptr;
}

// Test the CareTaker class (Memento Pattern)
void testCareTaker() {
    // Create units
    Infantry infantry(100, 20, 10, 50, "Infantry");
    ShieldBearer shieldBearer(120, 40, 90, 10, "ShieldBearer");
    Boatman boatman(250, 140, 50, 20, "Boatman");

    // Create a CareTaker to manage the Memento objects
    CareTaker caretaker;

    // Save the current state of each unit
    caretaker.addMemento(infantry.militusMemento());
    caretaker.addMemento(shieldBearer.militusMemento());
    caretaker.addMemento(boatman.militusMemento());

    std::cout << "Testing CareTaker:\n";
    std::cout << "States saved!\n";

    // Disengage units
    infantry.disengage();
    shieldBearer.disengage();
    boatman.disengage();

    // Restore the saved state
    infantry.vivificaMemento(caretaker.undo());
    shieldBearer.vivificaMemento(caretaker.undo());
    boatman.vivificaMemento(caretaker.undo());

    std::cout << "States restored!\n";
}

// Simulate a full game scenario
void runGameSimulation() {
    std::cout << "\nRunning game simulation...\n";

    // Create factories for different types of soldiers
    InfantryFactory infantryFactory;
    ShieldBearerFactory shieldBearerFactory;
    BoatmanFactory boatmanFactory;

    // Create units using the factories
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

    // Clean up memory to prevent leaks
    delete infantryUnit;
    infantryUnit = nullptr;
    delete shieldBearerUnit;
    shieldBearerUnit = nullptr;
    delete boatmanUnit;
    boatmanUnit = nullptr;
    delete clonedInfantry;
    clonedInfantry = nullptr;

    std::cout << "Game simulation complete.\n";
}
