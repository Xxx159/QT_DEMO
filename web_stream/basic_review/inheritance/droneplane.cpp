#include "droneplane.h"
#include <iostream>

using namespace std;
using namespace advance;

Droneplane::Droneplane(){
    weapons = 1;
    cout<<"构造函数Droneplane()"<<endl;
}
Droneplane::~Droneplane(){
    cout<<"析构函数~Droneplane()"<<endl;
}

void Droneplane::setWeapons(int w){
    cout<<"无人机的武器:"<<w<<endl;
    weapons = w;
}
int Droneplane::getWeapons(){
    return weapons;
}

void Droneplane::fly(){
    cout<<"droneplane fly"<<endl;
}
