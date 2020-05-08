#include <iostream>
#include "airplane.h"

using namespace std;
using namespace advance;

Airplane::Airplane(){
    wings = 2;
    wheels = 8;
    engines = 4;

    cout<<"构造函数Airplane()"<<endl;

}
Airplane::~Airplane(){

    cout<<"析构函数~Airplane()"<<endl;

}

void Airplane::setWings(int w){
    wings = w;

}

int Airplane::getWings(){
    cout<<"飞机翅膀:"<<wings<<endl;
    return wings;
}

void Airplane::setWheels(int w){
    wheels = w;
}
int Airplane::getwheels(){
    cout<<"飞机轮子:"<<wheels<<endl;
    return wheels;
}

void Airplane::setEngines(int e){
    engines = e;
}
int Airplane::getEngines(){
    cout<<"飞机引擎"<<engines<<endl;
    return engines;
}

void Airplane::fly(){
    cout<<"airplane fly"<<endl;
}
