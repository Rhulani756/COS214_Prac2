
#include "Soldiers.h"
Soldiers::Soldiers(int health, int damage, int defence, int amount, std::string name)
    : healthPerSoldier(health), damagePerSoldier(damage), defencePerSoldier(defence), amountOfSoldiersPerUnit(amount), unitName(name) {

}
void Soldiers::engage() {
    std::cout << "Engaging with " << this->amountOfSoldiersPerUnit << " soldiers." << std::endl;
    prepare();
    execute();
    
}



void Soldiers::disengage() {
    retreat();
    rest();
}


Memento* Soldiers::militusMemento() {
    return new Memento(this->healthPerSoldier, this->damagePerSoldier, this->defencePerSoldier, this->amountOfSoldiersPerUnit, this->unitName);
}
void Soldiers::vivificaMemento(Memento* mem) {
    this->healthPerSoldier = mem->getHealthPerSoldier();
    this->damagePerSoldier = mem->getDamagePerSoldier();
    this->defencePerSoldier = mem->getDefencePerSoldier();
    this->amountOfSoldiersPerUnit = mem->getAmountOfSoldiersPerUnit();
    this->unitName = mem->getUnitName();
    delete mem;
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
        return this->amountOfSoldiersPerUnit;
}

std::string Soldiers::getUnitName() const {
        return unitName;
}

Soldiers::~Soldiers() {

}


