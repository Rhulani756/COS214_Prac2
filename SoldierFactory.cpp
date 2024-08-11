

#include "SoldierFactory.h"

SoldierFactory::SoldierFactory() : soldiers(nullptr){

}

Soldiers *SoldierFactory::getSoldiers() const {
    return this->soldiers;
}
void SoldierFactory::setSoldiers( Soldiers* newSoldiers) {
    if (this->soldiers) {
        //prevent memory leaks
    delete this->soldiers;
    this->soldiers= nullptr;
}
    this->soldiers =newSoldiers;
   
}

