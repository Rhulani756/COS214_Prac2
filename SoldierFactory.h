

#ifndef PRAC_2_SOLDIERFACTORY_H
#define PRAC_2_SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory {
public:
    virtual ~SoldierFactory()=default;
    // Pure virtual function for creating unitss
    virtual Soldiers* createUnit() = 0;
    virtual int calculateTotalHealthPerUnit(Soldiers* unit) = 0;
    virtual int calculateTotalDamagePerUnit(Soldiers* unit) = 0;
    virtual int calculateTotalDefencePerUnit(Soldiers* unit) = 0;

};

#endif
