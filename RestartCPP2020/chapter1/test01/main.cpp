#include <iostream>

using namespace std;

class Trace{
public:
    Trace(){flag = 1;}
    void on(){flag = 1;}
    void off(){flag =0;}
    void print(const char* s){
        if(flag){
            printf("%s\n",s);
        }
    } //加const

private:
    int flag;
};

int main()
{

//    Trace t;
//    t.print("hello world!");
    Trace t;
    t.on();

    t.print("hello world");
    t.off();


    return 0;
}

