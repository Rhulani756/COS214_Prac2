
#ifndef PRAC_2_BOATMANFACTORY_H
#define PRAC_2_BOATMANFACTORY_H

#include "Boatman.h"
class BoatmanFactory {
public:
    Soldiers * createUnit();
    int calculateTotalHealthPerUnit();
    int calculateTotalDamagePerUnit();
    int calculateTotalDefencePerUnit();
};


#endif
