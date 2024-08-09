#include "Infantry.h"

Infantry::Infantry(int health, int damage, int defence, int amount, std::string name) {
    healthPerSoldier = health;
    damagePerSoldier = damage;
    defencePerSoldier = defence;
    amountOfSoldiersPerUnit = amount;
    unitName = name;
}

Soldiers* Infantry::clonis() const {
    return new Infantry(*this);
}

void Infantry::prepare() {
    // Specific preparation for Infantry
}

void Infantry::execute() {
    // Specific execution for Infantry
}

void Infantry::retreat() {
    // Specific retreat for Infantry
}

void Infantry::rest() {
    // Specific rest for Infantry
}