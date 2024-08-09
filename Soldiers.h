
#ifndef PRAC_2_SOLDIERS_H
#define PRAC_2_SOLDIERS_H
#include <string>

class Soldiers {
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
