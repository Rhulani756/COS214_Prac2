#include "ShieldBearer.h"



Soldiers* ShieldBearer::clonis() const {
    return new ShieldBearer(*this);
}

//Engage method
void ShieldBearer::engage() {
    std::cout << "ShieldBearer " << unitName << " is engaging with " << amountOfSoldiersPerUnit << " soldiers!" << std::endl;
}

//Disengage method
void ShieldBearer::disengage() {
    std::cout << "ShieldBearer " << unitName << " is disengaging!" << std::endl;
}

//Prepare method //(Template Method pattern)
void ShieldBearer::prepare() {
    std::cout << "ShieldBearer " << unitName << " is preparing for battle!" << std::endl;
}

//Execute method //(Template Method pattern)
void ShieldBearer::execute() {
    std::cout << "ShieldBearer " << unitName << " is executing their battle plan!" << std::endl;
}

//Retreat method //(Template Method pattern)
void ShieldBearer::retreat() {
    std::cout << "ShieldBearer " << unitName << " is retreating!" << std::endl;
}

// Rest method (Template Method pattern)
void ShieldBearer::rest() {
    std::cout << "ShieldBearer " << unitName << " is resting!" << std::endl;
}





