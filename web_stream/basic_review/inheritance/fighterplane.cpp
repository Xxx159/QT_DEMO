#include "fighterplane.h"
#include <iostream>

using namespace std;
using namespace advance;

FighterPlane::FighterPlane(){
    weapons = 1;
    cout<<"构造函数fighterplane()"<<endl;
}
FighterPlane::~FighterPlane(){
    cout<<"析构函数~fighterplane()"<<endl;
}

void FighterPlane::setWeapons(int w){
    cout<<"战斗机的武器:"<<w<<endl;
    weapons = w;
}
int FighterPlane::getWeapons(){
    return weapons;
}

void FighterPlane::fly(){
    cout<<"fighterplan fly"<<endl;
}
