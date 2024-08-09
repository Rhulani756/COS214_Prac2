#include "ShieldBearer.h"

ShieldBearer::ShieldBearer(int health, int damage, int defence, int amount, std::string name) {
    healthPerSoldier = health;
    damagePerSoldier = damage;
    defencePerSoldier = defence;
    amountOfSoldiersPerUnit = amount;
    unitName = name;
}

Soldiers* ShieldBearer::clonis() const {
    return new ShieldBearer(*this);
}

void ShieldBearer::prepare() {
    // Specific preparation for ShieldBearer
}

void ShieldBearer::execute() {
    // Specific execution for ShieldBearer
}

void ShieldBearer::retreat() {
    // Specific retreat for ShieldBearer
}

void ShieldBearer::rest() {
    // Specific rest for ShieldBearer
}
