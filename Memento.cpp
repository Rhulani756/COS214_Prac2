#include "Memento.h"

Memento::Memento(int health, int damage, int defence, int amount, std::string name)
:healthPerSoldier(health),damagePerSoldier(damage),defencePerSoldier(defence),amountOfSoldiersPerUnit(amount),unitName(name)
{
    // this->healthPerSoldier=health;
    // this->damagePerSoldier=damage;
    // this->defencePerSoldier=defence;
    // this->amountOfSoldiersPerUnit=amount;
    // this->unitName=name;


}


int Memento::getHealthPerSoldier() const {
    return healthPerSoldier;
}

int Memento::getDamagePerSoldier() const {
    return damagePerSoldier;
}

int Memento::getDefencePerSoldier() const {
    return defencePerSoldier;
}

int Memento::getAmountOfSoldiersPerUnit() const {
    return amountOfSoldiersPerUnit;
}

std::string Memento::getUnitName() const {
    return unitName;
}
