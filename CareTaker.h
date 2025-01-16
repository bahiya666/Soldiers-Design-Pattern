#ifndef CARETAKER_H
#define CARETAKER_H

#include <vector>
#include "Memento.h"

class CareTaker {
private:
    std::vector<Memento*> mementoList;

public:
    void addMemento(Memento* m) {
        mementoList.push_back(m);
    }

    Memento* getMemento(int index) {
        if (index >= 0 && index < mementoList.size()) {
            return mementoList[index];
        }
        return nullptr;
    }

    ~CareTaker() {
        for (auto& m : mementoList) {
            delete m;
        }
    }
};

#endif
