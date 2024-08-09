

#ifndef PRAC_2_SOLDIERFACTORY_H
#define PRAC_2_SOLDIERFACTORY_H

#include "Infantry.h"
#include "Infantry.h"
#include "Infantry.h"
class SoldierFactory {
private:
    Soldiers* soldiers;

protected:
    Soldiers* createUnit();
    int TotalHealthPerUnit();// calculate;
    int TotalDamagePerUnit();// calculate;
    int TotalDefencePerUnit();// calculate;

};


#endif
