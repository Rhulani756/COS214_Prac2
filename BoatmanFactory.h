
#ifndef PRAC_2_BOATMANFACTORY_H
#define PRAC_2_BOATMANFACTORY_H

#include "Boatman.h"
#include "SoldierFactory.h"
class BoatmanFactory :SoldierFactory{
public:
    Soldiers * createUnit() override;
    int calculateTotalHealthPerUnit(Soldiers* unit) override;
    int calculateTotalDamagePerUnit(Soldiers* unit) override;
    int calculateTotalDefencePerUnit(Soldiers* unit) override;
    virtual ~BoatmanFactory() = default; //added child class destructors just in case memory cleanup is needed in the future.
};

#endif
