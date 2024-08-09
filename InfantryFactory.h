

#ifndef PRAC_2_INFANTRYFACTORY_H
#define PRAC_2_INFANTRYFACTORY_H

#include "Infantry.h"
class InfantryFactory {
public:
    Soldiers * createUnit();
    int calculateTotalHealthPerUnit();
    int calculateTotalDamagePerUnit();
    int calculateTotalDefencePerUnit();
};


#endif
