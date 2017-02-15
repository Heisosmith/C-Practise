#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i,j,s=0;
    //对多层嵌套循环的理解,
    //序号化次数统计
    for(i=1;i<=4;i++)
        for(j=1;j<=i;j++)
            s = s + 1;
    cout<< "s = "<< s <<endl;

    //求（100,200）间的所有质数
    int k,n,sign;
    //n+=2,由已知条件减少运算量
    for(n=101;n<200;n+=2){
        k = sqrt(n);
        //采用标志位的方法
        for(i=2;i<k;i++){
            sign = 1;
            if(n%i==0){
                sign = 0;
                break;
            }
        }
        if(sign)
            cout<< n <<" ";
    }
    cout<<endl;

    return 0;
}

