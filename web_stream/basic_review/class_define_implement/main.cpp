#include <iostream>
#include "human.h"

using namespace std;
using namespace advance;

int main()              //int argc,char* argv[]
{
    //stack栈中
//    Human human;
//    human.setAge(66);
//    human.getAge();
//    human.setSex(1);
//    human.getSex();



    //heap堆中
    Human* human = new Human();
    if(human==NULL){
            //failed
        return 0;
    }
    human->setAge(77);
    human->setSex(0);
    human->getAge();
    human->getSex();

    delete human;
    human = NULL;

    cout << "Hello World!" << endl;
    return 0;
}

//类：构造函数（初始化），析构函数（释放内存），成员变量（属性），成员函数（方法）
//封装：private protected public
//继承:  父类（基类）与子类（派生类）    多层继承,多重继承
//多态: 同样的方法被不同的子类执行时有不同的行为  实现多态的方法-->虚函数，虚析构函数，纯虚函数，抽象类，接口类

//命名空间


//QT git github
