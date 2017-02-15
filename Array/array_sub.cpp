//输出数组的最大值及其下标

#include <iostream>
using namespace std;

int main(){
    int a[10],max,sub,n;
    for(n=0;n<10;n++)
        a[n] = n;
    max = a[0];
    //sub的引入
    sub = 0;
    for(n=0;n<10;n++){
        if(a[n]>max){
            max = a[n];
            sub = n;
        }
    }
    cout<< "max= "<< max <<endl
        << "sub= "<< sub <<endl;
    return 0;
}

