#include "InfantryFactory.h"

// Create an Infantry unit and store it in the soldiers member
Soldiers* InfantryFactory::createUnit() {
    Soldiers* currentSoldiers = getSoldiers();
    if (currentSoldiers) {
        delete currentSoldiers; // Clean up the previous unit
    }
    setSoldiers(new Infantry(100, 20, 10, 50, "Bravo Company"));
    return getSoldiers();
}

// Calculate total health for the unit
int InfantryFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return unit->getHealthPerSoldier() * unit->getAmountOfSoldiersPerUnit();
}

// Calculate total damage for the unit
int InfantryFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return unit->getDamagePerSoldier() * unit->getAmountOfSoldiersPerUnit();
}

// Calculate total defence for the unit
int InfantryFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return unit->getDefencePerSoldier() * unit->getAmountOfSoldiersPerUnit();
}
