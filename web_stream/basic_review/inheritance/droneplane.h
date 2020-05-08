#ifndef DRONEPLANE_H
#define DRONEPLANE_H

#include <iostream>
#include "airplane.h"

namespace advance {

class Droneplane:public Airplane{
public:
    Droneplane();
    ~Droneplane();

    void setWeapons(int w);
    int getWeapons();

    virtual void fly();

private:
    int weapons;
};

}
#endif // DRONEPLANE_H
