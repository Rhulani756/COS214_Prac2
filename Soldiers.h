
#ifndef PRAC_2_SOLDIERS_H
#define PRAC_2_SOLDIERS_H

#include "Memento.h"
class Soldiers {


private:
    int healthPerSoldier = 0;
    int damagePerSoldier = 0;
    int defencePerSoldier = 0;
    int amountOfSoldiersPerUnit = 0;
    std::string unitName = "Soldiers";

    // Pure virtual methods for Template Method pattern
    virtual void prepare() = 0;
    virtual void execute() = 0;
    virtual void retreat() = 0;
    virtual void rest() = 0;
public:
   
   Soldiers(int health, int damage, int defence, int amount, std::string name);
   Soldiers():healthPerSoldier(0),defencePerSoldier(0),amountOfSoldiersPerUnit(0),unitName("Soldiers"){};

 virtual ~Soldiers();
        
    // Pure virtual method for Prototype pattern
    virtual Soldiers* clonis() const = 0;

    virtual void engage();
    virtual void disengage();

    Memento*  militusMemento();
    void vivificaMemento(Memento* mem);

    //added getter functons
    int getHealthPerSoldier() const ;
    int getDamagePerSoldier() const ;
    int getDefencePerSoldier() const ;
    int getAmountOfSoldiersPerUnit() const ;
    std::string getUnitName() const ;
 


};

#endif
