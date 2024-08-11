#include "ShieldBearerFactory.h"

Soldiers* ShieldBearerFactory::createUnit() {
    if (getSoldiers()) {
        delete getSoldiers(); // Clean up the previous unit
    }
    setSoldiers(new ShieldBearer(120, 40, 90, 10, "ShieldBearer"));
    return getSoldiers();
}

// Calculate total health for the unit
int ShieldBearerFactory::calculateTotalHealthPerUnit(Soldiers* unit) {
    return unit->getHealthPerSoldier() * unit->getAmountOfSoldiersPerUnit();
}

// Calculate total damage for the unit
int ShieldBearerFactory::calculateTotalDamagePerUnit(Soldiers* unit) {
    return unit->getDamagePerSoldier() * unit->getAmountOfSoldiersPerUnit();
}

// Calculate total defence for the unit
int ShieldBearerFactory::calculateTotalDefencePerUnit(Soldiers* unit) {
    return unit->getDefencePerSoldier() * unit->getAmountOfSoldiersPerUnit();
}
