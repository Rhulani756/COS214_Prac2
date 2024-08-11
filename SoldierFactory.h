#ifndef PRAC_2_SOLDIERFACTORY_H
#define PRAC_2_SOLDIERFACTORY_H

#include "Soldiers.h"

class SoldierFactory {
private:
    Soldiers* soldiers;

protected:
    virtual Soldiers* createUnit() = 0;
    virtual int calculateTotalHealthPerUnit(Soldiers* unit) = 0;
    virtual int calculateTotalDamagePerUnit(Soldiers* unit) = 0;
    virtual int calculateTotalDefencePerUnit(Soldiers* unit) = 0;

public:
    virtual ~SoldierFactory() = default;
    SoldierFactory();

    Soldiers* getSoldiers() const;
    void setSoldiers(Soldiers* newSoldiers);
};

#endif // PRAC_2_SOLDIERFACTORY_H
