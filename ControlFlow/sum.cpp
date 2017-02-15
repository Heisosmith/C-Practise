//求1 - 1/3 + 1/5 - 1/7...，直到最后一项的绝对值小于10e-6为止.

#include <iostream>
using namespace std;

int main(){
    int i =1,
        sign = 1;
    
    //t声明为浮点数   
    double t = 1,
         sum = 0;
    
    while(t>1e-6){
        sum += sign *t;
        sign = -sign;
        i = i + 2;
        t = 1.0/i;
    }
    cout<< sum <<endl;
    return 0;
}

