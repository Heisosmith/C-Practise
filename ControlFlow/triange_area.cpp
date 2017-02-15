#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,t,area;
    
    cout<<"Enter a,b,c:" <<endl;
    cin>>a>>b>>c;
    //三角形构成条件
    //第三边的取值范围 (0,a+b)
    if(a+b>c &&b+c>a &&a+c>b){
        t = (a+b+c)/2.0;
        area = sqrt(t*(t-a)*(t-b)*(t-c));
        cout<< area <<endl;
    }
    else
        cout<<"No triange!" <<endl;
    return 0;
}

