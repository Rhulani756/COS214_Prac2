#include "Infantry.h"



Soldiers* Infantry::clonis() const {
    return new Infantry(*this);
}

//Engage method
void Infantry::engage() {
    std::cout << "Infantry " << unitName << " is engaging with " << amountOfSoldiersPerUnit << " soldiers!" << std::endl;
}

//Disengage method
void Infantry::disengage() {
    std::cout << "Infantry " << unitName << " is disengaging!" << std::endl;
}

//Prepare method //(Template Method pattern)
void Infantry::prepare() {
    std::cout << "Infantry " << unitName << " is preparing for battle!" << std::endl;
}

//Execute method //(Template Method pattern)
void Infantry::execute() {
    std::cout << "Infantry " << unitName << " is executing their battle plan!" << std::endl;
}

//Retreat method //(Template Method pattern)
void Infantry::retreat() {
    std::cout << "Infantry " << unitName << " is retreating!" << std::endl;
}

// Rest method (Template Method pattern)
void Infantry::rest() {
    std::cout << "Infantry " << unitName << " is resting!" << std::endl;
}