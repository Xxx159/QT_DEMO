#ifndef FIGHTERPLANE_H
#define FIGHTERPLANE_H

#include <iostream>
#include "airplane.h"

namespace advance {

class FighterPlane:public Airplane{
public:
    FighterPlane();
    ~FighterPlane();

    void setWeapons(int w);
    int getWeapons();

    virtual void fly();

private:
    int weapons;
};

}
#endif // FIGHTERPLANE_H
