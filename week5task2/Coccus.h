#pragma once
#include "Bacteria.h"
class Coccus :
    public Bacteria
{
    bool isAlive = true;

public:
    Coccus() {
        Bacteria::distance = 3;
        Bacteria::sign = 'C';
    }
    //(int x, int y)
      //   : Bacteria(x, y) {
     //}*/


    virtual bool checkNearby() override { return true; };

    virtual Bacteria* split() { return nullptr; }

};

