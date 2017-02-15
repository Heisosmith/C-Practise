#include <iostream>
using namespace std;

int main(){
    int a = 1,
        b = 2,
        c = 3,
        d = 4,
        f = 0;
    f = (a!=b)?c++:d++; 
    cout<< f <<endl;
    
    a = 3;
    b = -4;
    f = (a<b) ? a+b :(a-=b+4);     
    cout<< f <<endl;
    //cout<< (a<b) ? a+b :(a-=b+4) <<endl;
    //左右符号放一起有歧义,编译报错

    int x = 100;
    //先x++,再x+10
    f = x++>100 ? x+20 :x+10;
    cout<< f <<endl;
    return 0;
}

