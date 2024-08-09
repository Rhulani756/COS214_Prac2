#ifndef PRAC_2_INFANTRY_H
#define PRAC_2_INFANTRY_H
#include "Soldiers.h"

class Infantry: public Soldiers {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
public:
    ////constructor
    Infantry(int health, int damage, int defence, int amount, std::string name);

    Soldiers* clonis() const override;

    void engage();
    void disengage();

    void prepare() override;
    void execute() override;
    void retreat() override;
    void rest() override;

};


#endif
