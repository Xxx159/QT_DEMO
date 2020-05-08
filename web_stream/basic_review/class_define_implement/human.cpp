#include <iostream>
#include <human.h>

using namespace advance;

Human::Human(){
    std::cout<<"构造函数Human()"<<std::endl;
    age = 0;
    sex = 0;

}

Human::~Human(){
    std::cout<<"析构函数~Human()"<<std::endl;

}


void Human::setAge(int a){
    age = a;
}

int Human::getAge(){
    std::cout<<"年纪:"<<age<<std::endl;
    return age;
}

void Human::setSex(int a){
    sex = a;
}

int Human::getSex(){
    std::cout<<"性别:(0男性1女性)"<<sex<<std::endl;
    return sex;
}
