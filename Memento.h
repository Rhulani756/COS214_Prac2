
#ifndef PRAC_2_MEMENTO_H
#define PRAC_2_MEMENTO_H
#include <iostream>
#include <string>
class Memento {
private:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;

public:
    virtual ~Memento() = default;
    Memento(int health, int damage, int defence, int amount,std::string name);
    //Memento():{healthPerSoldier(0),defencePerSoldier(0),amountOfSoldiersPerUnit(0),unitName("Momento")};
       
    int getHealthPerSoldier() const;
    int getDamagePerSoldier() const;
    int getDefencePerSoldier() const;
    int getAmountOfSoldiersPerUnit() const;
    std::string getUnitName() const;

};


#endif
