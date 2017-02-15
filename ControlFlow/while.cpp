#include <iostream>
using namespace std;

int main(){
    int k = 10;
    //注意条件表达式为赋值运算，
    //非关系运算
    while(k=0)
        k = k-1;
    cout<< k <<endl;

    int x = 2;
    //条件表达式为increment/decrement运算
    while(x--);
    cout<< x <<endl;
    return 0;
}

