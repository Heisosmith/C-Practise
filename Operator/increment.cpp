#include <iostream>
using namespace std;

int main(){
    int x = 7,
        y = 8,
        z = 5;
    //仅对z++,不对运算结果++
    cout<< (x*y/z++) <<endl;
    return 0;
}

