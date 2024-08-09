

#ifndef PRAC_2_INFANTRYFACTORY_H
#define PRAC_2_INFANTRYFACTORY_H

#include "Infantry.h"
#include "SoldierFactory.h"
class InfantryFactory: public SoldierFactory{
public:
    Soldiers * createUnit() override;
    int calculateTotalHealthPerUnit(Soldiers* unit) override;
    int calculateTotalDamagePerUnit(Soldiers* unit) override;
    int calculateTotalDefencePerUnit(Soldiers* unit) override;
};


#endif
