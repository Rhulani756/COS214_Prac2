#include "Boatman.h"

//Engage method
void Boatman::engage() {
    std::cout << "Boatman " << unitName << " is engaging with " << amountOfSoldiersPerUnit << " soldiers!" << std::endl;
}

//Disengage method
void Boatman::disengage() {
    std::cout << "Boatman " << unitName << " is disengaging!" << std::endl;
}

//Prepare method //(Template Method pattern)
void Boatman::prepare() {
    std::cout << "Boatman " << unitName << " is preparing for battle!" << std::endl;
}

//Execute method //(Template Method pattern)
void Boatman::execute() {
    std::cout << "Boatman " << unitName << " is executing their battle plan!" << std::endl;
}

//Retreat method //(Template Method pattern)
void Boatman::retreat() {
    std::cout << "Boatman " << unitName << " is retreating!" << std::endl;
}

// Rest method (Template Method pattern)
void Boatman::rest() {
    std::cout << "Boatman " << unitName << " is resting!" << std::endl;
}