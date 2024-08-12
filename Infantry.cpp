#include "Infantry.h"

// Infantry::Infantry(int health, int damage, int defence, int amount, std::string name)
//     : Soldiers(health, damage, defence, amount, name) {
//     // Ensure proper initialization
// }


Soldiers* Infantry::clonis() const {
    Infantry* cloned = new Infantry(*this);
    // Debugging to ensure the clone has the correct number of soldiers
    std::cout << "Cloning Infantry: Soldiers created with " << cloned->getAmountOfSoldiersPerUnit() << " soldiers." << std::endl;
    return cloned;
}

//Engage method
void Infantry::engage() {
   
    std::cout << "Infantry " << this->getUnitName() << " is engaging with " << this->getAmountOfSoldiersPerUnit() << " soldiers!" << std::endl;
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