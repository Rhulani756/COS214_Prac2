
#include "Soldiers.h"

void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}


Memento* Soldiers::militusMemento() const {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}
void Soldiers::vivificaMemento(Memento* memento) {
    healthPerSoldier = memento->getHealthPerSoldier();
    damagePerSoldier = memento->getDamagePerSoldier();
    defencePerSoldier = memento->getDefencePerSoldier();
    amountOfSoldiersPerUnit = memento->getAmountOfSoldiersPerUnit();
    unitName = memento->getUnitName();
}