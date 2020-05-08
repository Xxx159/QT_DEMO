#include <iostream>
#include "airplane.h"
#include "fighterplane.h"
#include "droneplane.h"

using namespace std;
using namespace advance;

int main()
{
      //base_class
//    Airplane ap;
//    ap.getWings();
//    ap.getwheels();
//    ap.fly();

      //inheritance ,derived
//    FighterPlane fp;
//    fp.setWings(10);
//    fp.setWheels(20);
//    fp.setWeapons(6);
//    fp.fly();
//    cout<<"fighterplane:"<<fp.getWings()<<","<<fp.getwheels()<<","<<fp.getWeapons()<<endl;

      //polymorphism
    Airplane* ap1 = new FighterPlane();
    if(ap1){
        ap1->fly();
    }

    ap1 = new Droneplane();
    if(ap1){
        ap1->fly();
    }

    ap1 = new Airplane();
    if(ap1){
        ap1->fly();
    }

    delete ap1;


    cout << "Hello World!" << endl;
    return 0;
}
