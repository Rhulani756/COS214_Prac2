
#ifndef PRAC_2_BOATMAN_H
#define PRAC_2_BOATMAN_H
#include <string>
#include "Soldiers.h"

class Boatman {
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
