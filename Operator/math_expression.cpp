#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,x;
    cout<< "Enter input a and b:" <<endl;
    cin>>a>>b;
    cout<< "Enter input x:" <<endl;
    cin>>x;
    //注意3*sin(x)加括号
    cout<< 2*sqrt(x)+(a+b)/(3*sin(x)) <<endl;
    return 0;
}

