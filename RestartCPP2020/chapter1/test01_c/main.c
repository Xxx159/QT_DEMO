#include <stdio.h>

static int flag = 1;
void trace_on(){flag = 1;}
void trace_off(){flag =0;}

void trace2(char* s){
    if(flag)
        printf("%s\n",s);
}

void trace(char* s)
{
    printf("%s\n",s);
}


int main()
{
   // trace("hello world");
    trace2("flag1");
    trace_off();
    trace2("flag2");

    return 0;
}
