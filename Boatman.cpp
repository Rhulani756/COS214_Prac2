#include "Boatman.h"

Boatman::Boatman(int health, int damage, int defence, int amount, std::string name) {
    healthPerSoldier = health;
    damagePerSoldier = damage;
    defencePerSoldier = defence;
    amountOfSoldiersPerUnit = amount;
    unitName = name;
}

Soldiers* Boatman::clonis() const {
    return new Boatman(*this);
}

void Boatman::prepare() {
    // Specific preparation for Boatman
}

void Boatman::execute() {
    // Specific execution for Boatman
}

void Boatman::retreat() {
    // Specific retreat for Boatman
}

void Boatman::rest() {
    // Specific retreat for Boatman
}