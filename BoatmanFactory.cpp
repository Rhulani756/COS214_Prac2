#include "BoatmanFactory.h"

// Create a Boatman unit and store it in the soldiers member
Soldiers* BoatmanFactory::createUnit() {
    Soldiers* currentSoldiers = getSoldiers();
    if (currentSoldiers) {
        delete currentSoldiers; // Clean up the previous unit
    }
    setSoldiers(new Boatman(250, 140, 50, 20, "Boatman"));
    return getSoldiers();
}

// Calculate total health for the unit
int BoatmanFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return unit->getHealthPerSoldier() * unit->getAmountOfSoldiersPerUnit();
}

// Calculate total damage for the unit
int BoatmanFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return unit->getDamagePerSoldier() * unit->getAmountOfSoldiersPerUnit();
}

// Calculate total defence for the unit
int BoatmanFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return unit->getDefencePerSoldier() * unit->getAmountOfSoldiersPerUnit();
}
