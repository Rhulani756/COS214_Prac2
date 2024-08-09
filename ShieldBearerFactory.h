
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
};


#endif
