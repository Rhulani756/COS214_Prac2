
#ifndef PRAC_2_SHIELDBEARERFACTORY_H
#define PRAC_2_SHIELDBEARERFACTORY_H

#include "SoldierFactory.h"
#include "ShieldBearer.h"
class ShieldBearerFactory :public SoldierFactory{
public:
    Soldiers * createUnit() override;
    int calculateTotalHealthPerUnit(Soldiers* unit) override;
    int calculateTotalDamagePerUnit(Soldiers* unit) override;
    int calculateTotalDefencePerUnit(Soldiers* unit) override;
    virtual ~ShieldBearerFactory() = default; //added child class destructors just in case memory cleanup is needed in the future.
};


#endif
