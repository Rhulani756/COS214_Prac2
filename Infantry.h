#ifndef PRAC_2_INFANTRY_H
#define PRAC_2_INFANTRY_H
#include "Soldiers.h"

class Infantry: public Soldiers {
private:
    int healthPerSoldier =0;
    int damagePerSoldier=0;
    int defencePerSoldier=0;
    int amountOfSoldiersPerUnit=0;
    std::string unitName ="Infantry";
public:
    ////constructor
   Infantry(int health, int damage, int defence, int amount, std::string name)
        : Soldiers(health, damage, defence, amount, name) {}
   Infantry() 
        : Soldiers(), healthPerSoldier(0), damagePerSoldier(0),
         defencePerSoldier(0), amountOfSoldiersPerUnit(0), unitName("Infantry") {}
    Soldiers* clonis() const override;

    void engage();
    void disengage();

    void prepare() override;
    void execute() override;
    void retreat() override;
    void rest() override;

    //added child class destructors just in case memory cleanup is needed in the future.
    virtual ~Infantry() = default;

};


#endif
