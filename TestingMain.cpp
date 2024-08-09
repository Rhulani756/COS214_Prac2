#include <iostream>
#include <vector>
#include "InfantryFactory.h"
#include "ShieldBearerFactory.h"
#include "BoatmanFactory.h"
#include "CareTaker.h"

int main() {
    // Create factories
    InfantryFactory infantryFactory;
    ShieldBearerFactory shieldBearerFactory;
    BoatmanFactory boatmanFactory;

    // Create units using factories
    Soldiers* infantryUnit = infantryFactory.createUnit();
    Soldiers* shieldBearerUnit = shieldBearerFactory.createUnit();
    Soldiers* boatmanUnit = boatmanFactory.createUnit();

    std::cout << "Units created:\n";
    std::cout << "Infantry, Shield Bearer, and Boatman units ready for battle!\n\n";

    // Engage units in battle
    infantryUnit->engage();
    shieldBearerUnit->engage();
    boatmanUnit->engage();

    std::cout << "\nUnits have engaged in battle.\n\n";

    // Clone the infantry unit
    Soldiers* clonedInfantry = infantryUnit->clonis();

    std::cout << "Infantry unit cloned!\n\n";

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
    infantryUnit->vivificaMemento(caretaker.getMemento(0));
    shieldBearerUnit->vivificaMemento(caretaker.getMemento(1));
    boatmanUnit->vivificaMemento(caretaker.getMemento(2));

    std::cout << "\nGame state restored!\n";
    std::cout << "Infantry unit ready for battle again.\n\n";

    // Clean up
    delete infantryUnit;
    delete shieldBearerUnit;
    delete boatmanUnit;
    delete clonedInfantry;

    std::cout << "Game simulation complete.\n";

    return 0;
}
