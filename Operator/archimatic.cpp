#include <iostream>
using namespace std;

int main(){
    float x = 2.5,
          y = 4.7;
    //从左到右运算
    //取余运算必须是整型,
    //不符则编译报错
    cout<< x+3%(int)(x+y)/4 <<endl;
    return 0;
}

