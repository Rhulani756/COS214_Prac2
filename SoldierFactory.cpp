#include "SoldierFactory.h"

SoldierFactory::SoldierFactory() : soldiers(nullptr) {}

// SoldierFactory::~SoldierFactory() {
//     if (soldiers) {
//         delete soldiers;
//         soldiers = nullptr;
//     }
// }

Soldiers* SoldierFactory::getSoldiers() const {
    return this->soldiers;
}

void SoldierFactory::setSoldiers(Soldiers* newSoldiers) {
    if (this->soldiers) {
        delete this->soldiers;
        this->soldiers = nullptr;
    }
    this->soldiers = newSoldiers;
}
