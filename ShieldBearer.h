
#ifndef PRAC_2_SHIELDBEARER_H
#define PRAC_2_SHIELDBEARER_H

#include "Soldiers.h"
#include <string>
class ShieldBearer {

#include "Soldiers.h"
#include <string>

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
public:
    Soldiers* clonis();
    void engage();
    void disengage();
    void prepare();
    void execute();
    void retreat();
    void rest();



};


#endif
