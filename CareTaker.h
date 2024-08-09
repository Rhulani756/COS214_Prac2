
#ifndef PRAC_2_CARETAKER_H
#define PRAC_2_CARETAKER_H
#include <vector>
#include "Memento.h"

class CareTaker {
private:
    std::vector<Memento *> mementoList;

public:
    void addMemento(Memento *m);

    Memento *getMemento(int index);
};
   


#endif
