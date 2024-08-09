
#ifndef PRAC_2_SOLDIERS_H
#define PRAC_2_SOLDIERS_H
#include <string>
#include "Memento.h"
class Soldiers {
public:
    int healthPerSoldier;
    int damagePerSoldier;
    int defencePerSoldier;
    int amountOfSoldiersPerUnit;
    std::string unitName;
public:
    virtual ~Soldiers()=default;
    // Pure virtual method for Prototype pattern
    virtual Soldiers* clonis()const=0;

    void engage();
    void disengage();
    // Pure virtual methods for Template Method pattern
    virtual void prepare() = 0;
    virtual void execute() = 0;
    virtual void retreat() = 0;
    virtual void rest() = 0;

    Memento* militusMemento() const;
    void vivificaMemento(Memento* memento);
};

#endif
