
#ifndef PRAC_2_SHIELDBEARERFACTORY_H
#define PRAC_2_SHIELDBEARERFACTORY_H

#include "ShieldBearer.h"
class ShieldBearerFactory {
public:
    Soldiers * createUnit();
    int calculateTotalHealthPerUnit();
    int calculateTotalDamagePerUnit();
    int calculateTotalDefencePerUnit();
};


#endif
