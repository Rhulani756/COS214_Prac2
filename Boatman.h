
#ifndef PRAC_2_BOATMAN_H
#define PRAC_2_BOATMAN_H

#include "Soldiers.h"

class Boatman : public Soldiers{
private:
    int healthPerSoldier= 0;
    int damagePerSoldier= 0;
    int defencePerSoldier= 0;
    int amountOfSoldiersPerUnit = 0;
    std::string unitName = "Boatman";

public:
////constructor
 Boatman(int health, int damage, int defence, int amount, std::string name)
        : Soldiers(health, damage, defence, amount, name) {}
   Boatman() 
       : Soldiers(0,0,0,0,"Boatman") {}; 
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
