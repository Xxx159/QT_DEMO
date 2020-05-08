#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>

namespace advance {

class Human{
public:
    Human();
    ~Human();

    void setAge(int age);
    int getAge();

    void setSex(int sex);
    int getSex();

private:
    int age;
    int sex;    //0:male 1:female
};

}



#endif // HUMAN_H
