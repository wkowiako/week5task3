#pragma once
#include "Bacteria.h"
class Spirillum :
    public Bacteria
{

    bool isAlive = true;

public:
    Spirillum() {
        Bacteria::distance = 2;
        Bacteria::sign = 'S';
    };

    //    //int x, int y)
    //    //: Bacteria(x, y) {  
    ////}


    virtual bool checkNearby() override { return true; };

    virtual Bacteria* split() {
        return nullptr;
    }
};
