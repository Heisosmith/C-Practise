#include <iostream>
using namespace std;

int main(){
    int a = 0,
        b = 0,
        m = 0,
        n = 0;
    //短路性   
    (m=a==b)||(n=b==a);
    cout<< "m="<<m<< endl
        << "n="<<n<< endl;
    //&&优先
    
    cout<< "m="<<m <<endl;
    return 0;
}

