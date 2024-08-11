
#ifndef PRAC_2_BOATMAN_H
#define PRAC_2_BOATMAN_H

#include "Soldiers.h"

class Boatman : public Soldiers{
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;

public:
////constructor
 Boatman(int health, int damage, int defence, int amount, std::string name)
        : Soldiers(health, damage, defence, amount, name) {}
   Boatman() 
        : Soldiers(), healthPerSoldier(0), damagePerSoldier(0), 
          defencePerSoldier(0), amountOfSoldiersPerUnit(0), unitName("Boatman") {}
       Soldiers* clonis() const override {
        return new Boatman(*this);
    }
    void engage();
    void disengage();

    void prepare() override;
    void execute() override;
    void retreat() override;
    void rest() override;

    //added child class destructors just in case memory cleanup is needed in the future.
    virtual ~Boatman() = default;

};


#endif
