
#include "Soldiers.h"

Soldiers::Soldiers(int health, int damage, int defence, int amount, std::string name): healthPerSoldier(health), 
damagePerSoldier(damage),defencePerSoldier(defence), amountOfSoldiersPerUnit(amount),unitName(name) {}

void Soldiers::engage() {
    prepare();
    execute();
}

void Soldiers::disengage() {
    retreat();
    rest();
}


Memento* Soldiers::militusMemento() {
    return new Memento(healthPerSoldier, damagePerSoldier, defencePerSoldier, amountOfSoldiersPerUnit, unitName);
}
void Soldiers::vivificaMemento(Memento* mem) {
    healthPerSoldier = mem->getHealthPerSoldier();
    damagePerSoldier = mem->getDamagePerSoldier();
    defencePerSoldier = mem->getDefencePerSoldier();
    amountOfSoldiersPerUnit = mem->getAmountOfSoldiersPerUnit();
    unitName = mem->getUnitName();
}

int Soldiers::getHealthPerSoldier() const {
    return healthPerSoldier;
}

int Soldiers::getDamagePerSoldier() const {
        return damagePerSoldier;
}

int Soldiers::getDefencePerSoldier() const {
        return defencePerSoldier;
}

int Soldiers::getAmountOfSoldiersPerUnit() const {
        return amountOfSoldiersPerUnit;
}

std::string Soldiers::getUnitName() const {
        return unitName;
}

Soldiers::~Soldiers() {

}

