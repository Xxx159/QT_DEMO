#ifndef AIRPLANE_H
#define AIRPLANE_H


#include <iostream>

namespace advance {

class Airplane{
public:
    Airplane();
    ~Airplane();

    void setWings(int w);
    int getWings();

    void setWheels(int w);
    int getwheels();

    void setEngines(int e);
    int getEngines();

    virtual void fly();//实现多态

private:
    int wings;
    int wheels;
    int engines;

};

}


#endif // AIRPLANE_H
