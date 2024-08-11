#include "CareTaker.h"

CareTaker::~CareTaker() {
    for (Memento* m : mementoList) {
        delete m;
        m=nullptr;
    }
}
void CareTaker::addMemento(Memento* m) {
    mementoList.push_back(m);
}




Memento* CareTaker::undo() {
    if (mementoList.empty()) {
        return nullptr;
    }
    Memento* memento = mementoList.back();
    mementoList.pop_back();
    return memento;
}