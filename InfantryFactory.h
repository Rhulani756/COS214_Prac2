
#ifndef PRAC_2_INFANTRYFACTORY_H
#define PRAC_2_INFANTRYFACTORY_H

#include "Infantry.h"
#include "SoldierFactory.h"
class InfantryFactory: public SoldierFactory{
public:
    Soldiers* createUnit() override;
    int calculateTotalHealthPerUnit(Soldiers* unit) override;
    int calculateTotalDamagePerUnit(Soldiers* unit) override;
    int calculateTotalDefencePerUnit(Soldiers* unit) override;
    virtual ~InfantryFactory() override= default; //added child class destructors just in case memory cleanup is needed in the future.
};


#endif
