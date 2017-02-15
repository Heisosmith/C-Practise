#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    a = 25;
    b = 031;
    c = 0x19;
    //不能直接采用二进制数常量
    cout<<a<<endl
        <<b<<endl
        <<c<<endl;
    return 0;
}

