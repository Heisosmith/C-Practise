#include <iostream>
using namespace std;

int main(){
    int a,b,c,maxNum;
    cin>>a>>b>>c;
    maxNum = a;
    if(b>a){
        maxNum = b;
        if(c>b)
            maxNum =c;
    }
    if(c>a)
        maxNum = c;
    cout<<maxNum<<endl;
    return 0;
}

