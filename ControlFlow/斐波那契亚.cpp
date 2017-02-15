//输出斐波那契亚数列前20项的值
#include <iostream>
using namespace std;

int main(){
    int a,b,c,i;
    a = b = 1;
    cout<< a<<" "<< b<<" ";
    for(i=0;i<20;i++){
        c = a +b;
        a = b;
        b = c;
        cout<< c <<" ";
    }
    cout<<endl;
    return 0;
}

