#ifndef PRAC_2_INFANTRY_H
#define PRAC_2_INFANTRY_H
#include "Soldiers.h"
#include <string>
class Infantry {
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
