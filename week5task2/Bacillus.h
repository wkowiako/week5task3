#pragma once
#include "Bacteria.h"
class Bacillus :
    public Bacteria
{
    bool isAlive = true;

public:
    Bacillus() {
        Bacteria::distance = 3;
        Bacteria::sign = 'B';
    };

    virtual bool checkNearby(const Dish& dish);

    virtual Bacteria* split() {
        return nullptr;
    }
};

