#include <iostream>
using namespace std;

int main(){
    int a;
    float b,c;
    //指定float,则转float
    cout<< sizeof(12+c*b+a+'x') <<endl;
    //浮点数默认转double
    cout<< sizeof(12+2.2) <<endl;
    cout<< sizeof(double) <<endl;
    return 0;
}
