
#ifndef PRAC_2_SHIELDBEARER_H
#define PRAC_2_SHIELDBEARER_H

#include "Soldiers.h"
class ShieldBearer :public Soldiers{

private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
public:
    ////constructor
   ShieldBearer(int health, int damage, int defence, int amount, std::string name)
        : Soldiers(health, damage, defence, amount, name) {}


    Soldiers* clonis() const override;

    void engage();
    void disengage();

    void prepare() override;
    void execute() override;
    void retreat() override;
    void rest() override;

    //added child class destructors just in case memory cleanup is needed in the future.
    virtual ~ShieldBearer() = default;

};




#endif
