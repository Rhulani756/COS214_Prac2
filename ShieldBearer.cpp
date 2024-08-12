#include "ShieldBearer.h"

// Constructor
// ShieldBearer::ShieldBearer(int health, int damage, int defence, int amount, std::string name)
//     : Soldiers(health, damage, defence, amount, name) {}

// Clone method (Prototype Pattern)
Soldiers* ShieldBearer::clonis() const {
    return new ShieldBearer(*this);
}

// Engage method
void ShieldBearer::engage() {
    std::cout << "ShieldBearer " << this->unitName << " is engaging with " << this->getAmountOfSoldiersPerUnit() << " soldiers!" << std::endl;
    prepare();
    execute();
}

// Disengage method
void ShieldBearer::disengage() {
    std::cout << "ShieldBearer " << unitName << " is disengaging!" << std::endl;
    retreat();
    rest();
}

// Prepare method (Template Method pattern)
void ShieldBearer::prepare() {
    std::cout << "ShieldBearer " << unitName << " is forming a defensive wall with their shields!" << std::endl;
}

// Execute method (Template Method pattern)
void ShieldBearer::execute() {
    std::cout << "ShieldBearer " << unitName << " is advancing slowly while maintaining formation!" << std::endl;
}

// Retreat method (Template Method pattern)
void ShieldBearer::retreat() {
    std::cout << "ShieldBearer " << unitName << " is falling back in formation, protecting the rear!" << std::endl;
}

// Rest method (Template Method pattern)
void ShieldBearer::rest() {
    std::cout << "ShieldBearer " << unitName << " is resting and repairing their shields!" << std::endl;
}
