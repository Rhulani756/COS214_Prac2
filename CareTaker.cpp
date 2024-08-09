#include "CareTaker.h"

void CareTaker::addMemento(Memento* m) {
    mementoList.push_back(m);
}

Memento* CareTaker::getMemento(int index) {
    if (index >= 0 && index < mementoList.size()) {
        return mementoList[index];
    }
    return nullptr;
}
